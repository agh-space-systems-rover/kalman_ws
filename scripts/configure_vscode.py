# Configure auto-complete, code analysis and terminal for VS Code.

# TODO: Add ~/.local/**/site-packages to VSCode paths

import os, shutil, json, glob


def copy_if_updated(from_dir: str, to_dir: str):
    if from_dir is None or to_dir is None:
        return

    if os.path.isdir(from_dir) and os.path.isdir(to_dir):
        from_mtime = os.path.getmtime(from_dir)
        to_mtime = os.path.getmtime(to_dir)
        if from_mtime > to_mtime:
            # Recursively copy modified objects.
            for item in os.listdir(from_dir):
                item_from = os.path.join(from_dir, item)
                item_to = os.path.join(to_dir, item)
                if os.path.isdir(item_from):
                    copy_if_updated(item_from, item_to)
                elif os.path.isfile(item_from) and os.path.isfile(item_to):
                    item_from_mtime = os.path.getmtime(item_from)
                    item_to_mtime = os.path.getmtime(item_to)
                    if item_from_mtime > item_to_mtime:
                        shutil.copy2(item_from, item_to)
                else:
                    shutil.copy2(item_from, item_to)
    else:
        shutil.copytree(from_dir, to_dir, dirs_exist_ok=True)


def elem(arr, index, default=None):
    if index < len(arr):
        return arr[index]
    return default


ws_dir = os.path.normpath(os.path.dirname(__file__) + "/..")
config_path = os.path.join(ws_dir, ".vscode/settings.json")

site_dir = os.path.expanduser("~/.vscode-paths/ros2-site-packages")
dist_dir = os.path.expanduser("~/.vscode-paths/ros2-dist-packages")
include_dir = os.path.expanduser("~/.vscode-paths/ros2-include")
usr_include_dir = os.path.expanduser("~/.vscode-paths/usr-include")
usr_lib_python_dirs = []

# If needed, copy ROS 2 site-packages and dist-packages to ~ for auto-complete on the host.
running_distrobox = "DISTROBOX_HOST_HOME" in os.environ
if running_distrobox:
    copy_if_updated(
        elem(glob.glob("/opt/ros/*/lib/python*/site-packages"), 0), site_dir
    )
    copy_if_updated(
        elem(glob.glob("/opt/ros/*/local/lib/python*/dist-packages"), 0), dist_dir
    )
    # Also copy C++ headers.
    copy_if_updated(elem(glob.glob("/opt/ros/*/include"), 0), include_dir)
    copy_if_updated("/usr/include", usr_include_dir)
    # Copy Python packages.
    for python_dir in glob.glob("/usr/lib/python*/dist-packages"):
        python_name = os.path.basename(os.path.dirname(python_dir))
        usr_python_dir = os.path.expanduser(
            f"~/.vscode-paths/usr-lib-{python_name}-dist-packages"
        )
        copy_if_updated(python_dir, usr_python_dir)
        usr_lib_python_dirs.append(usr_python_dir)
    for python_dir in glob.glob("/usr/local/lib/python*/dist-packages"):
        python_name = os.path.basename(os.path.dirname(python_dir))
        usr_python_dir = os.path.expanduser(
            f"~/.vscode-paths/usr-local-lib-{python_name}-dist-packages"
        )
        copy_if_updated(python_dir, usr_python_dir)
        usr_lib_python_dirs.append(usr_python_dir)
    # site-packages is normally not present in /usr/lib

# Load the configuration files.
if os.path.isfile(config_path):
    with open(config_path) as f:
        config = json.load(f)
else:
    config = {}

# Add terminal profile.
if running_distrobox:
    config["terminal.integrated.profiles.linux"] = {
        "kalman_ws": {"path": f"{ws_dir}/scripts/distrobox"}
    }
else:
    config["terminal.integrated.profiles.linux"] = {
        "kalman_ws": {
            "path": f"/usr/bin/bash --rcfile {ws_dir}/scripts/native-ubuntu.bashrc"
        }
    }
config["terminal.integrated.defaultProfile.linux"] = "kalman_ws"

# Reset paths.
if running_distrobox:
    config["python.autoComplete.extraPaths"] = [
        site_dir,
        dist_dir,
    ] + usr_lib_python_dirs
    config["C_Cpp.default.includePath"] = [include_dir + "/**", usr_include_dir + "/**"]
else:
    config["python.autoComplete.extraPaths"] = []
    config["C_Cpp.default.includePath"] = []

# Find the install directory.
install_dir = os.path.join(ws_dir, "install")
if os.path.isdir(install_dir):
    # For each installed ROS 2 package...
    for item in os.listdir(install_dir):
        # If the item is a directory...
        item_dir = os.path.join(install_dir, item)
        if os.path.isdir(item_dir):
            # ...then it is a package.
            # Add the package to the configuration.
            # Add site-packages directory to the paths (packages built with ament_python).
            # Same for local/**/dist-packages (packages built with ament_cmake_python)
            for site_packages_dir in glob.glob(
                os.path.join(item_dir, "lib", "python*", "site-packages")
            ) + glob.glob(
                os.path.join(item_dir, "local", "lib", "python*", "dist-packages")
            ):
                config["python.autoComplete.extraPaths"].append(site_packages_dir)
            # Add C++ include directories to the paths.
            for include_dir in glob.glob(os.path.join(item_dir, "include")):
                config["C_Cpp.default.includePath"].append(include_dir + "/**")

# If running in Distrobox, add the host's user site-packages and dist-packages to the paths.
if running_distrobox:
    for site_packages_dir in glob.glob(
        os.path.expanduser("~/.local/lib/python*/site-packages")
    ):
        config["python.autoComplete.extraPaths"].append(site_packages_dir)

    for dist_packages_dir in glob.glob(
        os.path.expanduser("~/.local/lib/python*/dist-packages")
    ):
        config["python.autoComplete.extraPaths"].append(dist_packages_dir)

# Sort the paths.
config["python.autoComplete.extraPaths"].sort()

# Replicate auto-complete paths for analysis.
config["python.analysis.extraPaths"] = config["python.autoComplete.extraPaths"]

# Associate Jinja2 configuration files with YAML.
if "files.associations" not in config:
    config["files.associations"] = {}
config["files.associations"]["*.yaml.j2"] = "yaml"

# Save the configuration file.
os.makedirs(os.path.dirname(config_path), exist_ok=True)
with open(config_path, "w") as f:
    json.dump(config, f, indent=4)
