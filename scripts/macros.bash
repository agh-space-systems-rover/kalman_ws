# Included by ./.bashrc

# Executes colcon build in workspace.
# TODO: Auto-install all */requiremets.txt found in src (up to depth = 3?)
build() {
    prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Verify if rosdep cache exists.
    if [ ! -d "$HOME/.ros/rosdep" ]; then
        # Update rosdep index.
        echo "Updating rosdep index..."
        rosdep update --rosdistro $ROS_DISTRO --default-yes
    fi

    # Install rosdep dependencies.
    echo "Installing dependencies..."
    rosdep install --rosdistro $ROS_DISTRO --default-yes --ignore-packages-from-source --from-path src

    # Install additional APT dependencies.
    # Those are located in the apt_packages.txt file in each package.
    # Use colcon to list packages and paths to them.
    # Then check if apt_packages.txt exists in each path.
    # If it does, install the packages using apt.
    echo "Installing custom APT dependencies..."
    PKG_PATHS=$(colcon list | grep -oP '(?<=\s)[^ ]+(?=\s)')
    INSTALLED_APT_IDS=$(apt list --installed 2>/dev/null | cut -d '/' -f 1)
    for PKG_PATH in $PKG_PATHS; do
        if [ -f "$PKG_PATH/apt_packages.txt" ]; then
            # Read apt_packages.txt.
            APT_IDS=$(cat $PKG_PATH/apt_packages.txt)
            # For each package name, check if it is installed.
            # If not, install it.
            for APT_ID in $APT_IDS; do
                # Check if APT_ID is in INSTALLED_APT_IDS.
                # INSTALLED_APT_IDS="package-1 package-2 ..."
                if [[ $INSTALLED_APT_IDS != *"$APT_ID"* ]]; then
                    echo "Installing $APT_ID..."
                    sudo apt install -y $APT_ID
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
    INSTALLED_PIP_IDS=$(pip freeze 2>/dev/null | cut -d '=' -f 1)
    for PKG_PATH in $PKG_PATHS; do
        if [ -f "$PKG_PATH/requirements.txt" ]; then
            # Read requirements.txt.
            PIP_IDS=$(cat $PKG_PATH/requirements.txt | sed 's/\s*#.*//g')
            # For each package name, check if it is installed.
            # If not, install it.
            for PIP_ID in $PIP_IDS; do
                # Check if PIP_ID is in INSTALLED_PIP_IDS.
                # INSTALLED_PIP_IDS="package-1 package-2..."
                PIP_ID_WITHOUT_VERSION=$(echo $PIP_ID | cut -d '=' -f 1)
                if [[ $INSTALLED_PIP_IDS != *"$PIP_ID_WITHOUT_VERSION"* ]]; then
                    echo "Installing $PIP_ID..."
                    pip install $PIP_ID
                fi
            done
        fi
    done

    # Build the workspace.
    echo "Building packages..."
    colcon build --symlink-install --base-paths src
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
