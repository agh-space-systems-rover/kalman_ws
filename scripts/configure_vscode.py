# Configure auto-complete, code analysis and terminal for VS Code.

import os, shutil, json, glob

ws_dir = os.path.normpath(os.path.dirname(__file__) + "/..")
config_path = os.path.join(ws_dir, ".vscode/settings.json")
site_dir = os.path.expanduser("~/.vscode-ros2-site-packages")
dist_dir = os.path.expanduser("~/.vscode-ros2-dist-packages")

# If needed, copy ROS 2 site-packages and dist-packages to ~ for auto-complete on the host.
shutil.copytree(glob.glob("/opt/ros/*/lib/python*/site-packages")[0], site_dir, dirs_exist_ok=True)
shutil.copytree(glob.glob("/opt/ros/*/local/lib/python*/dist-packages")[0], dist_dir, dirs_exist_ok=True)

# Load the configuration file.
if os.path.isfile(config_path):
    with open(config_path) as f:
        config = json.load(f)
else:
    config = {}

# Add terminal profile.
running_distrobox = "DISTROBOX_HOST_HOME" in os.environ
if running_distrobox:
    config["terminal.integrated.profiles.linux"] = {
        "kalman": {
            "path": f"{ws_dir}/scripts/distrobox"
        }
    }
else:
    config["terminal.integrated.profiles.linux"] = {
        "kalman": {
            "path": f"/usr/bin/bash --rcfile {ws_dir}/scripts/.bashrc"
        }
    }
config["terminal.integrated.defaultProfile.linux"] = "kalman"

# Reset paths.
config["python.autoComplete.extraPaths"] = [site_dir, dist_dir]

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
            for site_packages_dir in glob.glob(os.path.join(item_dir, "lib", "python*", "site-packages")):
                config["python.autoComplete.extraPaths"].append(site_packages_dir)

# Sort the paths.
config["python.autoComplete.extraPaths"].sort()

# Replicate auto-complete paths for analysis.
config["python.analysis.extraPaths"] = config["python.autoComplete.extraPaths"]

# Save the configuration file.
os.makedirs(os.path.dirname(config_path), exist_ok=True)
with open(config_path, "w") as f:
    json.dump(config, f, indent=4)
