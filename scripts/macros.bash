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
    pkg_info=$(colcon list --base-paths src | grep -oP '\S+\s\S+(?=\s)')
    pkg_info=($pkg_info)
    pkg_names=""
    pkg_paths=""
    # pkg_info format: "pkg1_name pkg1_path pkg2_name pkg2_path ..."
    if [ $# -ne 0 ]; then
        # If arguments are provided, build only those packages whose names contain any of the provided queries.
        queries="$@"
        for ((i = 0; i < ${#pkg_info[@]}; i += 2)); do
            name=${pkg_info[$i]}
            path=${pkg_info[$i + 1]}
            for query in $queries; do
                if [[ $name == *"$query"* ]]; then
                    pkg_names="$pkg_names $name"
                    pkg_paths="$pkg_paths $path"
                    break
                fi
            done
        done
    fi
    pkg_names=$(echo $pkg_names | sed 's/^ //')
    pkg_paths=$(echo $pkg_paths | sed 's/^ //')

    # Display which packages will be built if filtering is used.
    if [ ! -z "$pkg_names" ]; then
        echo "Packages to build:"
        for pkg in $pkg_names; do
            echo '  -' $pkg
        done
    fi
    
    # Install rosdep dependencies.
    echo "Installing dependencies..."
    if [ -z "$pkg_paths" ]; then
        # If no packages are selected, install dependencies for all packages.
        rosdep install --rosdistro $ROS_DISTRO --default-yes --ignore-packages-from-source --from-paths src
    else
        # If packages are selected, install dependencies for those packages only.
        rosdep install --rosdistro $ROS_DISTRO --default-yes --ignore-packages-from-source --from-paths $pkg_paths
    fi

    # Check if rosdep install was successful.
    if [ $? -ne 0 ]; then
        echo "Failed to install dependencies."
        cd $prev_dir
        unset prev_dir
        return
    fi

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
                pip_id_without_version=$(echo $pip_id | cut -d '=' -f 1 | cut -d '>' -f 1 | cut -d '<' -f 1)
                if [[ $installed_pip_ids != *"$pip_id_without_version"* ]]; then
                    echo "Installing $pip_id..."
                    pip install $pip_id
                fi
            done
        fi
    done

    # Build the workspace.
    echo "Building packages..."
    if [ -z "$pkg_names" ]; then
        # If no packages are selected, build all packages.
        colcon build --symlink-install --base-paths src --cmake-args -DCMAKE_BUILD_TYPE=RelWithDebInfo
    else
        # If packages are selected, build only those packages.
        colcon build --symlink-install --base-paths src --packages-select $pkg_names --allow-overriding $pkg_names --cmake-args -DCMAKE_BUILD_TYPE=RelWithDebInfo
    fi
    if [ $? -ne 0 ]; then
        echo "Failed to build some packages."
        cd $prev_dir
        unset prev_dir
        return
    fi

    # Source setup scripts.
    source $_KALMAN_WS_ROOT/scripts/source-ros-setups.bash

    # Load .vscode/settings.json.
    echo "Updating Visual Studio Code settings..."
    python3 $_KALMAN_WS_ROOT/scripts/configure_vscode.py

    echo "Done building packages."

    cd $prev_dir
    unset prev_dir
}

# Removes build artifacts in workspace.
clean() {
    # Select packages to clean.
    # If no arguments are provided, select all packages.
    # See the same code in build() for additional comments.
    pkg_info=$(colcon list --base-paths src | grep -oP '\S+\s\S+(?=\s)')
    pkg_info=($pkg_info)
    pkg_names=""
    pkg_paths=""
    if [ $# -ne 0 ]; then
        queries="$@"
        for ((i = 0; i < ${#pkg_info[@]}; i += 2)); do
            name=${pkg_info[$i]}
            path=${pkg_info[$i + 1]}
            for query in $queries; do
                if [[ $name == *"$query"* ]]; then
                    pkg_names="$pkg_names $name"
                    pkg_paths="$pkg_paths $path"
                    break
                fi
            done
        done
    fi
    pkg_names=$(echo $pkg_names | sed 's/^ //')
    pkg_paths=$(echo $pkg_paths | sed 's/^ //')

    # Display which packages will be cleared if queries are used.
    if [ ! -z "$pkg_names" ]; then
        echo "Packages to clean:"
        for pkg in $pkg_names; do
            echo '  -' $pkg
        done
    fi

    if [ -z "$pkg_names" ]; then
        # If not arguments were provided, perform a full wipe.
        rm -rf $_KALMAN_WS_ROOT/build
        rm -rf $_KALMAN_WS_ROOT/install
        rm -rf $_KALMAN_WS_ROOT/log
    else
        # Remove build artifacts for selected packages only.
        for pkg_name in $pkg_names; do
            rm -rf $_KALMAN_WS_ROOT/build/$pkg_name
            rm -rf $_KALMAN_WS_ROOT/install/$pkg_name
        done
    fi

    # Remove paths from $AMENT_PREFIX_PATH and $CMAKE_PREFIX_PATH.
    unset AMENT_PREFIX_PATH
    unset CMAKE_PREFIX_PATH
    source $_KALMAN_WS_ROOT/scripts/source-ros-setups.bash

    echo "Done cleaning."
}

# Auto-formats all supported file types in the workspace.
format() {
    prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Add Python binaries to the PATH if they are not already there.
    if [[ ":$PATH:" != *":$HOME/.local/bin:"* ]]; then
        export PATH=$HOME/.local/bin:$PATH
    fi

    # Ensure that clang-format and black are installed from PyPI.
    if ! command -v clang-format &> /dev/null; then
        echo "Installing clang-format..."
        pip3 install --user clang-format
    fi
    if ! command -v black &> /dev/null; then
        echo "Installing black..."
        pip3 install --user black
    fi

    # Find Python files to format and run black on them.
    python_files=$(find src -name '*.py')
    if [ ! -z "$python_files" ]; then
        echo "Formatting Python files:"
        black $python_files
        echo
    fi

    # Find C++ files to format and run clang-format on them.
    cpp_files=$(find src -name '*.cpp' -o -name '*.hpp' -o -name '*.c' -o -name '*.h')
    if [ ! -z "$cpp_files" ]; then
        echo "Formatting C++ files:"
        for file in $cpp_files; do
            # Check if any upper directory contains an AMENT_IGNORE or COLCON_IGNORE file.
            # If it does, skip the file.
            dir=$(dirname "$file")
            while [ "$dir" != "." ] && [ "$dir" != "/" ]; do
                if [ -e "$dir/AMENT_IGNORE" ] || [ -e "$dir/COLCON_IGNORE" ]; then
                    continue 2
                fi
                dir=$(dirname "$dir")
            done
            echo "Formatting $(basename $file)..."
            clang-format -i $file
        done
        echo
    fi

    cd $prev_dir
    unset prev_dir
}

# Runs Colcon tests and linters in the workspace.
# This macro cannot be named 'test' because it conflicts with the built-in test command in Bash.
lint() {
    prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Select packages to test.
    # If no arguments are provided, select all packages.
    # See the same code in build() for additional comments.
    pkg_info=$(colcon list --base-paths src | grep -oP '\S+\s\S+(?=\s)')
    pkg_info=($pkg_info)
    pkg_names=""
    pkg_paths=""
    if [ $# -ne 0 ]; then
        queries="$@"
        for ((i = 0; i < ${#pkg_info[@]}; i += 2)); do
            name=${pkg_info[$i]}
            path=${pkg_info[$i + 1]}
            for query in $queries; do
                if [[ $name == *"$query"* ]]; then
                    pkg_names="$pkg_names $name"
                    pkg_paths="$pkg_paths $path"
                    break
                fi
            done
        done
    fi
    pkg_names=$(echo $pkg_names | sed 's/^ //')
    pkg_paths=$(echo $pkg_paths | sed 's/^ //')

    echo "Running tests:"

    # Throw if workspace has not been built.
    if [ ! -d "build" ]; then
        echo "Workspace has not been built yet. Run 'build' first."
        cd $prev_dir
        unset prev_dir
        return
    fi

    # Run Colcon test.
    if [ -z "$pkg_names" ]; then
        colcon test --base-paths src
    else
        colcon test --base-paths src --packages-select $pkg_names
    fi

    # TODO: Somethow detect test failure and provide results for only the selected packages.

    cd $prev_dir
    unset prev_dir
}

# Finds the largest objects current Git repository.
git-du() {
    # Create a table with rows formatted like so: "<hash> <size> <path>"
    table="$(
        git rev-list --objects --all |
        git cat-file --batch-check='%(objecttype) %(objectname) %(objectsize) %(rest)' |
        sed -n 's/^blob //p' |
        sort --numeric-sort --key=2 |
        cut -c 1-12,41- |
        $(command -v gnumfmt || echo numfmt) --field=2 --to=iec-i --suffix=B --padding=7 --round=nearest
    )"

    # Display the 10 most space-consuming objects.
    echo ...
    echo "$table" | tail -n 10

    # Create a sum expression from the sizes.
    exp="$(echo "$table" | awk '{ print $2 }' | paste -sd+ -)"
    # example exp: 923B+927B+974B+983B+1017B+1.0KiB+1.0KiB+1.1KiB+1.1KiB+1.1KiB

    # Convert human-readable sizes to byte counts and then evaluate the sum.
    exp="$(echo "$exp" | sed 's/GiB/*1073741824/g' | sed 's/MiB/*1048576/g' | sed 's/KiB/*1024/g' | sed 's/B//g')"
    total="$(echo "$exp" | bc)"

    # Count all files.
    num_files="$(echo "$table" | wc -l)"

    # Display the total size and the number of files.
    echo "$(echo "$total" | $(command -v gnumfmt || echo numfmt) --to=iec-i --suffix=B --padding=20) total ($num_files files)"

    # Find the size of the pack files and convert it to byte count.
    pack_total_hr="$(git count-objects -vH | grep -E 'size-pack' | sed 's/.*size-pack: //')"
    pack_total="$(echo "$pack_total_hr" | sed 's/GiB/*1073741824/g' | sed 's/MiB/*1048576/g' | sed 's/KiB/*1024/g' | sed 's/B//g' | bc)"

    # Display the size of the pack files.
    echo "$(echo "$pack_total" | $(command -v gnumfmt || echo numfmt) --to=iec-i --suffix=B --padding=20) of pack files (represents download size only if no other branches were checked out since cloning)"
}

# Resets all submodules to main and pulls any recent changes.
reset-pull() {
    prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Find all submodules.
    REPOS=$(find ./src/ -name .git -execdir pwd \;)

    # # checkout
    # echo "$REPOS" | xargs -P 8 -I {} git -C {} checkout main
    # # reset
    # echo "$REPOS" | xargs -P 8 -I {} git -C {} reset --hard origin/main
    # # pull
    # find ./src/ -name .git -execdir pwd \; | xargs -P 8 -I {} git -C {} pull

    echo "Checking out on main..."
    for REPO in $REPOS; do
        cd $REPO
        printf "$(basename $REPO) "
        git_out=$(git checkout main 2>&1)
        if [ $? -ne 0 ]; then
            echo "Failed to checkout on main:\n$git_out"
            cd $prev_dir
            unset prev_dir
            return
        fi
    done
    echo
    echo

    echo "Resetting to origin/main..."
    for REPO in $REPOS; do
        cd $REPO
        printf "$(basename $REPO) "
        git_out=$(git reset --hard origin/main 2>&1)
        if [ $? -ne 0 ]; then
            echo "Failed to reset to origin/main:\n$git_out"
            cd $prev_dir
            unset prev_dir
            return
        fi
    done
    echo
    echo

    echo "Pulling changes..."
    for REPO in $REPOS; do
        cd $REPO
        printf "$(basename $REPO) "
        git_out=$(git pull 2>&1)
        if [ $? -ne 0 ]; then
            echo "Failed to pull changes:\n$git_out"
            cd $prev_dir
            unset prev_dir
            return
        fi
    done
    echo
    echo

    # Print current commit hashes and statuses.
    echo "Currently at:"
    for REPO in $REPOS; do
        cd $REPO
        printf "$(basename $REPO) - "
        git_out=$(git log -1 --oneline 2>&1)
        echo $git_out
    done

    cd $prev_dir
    unset prev_dir
}

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