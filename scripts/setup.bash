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

# Include all other setup scripts.
source $_KALMAN_WS_ROOT/scripts/source-ros-setups.bash
source $_KALMAN_WS_ROOT/scripts/macros.bash
source $_KALMAN_WS_ROOT/scripts/kalm.bash
