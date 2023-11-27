# This Bash source script configures Kalman workspace on login.
# It should work both in Distrobox and in a standalone Ubuntu system.

# Check if started inside of Distrobox and find workspace root accordingly.
if [ ! -z "$DISTROBOX_WS_ROOT_TEMP_VAR_LATER_REMOVED_BY_BASHRC" ]; then
    # Source the real .bashrc. This way this script can be used directly when launching Bash.
    source $HOME/.bashrc

    # Ensure that host-spawn is properly installed.
    distrobox-host-exec --yes cat /dev/null
    
    # Fix-up SHELL variable passed from the host.
    export SHELL=/usr/bin/bash

    # Extract the workspace root from the marker variable.
    export _KALMAN_WS_ROOT=$DISTROBOX_WS_ROOT_TEMP_VAR_LATER_REMOVED_BY_BASHRC
    unset DISTROBOX_WS_ROOT_TEMP_VAR_LATER_REMOVED_BY_BASHRC
    export _KALMAN_WS_RUNNING_IN_DISTROBOX=1
else
    # If it was not started from the "distrobox" script, assume
    # that this file was sourced from within a running shell.
    export _KALMAN_WS_ROOT=$(realpath $(dirname $BASH_SOURCE)/..)
fi

# Source the ROS 2 setup script on each activation.
# local_setup.bash only sources one level of underlay
source /opt/ros/humble/local_setup.bash

# Source prebuilt overlay here.
if [ -f "$_KALMAN_WS_ROOT/overlay_ws/install/local_setup.bash" ]; then
    source $_KALMAN_WS_ROOT/overlay_ws/install/local_setup.bash
fi

# Source the development workspace setup script if available.
if [ -f "$_KALMAN_WS_ROOT/install/local_setup.bash" ]; then
    source $_KALMAN_WS_ROOT/install/local_setup.bash
fi

# Include Kalman macros.
source $_KALMAN_WS_ROOT/scripts/macros.bash
source $_KALMAN_WS_ROOT/scripts/kalm.bash
