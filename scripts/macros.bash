# Included by ./.bashrc

# Executes colcon build in workspace.
build() {
    prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Verify if rosdep cache exists.
    if [ ! -d "$HOME/.ros/rosdep" ]; then
        # Update rosdep index.
        echo "Updating rosdep index..."
        rosdep update --rosdistro $ROS_DISTRO --default-yes
    fi

    # Find packages to build.
    # If no arguments are provided, build all packages.
    pkg_paths=$(colcon list --base-paths src | grep -oP '(?<=\s)[^ ]+(?=\s)')
    if [ $# -ne 0 ]; then
        pkg_paths=$(echo $pkg_paths | tr ' ' '\n' | grep -f <(echo $@))
    fi
    echo "Packages to build:"
    pkg_names=$(echo $pkg_paths | tr ' ' '\n' | rev | cut -d '/' -f 1 | rev | sed 's/^/  /')
    for pkg in $pkg_names; do
        echo '  -' $pkg
    done

    # Install rosdep dependencies.
    echo "Installing dependencies..."
    rosdep install --rosdistro $ROS_DISTRO --default-yes --ignore-packages-from-source --from-paths $pkg_paths

    # Install additional APT dependencies.
    # Those are located in the apt_packages.txt file in each package.
    # Use colcon to list packages and paths to them.
    # Then check if apt_packages.txt exists in each path.
    # If it does, install the packages using apt.
    echo "Installing custom APT dependencies..."
    installed_apt_ids=$(apt list --installed 2>/dev/null | cut -d '/' -f 1)
    for pkg_path in $pkg_paths; do
        if [ -f "$pkg_path/apt_packages.txt" ]; then
            # Read apt_packages.txt.
            apt_ids=$(cat $pkg_path/apt_packages.txt)
            # For each package name, check if it is installed.
            # If not, install it.
            for apt_id in $apt_ids; do
                # Check if apt_id is in installed_apt_ids.
                # installed_apt_ids="package-1 package-2 ..."
                if [[ $installed_apt_ids != *"$apt_id"* ]]; then
                    echo "Installing $apt_id..."
                    sudo apt install -y $apt_id
                fi
            done
        fi
    done

    # Install additional PIP dependencies.
    # Those are located in the requirements.txt file in each package.
    # Use colcon to list packages and paths to them.
    # Then check if requirements.txt exists in each path.
    # If it does, install the packages using pip.
    echo "Installing custom PIP dependencies..."
    installed_pip_ids=$(pip freeze 2>/dev/null | cut -d '=' -f 1)
    for pkg_path in $pkg_paths; do
        if [ -f "$pkg_path/requirements.txt" ]; then
            # Read requirements.txt.
            pip_ids=$(cat $pkg_path/requirements.txt | sed 's/\s*#.*//g')
            # For each package name, check if it is installed.
            # If not, install it.
            for pip_id in $pip_ids; do
                # Check if PIP_ID is in installed_pip_ids.
                # installed_pip_ids="package-1 package-2..."
                pip_id_without_version=$(echo $pip_id | cut -d '=' -f 1)
                if [[ $installed_pip_ids != *"$pip_id_without_version"* ]]; then
                    echo "Installing $pip_id..."
                    pip install $pip_id
                fi
            done
        fi
    done

    # Build the workspace.
    echo "Building packages..."
    colcon build --symlink-install --base-paths src --packages-select $pkg_names --allow-overriding $pkg_names
    if [ $? -ne 0 ]; then
        echo "Failed to build some packages."
        cd $prev_dir
        unset prev_dir
        return
    fi

    # Source setup scripts.
    source /opt/ros/humble/local_setup.bash
    source install/local_setup.bash

    # Load .vscode/settings.json.
    echo "Updating Visual Studio Code settings..."
    python3 $_KALMAN_WS_ROOT/scripts/configure_vscode.py

    echo "Done building packages."

    cd $prev_dir
    unset prev_dir
}

# Removes build artifacts in workspace.
clean() {
    # Remove directories.
    rm -rf $_KALMAN_WS_ROOT/build
    rm -rf $_KALMAN_WS_ROOT/install
    rm -rf $_KALMAN_WS_ROOT/log

    # Remove paths from $AMENT_PREFIX_PATH and $CMAKE_PREFIX_PATH.
    AMENT_PREFIX_PATH=/opt/ros/$ROS_DISTRO
    unset CMAKE_PREFIX_PATH
}

# # Downloads non-existing repositories using VCS.
# # Then pulls all repositories using Git.
# pull() {
#     prev_dir=$(pwd)
#     cd $_KALMAN_WS_ROOT

#     # Find all repositories.
#     # REPOS=$(find ./src/ -name .git -execdir pwd \;)

#     # Pull all repositories.
#     # for REPO in $REPOS; do
#     #     cd $REPO
#     #     git pull
#     #     if [ $? -ne 0 ]; then
#     #         echo "Failed to pull $REPO."
#     #         cd $prev_dir
#     #         unset prev_dir
#     #         return
#     #     fi
#     # done

#     # Do the same in parallel.
#     find ./src/ -name .git -execdir pwd \; | xargs -n 1 -P 8 -I {} git -C {} pull

#     cd $prev_dir
#     unset prev_dir
# }

# # Pushes changes in each repository.
# # Will automatically commit if needed.
# # Will ask for the commit message.
# push() {
#     prev_dir=$(pwd)
#     cd $_KALMAN_WS_ROOT

#     # Find all repositories.
#     REPOS=$(find . -type d -name .git -execdir pwd \;)

#     # Push all repositories.
#     for REPO in $REPOS; do
#         # Check if there are changes.
#         cd $REPO
#         git diff-index --quiet HEAD --
#         if [ $? -ne 0 ]; then
#             # Changes exist.
#             echo "There are uncommitted changes in $REPO."

#             # Ask for the commit message.
#             echo "Commit message:"
#             read COMMIT_MESSAGE

#             # Ask for optional branch name (default to current branch).
#             CURRENT_BRANCH=$(git rev-parse --abbrev-ref HEAD)
#             echo "Create new branch? Name (leave empty for current branch):"
#             read BRANCH_NAME
#             if [ ! -z "$BRANCH_NAME" ]; then
#                 # Try to create the branch.
#                 git checkout -b $BRANCH_NAME
#                 if [ $? -ne 0 ]; then
#                     echo "Failed to create branch $BRANCH_NAME."
#                     cd $prev_dir
#                     unset prev_dir
#                     return
#                 fi
#             fi

#             # Commit changes.
#             git add .
#             git commit -m "$COMMIT_MESSAGE"
#             if [ $? -ne 0 ]; then
#                 echo "Failed to commit changes."
#                 cd $prev_dir
#                 unset prev_dir
#                 return
#             fi
#             git push --set-upstream origin $BRANCH_NAME

#         fi
#     done

#     cd $prev_dir
#     unset prev_dir
# }
