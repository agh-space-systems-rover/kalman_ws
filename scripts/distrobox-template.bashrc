# This bashrc script configures Kalman workspace Distrobox on login.
# It should be run as kalman_ws/.distrobox/.bashrc.

# Source the default Ubuntu configuration.
source $(dirname $BASH_SOURCE)/../scripts/default-ubuntu.bashrc

# Ensure that host-spawn is properly installed.
distrobox-host-exec --yes cat /dev/null

# Fix-up variables passed from the host.
export SHELL=/usr/bin/bash
export ROS_DISTRO="<<<ROS_DISTRO_TEMPLATE_SUBSTITUTION>>>"
export PATH=/usr/bin:$PATH

# Fix file descriptor limits in Docker.
# This fixes rosout memory leaks.
ulimit -Sn 524288
ulimit -Hn 524288

# Source the setup.
source $(dirname $BASH_SOURCE)/../scripts/setup.bash
