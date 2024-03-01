export _KALMAN_WS_ROOT=$(realpath $(dirname $BASH_SOURCE)/..)

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
