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

# Verify that rosdep cache exists.
if [ ! -d "$HOME/.ros/rosdep" ]; then
    # Update rosdep index.
    echo "Updating rosdep index..."
    rosdep update --rosdistro $ROS_DISTRO --default-yes
fi

# Install overlay dependencies.
if [ ! -f "$HOME/.kalman_ws_overlay_deps_installed" ]; then
    echo "Installing overlay dependencies..."
    rosdep install --rosdistro $ROS_DISTRO --default-yes --ignore-packages-from-source --from-paths $_KALMAN_WS_ROOT/overlay_ws/src && touch $HOME/.kalman_ws_overlay_deps_installed
fi
