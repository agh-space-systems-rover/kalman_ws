import os
import argparse
import json

# Input: --marker-file=rosdep_build_mod_times.json --trigger-file=package.xml src/path/to/package1 src/path/to/package2 ...
# Stdout: Output to put in the marker file after the build succeeds.
# No stdout means that no build is needed.
if __name__ == "__main__":
    # Get args.
    parser = argparse.ArgumentParser()
    parser.add_argument("--marker-file", required=True)
    parser.add_argument("--trigger-file", required=True)
    parser.add_argument("packages", nargs="+")
    args = parser.parse_args()

    # Ignore packages that do not have the trigger file.
    relevant_pkgs = [
        pkg
        for pkg in args.packages
        if os.path.exists(os.path.join(pkg, args.trigger_file))
    ]

    # Get the modification times of packages.
    cur_mods = {}
    for pkg in relevant_pkgs:
        path = os.path.join(pkg, args.trigger_file)
        cur_mods[pkg] = os.path.getmtime(path)

    # Read mods from ~/.cache/kalman_ws/
    try:
        with open(
            os.path.join(os.path.expanduser("~/.cache/kalman_ws"), args.marker_file),
            "r",
        ) as f:
            last_mods = json.load(f)
    except (FileNotFoundError, json.JSONDecodeError):
        last_mods = {}

    # Check if any selected package has been modified.
    need_rebuild = False
    new_mods = last_mods.copy()
    for pkg in relevant_pkgs:
        if pkg not in last_mods or cur_mods[pkg] > last_mods[pkg]:
            need_rebuild = True
            new_mods[pkg] = cur_mods[pkg]

    # Respond
    if need_rebuild:
        print(json.dumps(new_mods))
    else:
        pass
