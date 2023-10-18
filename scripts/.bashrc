# This Bash source script configures Kalman workspace on login.
# It should work both in Distrobox and in a standalone Ubuntu system.

# Source the real .bashrc. This way this script ca be used directly when launching Bash.
source $HOME/.bashrc

# Check if started inside of Distrobox and find workspace root accordingly.
if [ ! -z "$DISTROBOX_WS_ROOT_TEMP_VAR_LATER_REMOVED_BY_BASHRC" ]; then
    # Ensure that host-spawn is properly installed.
    distrobox-host-exec --yes cat /dev/null
    
    # Fix-up SHELL variable passed from the host.
    export SHELL=/usr/bin/bash

    # Extract the workspace root from the marker variable.
    _KALMAN_WS_ROOT=$DISTROBOX_WS_ROOT_TEMP_VAR_LATER_REMOVED_BY_BASHRC
    unset DISTROBOX_WS_ROOT_TEMP_VAR_LATER_REMOVED_BY_BASHRC
else
    _KALMAN_WS_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
fi

# Source the ROS 2 setup script on each activation.
source /opt/ros/humble/setup.bash

# Source prebuilt overlay here.
if [ -f "$_KALMAN_WS_ROOT/overlay_ws/install/setup.bash" ]; then
    source $_KALMAN_WS_ROOT/overlay_ws/install/setup.bash
fi

# Source the development workspace setup script if available.
if [ -f "$_KALMAN_WS_ROOT/install/setup.bash" ]; then
    source $_KALMAN_WS_ROOT/install/setup.bash
fi

# Include Kalman macros.
source $_KALMAN_WS_ROOT/scripts/macros.bash
source $_KALMAN_WS_ROOT/scripts/kalm.bash
