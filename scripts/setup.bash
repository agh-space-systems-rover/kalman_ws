# Find the root of the Kalman workspace.
export _KALMAN_WS_ROOT=$(realpath $(dirname $BASH_SOURCE)/..)

# Enable global pip.
export PIP_BREAK_SYSTEM_PACKAGES=1

# Currently Cyclone appears more stable and predictable under high load than eProsima FastDDS:
# Ensure that Cyclone DDS is installed.
if [ ! -f "/opt/ros/$ROS_DISTRO/lib/librmw_cyclonedds_cpp.so" ]; then
    echo "Cyclone DDS is not installed. Installing..."
    sudo apt-get install -y ros-$ROS_DISTRO-rmw-cyclonedds-cpp
fi
# Enable Cyclone DDS.
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export CYCLONEDDS_URI="file://$_KALMAN_WS_ROOT/scripts/cyclone-dds.xml"

# Enable NodeJS v20 repo.
if [ ! -f "/etc/apt/sources.list.d/nodesource.list" ]; then
    echo "NodeJS v20 repo is not installed. Installing..."
    curl -fsSL https://deb.nodesource.com/setup_20.x | sudo -E bash -
fi

# Include all other setup scripts.
source $_KALMAN_WS_ROOT/scripts/source-ros-setups.bash
source $_KALMAN_WS_ROOT/scripts/macros.bash
source $_KALMAN_WS_ROOT/scripts/kalm.bash

# Make sure that rosdep cache exists.
if [ ! -d "$HOME/.ros/rosdep" ]; then
    # Update rosdep index.
    echo "Updating rosdep index..."
    rosdep update --rosdistro $ROS_DISTRO --default-yes
fi
