# Find the root of the Kalman workspace.
export _KALMAN_WS_ROOT=$(realpath $(dirname $BASH_SOURCE)/..)

# Currently Cyclone appears more stable and predictable under high load than eProsima FastDDS.
# Ensure that Cyclone DDS is installed.
# Use this: /opt/ros/humble/lib/librmw_cyclonedds_cpp.so
if [ ! -f "/opt/ros/humble/lib/librmw_cyclonedds_cpp.so" ]; then
    echo "Cyclone DDS is not installed. Installing..."
    sudo apt-get install ros-humble-rmw-cyclonedds-cpp
fi
# Enable Cyclone DDS.
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

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
