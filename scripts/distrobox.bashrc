# This bashrc script configures Kalman workspace Distrobox on login.
# It should be run as kalman_ws/.distrobox/.bashrc.

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

# Mark that the workspace is running in Distrobox.
# This is later referenced in macros.bash.
export _KALMAN_WS_RUNNING_IN_DISTROBOX=1

# Source the setup.
source $(dirname $BASH_SOURCE)/../scripts/setup.bash
