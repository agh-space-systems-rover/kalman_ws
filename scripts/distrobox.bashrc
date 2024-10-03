# This bashrc script configures Kalman workspace Distrobox on login.
# It should be run as kalman_ws/.distrobox/.bashrc.

# Update APT cache if it does not exist.
# It might happen on first boot,
# because cache is removed from base image.
if [ ! -f "/var/lib/apt/lists/lock" ]; then
    echo "Updating APT cache..."
    sudo apt-get update
    if [ $? -ne 0 ]; then
        echo "Failed to update APT cache. Exiting..."
        exit 1
    fi
fi

# Source the default Ubuntu configuration.
source $(dirname $BASH_SOURCE)/../scripts/default-ubuntu.bashrc

# Ensure that host-spawn is properly installed.
distrobox-host-exec --yes cat /dev/null

# Fix-up SHELL variable passed from the host.
export SHELL=/usr/bin/bash

# Fix file descriptor limits in Docker.
# This fixes rosout memory leaks.
ulimit -Sn 524288
ulimit -Hn 524288

# Source the setup.
source $(dirname $BASH_SOURCE)/../scripts/setup.bash
