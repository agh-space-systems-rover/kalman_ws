# Included by ./setup.bash

# Executes colcon build in workspace.
build() {
    local prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT
    
    # Select packages to build.
    # If no arguments are provided, build all packages.
    local pkg_names=""
    local pkg_paths=""
    while IFS=: read -r name path; do
        local pkg_names="$pkg_names $name"
        local pkg_paths="$pkg_paths $path"
    done < <(python3 "$_KALMAN_WS_ROOT/scripts/select_colcon_packages.py" "$@")
    local selected_packages=false
    if [ $# -ne 0 ]; then
        local selected_packages=true
    fi

    # If no packages are found, show an error messeage and return.
    if [ -z "$pkg_names" ]; then
        echo "The query did not match any packages."
        cd $prev_dir
        return
    fi

    # Display which packages will be built if filtering is used.
    if [ $selected_packages = true ]; then
        echo "Packages to build:"
        for pkg in $pkg_names; do
            echo '  -' $pkg
        done
    fi
    
    # Install rosdep dependencies.
    mkdir -p $HOME/.cache/kalman_ws
    local can_skip_rosdep_json=$(python3 $_KALMAN_WS_ROOT/scripts/can_skip_install.py --marker-file=rosdep_mod_times.json --trigger-file=package.xml $pkg_paths)
    if [ -n "$can_skip_rosdep_json" ]; then
        echo "Installing rosdep dependencies..."
        rosdep install --rosdistro $ROS_DISTRO --default-yes --ignore-packages-from-source --from-paths $pkg_paths
        if [ $? -ne 0 ]; then
            echo "Failed to install rosdep dependencies."
            cd $prev_dir
            return
        fi
        # Update marker file.
        echo "$can_skip_rosdep_json" > $HOME/.cache/kalman_ws/rosdep_mod_times.json
    fi

    # Install additional APT dependencies.
    # Those are located in the apt_packages.txt file in each package.
    local can_skip_apt_json=$(python3 $_KALMAN_WS_ROOT/scripts/can_skip_install.py --marker-file=apt_mod_times.json --trigger-file=apt_packages.txt $pkg_paths)
    if [ -n "$can_skip_apt_json" ]; then
        echo "Installing custom APT dependencies..."
        local installed_apt_ids=$(apt list --installed 2>/dev/null | cut -d '/' -f 1)
        for pkg_path in $pkg_paths; do
            if [ -f "$pkg_path/apt_packages.txt" ]; then
                # Read apt_packages.txt.
                local apt_ids=$(cat $pkg_path/apt_packages.txt)
                # For each package name, check if it is installed.
                # If not, install it.
                for apt_id in $apt_ids; do
                    # Check if apt_id is in installed_apt_ids.
                    # installed_apt_ids="package-1 package-2 ..."
                    if [[ $installed_apt_ids != *"$apt_id"* ]]; then
                        echo "Installing $apt_id..."
                        sudo apt install -y $apt_id
                        if [ $? -ne 0 ]; then
                            echo "Failed to install $apt_id."
                            cd $prev_dir
                            return
                        fi
                    fi
                done
            fi
        done
        echo "$can_skip_apt_txt" > $HOME/.cache/kalman_ws/apt_mod_times.json
    fi

    # Install additional PIP dependencies.
    # Those are located in the requirements.txt file in each package.
    local can_skip_pipe_json=$(python3 $_KALMAN_WS_ROOT/scripts/can_skip_install.py --marker-file=pip_mod_times.json --trigger-file=requirements.txt $pkg_paths)
    if [ -n "$can_skip_pipe_json" ]; then
        echo "Installing custom PIP dependencies..."
        local installed_pip_ids=$(pip freeze 2>/dev/null | cut -d '=' -f 1)
        for pkg_path in $pkg_paths; do
            if [ -f "$pkg_path/requirements.txt" ]; then
                # Read requirements.txt.
                local pip_ids=$(cat $pkg_path/requirements.txt | sed 's/\s*#.*//g')
                # For each package name, check if it is installed.
                # If not, install it.
                for pip_id in $pip_ids; do
                    # Check if PIP_ID is in installed_pip_ids.
                    # installed_pip_ids="package-1 package-2..."
                    local pip_id_without_version=$(echo $pip_id | cut -d '=' -f 1 | cut -d '>' -f 1 | cut -d '<' -f 1)
                    if [[ $installed_pip_ids != *"$pip_id_without_version"* ]]; then
                        echo "Installing $pip_id..."
                        pip install $pip_id
                        if [ $? -ne 0 ]; then
                            echo "Failed to install $pip_id."
                            cd $prev_dir
                            return
                        fi
                    fi
                done
            fi
        done
        echo "$can_skip_pipe_json" > $HOME/.cache/kalman_ws/pip_mod_times.json
    fi

    # Build the workspace.
    echo "Building packages..."
    colcon build --symlink-install --base-paths src --packages-select $pkg_names --cmake-args -DCMAKE_BUILD_TYPE=RelWithDebInfo
    if [ $? -ne 0 ]; then
        echo "Failed to build some packages."
        cd $prev_dir
        return
    fi

    # Load .vscode/settings.json.
    echo "Updating Visual Studio Code settings..."
    python3 $_KALMAN_WS_ROOT/scripts/configure_vscode.py

    # Source setup scripts.
    source $_KALMAN_WS_ROOT/scripts/source-ros-setups.bash

    echo "Done."
    cd $prev_dir
}

# Removes build artifacts in workspace.
clean() {
    local prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Select packages to build.
    # If no arguments are provided, build all packages.
    local pkg_names=""
    local pkg_paths=""
    while IFS=: read -r name path; do
        local pkg_names="$pkg_names $name"
        local pkg_paths="$pkg_paths $path"
    done < <(python3 "$_KALMAN_WS_ROOT/scripts/select_colcon_packages.py" "$@")
    local selected_packages=false
    if [ $# -ne 0 ]; then
        local selected_packages=true
    fi

    # If no packages are found, show an error messeage and return.
    if [ -z "$pkg_names" ]; then
        echo "The query did not match any packages."
        cd $prev_dir
        return
    fi

    # Display which packages will be cleared if queries are used.
    if [ $selected_packages = true ]; then
        echo "Packages to clean:"
        for pkg in $pkg_names; do
            echo '  -' $pkg
        done
    fi

    if [ $selected_packages = false ]; then
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

    echo "Done."
    cd $prev_dir
}

# Auto-formats all supported file types in the workspace.
format() {
    local prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Add Python binaries to the PATH if they are not already there.
    if [[ ":$PATH:" != *":$HOME/.local/bin:"* ]]; then
        export PATH=$HOME/.local/bin:$PATH
    fi

    # Ensure that clang-format and black are installed from PyPI.
    # Use PIP to check for that because clang-format could have been installed from APT.
    local pkgs=$(pip3 freeze)
    if ! echo $pkgs | grep -q ' clang-format=='; then
        echo "Installing clang-format..."
        pip3 install --user clang-format
    fi
    if ! echo $pkgs | grep -q ' black=='; then
        echo "Installing black..."
        pip3 install --user black
    fi

    # Find Python files to format and run black on them.
    local python_files=$(find src -name '*.py')
    if [ ! -z "$python_files" ]; then
        echo "Formatting Python files:"
        black $python_files
        echo
    fi

    # Find C++ files to format and run clang-format on them.
    local cpp_files=$(find src -name '*.cpp' -o -name '*.hpp' -o -name '*.c' -o -name '*.h')
    if [ ! -z "$cpp_files" ]; then
        echo "Formatting C++ files:"
        for file in $cpp_files; do
            # Check if any upper directory contains an AMENT_IGNORE or COLCON_IGNORE file.
            # If it does, skip the file.
            local dir=$(dirname "$file")
            while [ "$dir" != "." ] && [ "$dir" != "/" ]; do
                if [ -e "$dir/AMENT_IGNORE" ] || [ -e "$dir/COLCON_IGNORE" ]; then
                    continue 2
                fi
                local dir=$(dirname "$dir")
            done
            echo "Formatting $(basename $file)..."
            clang-format -i $file
        done
        echo
    fi

    echo "Done."
    cd $prev_dir
}

# Runs Colcon tests and linters in the workspace.
# This macro cannot be named 'test' because it conflicts with the built-in test command in Bash.
lint() {
    local prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Select packages to test.
    # If no arguments are provided, select all packages.
    # See the same code in build() for additional comments.
    local pkg_info=$(colcon list --base-paths src | grep -oP '\S+\s\S+(?=\s)')
    local pkg_info=($pkg_info)
    local pkg_names=""
    local pkg_paths=""
    if [ $# -ne 0 ]; then
        local queries="$@"
        for ((i = 0; i < ${#pkg_info[@]}; i += 2)); do
            local name=${pkg_info[$i]}
            local path=${pkg_info[$i + 1]}
            for query in $queries; do
                if [[ $name == *"$query"* ]]; then
                    local pkg_names="$pkg_names $name"
                    local pkg_paths="$pkg_paths $path"
                    break
                fi
            done
        done
    fi
    local pkg_names=$(echo $pkg_names | sed 's/^ //')
    local pkg_paths=$(echo $pkg_paths | sed 's/^ //')

    echo "Running tests:"

    # Throw if workspace has not been built.
    if [ ! -d "build" ]; then
        echo "Workspace has not been built yet. Run 'build' first."
        cd $prev_dir
        return
    fi

    # Run Colcon test.
    if [ -z "$pkg_names" ]; then
        colcon test --base-paths src
    else
        colcon test --base-paths src --packages-select $pkg_names
    fi

    # TODO: Somethow detect test failure and provide results for only the selected packages.

    echo "Done."
    cd $prev_dir
}

# Finds the largest objects current Git repository.
git-du() {
    # Create a table with rows formatted like so: "<hash> <size> <path>"
    local table="$(
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
    local exp="$(echo "$table" | awk '{ print $2 }' | paste -sd+ -)"
    # example exp: 923B+927B+974B+983B+1017B+1.0KiB+1.0KiB+1.1KiB+1.1KiB+1.1KiB

    # Convert human-readable sizes to byte counts and then evaluate the sum.
    local exp="$(echo "$exp" | sed 's/GiB/*1073741824/g' | sed 's/MiB/*1048576/g' | sed 's/KiB/*1024/g' | sed 's/B//g')"
    local total="$(echo "$exp" | bc)"

    # Count all files.
    local num_files="$(echo "$table" | wc -l)"

    # Display the total size and the number of files.
    echo "$(echo "$total" | $(command -v gnumfmt || echo numfmt) --to=iec-i --suffix=B --padding=20) total ($num_files files)"

    # Find the size of the pack files and convert it to byte count.
    local pack_total_hr="$(git count-objects -vH | grep -E 'size-pack' | sed 's/.*size-pack: //')"
    local pack_total="$(echo "$pack_total_hr" | sed 's/GiB/*1073741824/g' | sed 's/MiB/*1048576/g' | sed 's/KiB/*1024/g' | sed 's/B//g' | bc)"

    # Display the size of the pack files.
    echo "$(echo "$pack_total" | $(command -v gnumfmt || echo numfmt) --to=iec-i --suffix=B --padding=20) of pack files (represents download size only if no other branches were checked out since cloning)"
}

# Resets all submodules to main and pulls any recent changes.
reset-pull() {
    # Display a warning Y/N prompt.
    echo "This will reset all submodules to main and pull any recent changes. YOU WILL LOSE ALL LOCAL CHANGES."
    read -p "Are you sure you want to continue? (Y/N): " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        return
    fi
    echo

    local prev_dir=$(pwd)
    cd $_KALMAN_WS_ROOT

    # Find all submodules.
    local REPOS=$(find ./src/ -name .git -execdir pwd \;)

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
        local git_out=$(git checkout main 2>&1)
        if [ $? -ne 0 ]; then
            echo "Failed to checkout on main:\n$git_out"
            cd $prev_dir
            return
        fi
    done
    echo
    echo

    echo "Resetting to origin/main..."
    for REPO in $REPOS; do
        cd $REPO
        printf "$(basename $REPO) "
        local git_out=$(git reset --hard origin/main 2>&1)
        if [ $? -ne 0 ]; then
            echo "Failed to reset to origin/main:\n$git_out"
            cd $prev_dir
            return
        fi
    done
    echo
    echo

    echo "Pulling changes..."
    for REPO in $REPOS; do
        cd $REPO
        printf "$(basename $REPO) "
        local git_out=$(git pull 2>&1)
        if [ $? -ne 0 ]; then
            echo "Failed to pull changes:\n$git_out"
            cd $prev_dir
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
        local git_out=$(git log -1 --oneline 2>&1)
        echo $git_out
    done

    cd $prev_dir
}
