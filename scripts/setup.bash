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

# Install spacenavd if not available.
if [ ! -f "/usr/bin/spacenavd" ]; then
    echo "spacenavd is not installed. Installing..."
    sudo apt-get install -y spacenavd
fi
# Quietly start spacenavd if not started.
if [ ! -f "/run/spnavd.pid" ]; then
    sudo start-stop-daemon --start --pidfile /run/spnavd.pid --exec /usr/bin/spacenavd -- -v
fi

# Enable colored ROS output.
export RCUTILS_COLORIZED_OUTPUT=1

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
