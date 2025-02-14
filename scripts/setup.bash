# Find the root of the Kalman workspace.
export _KALMAN_WS_ROOT=$(realpath $(dirname $BASH_SOURCE)/..)

# Source ROS 2 workspaces.
source $_KALMAN_WS_ROOT/scripts/source-ros-setups.bash

# Enable global pip.
export PIP_BREAK_SYSTEM_PACKAGES=1

# Currently Cyclone appears more stable and predictable under high load than eProsima FastDDS:
# Ensure that Cyclone DDS is installed.
if [ ! -f "/opt/ros/$ROS_DISTRO/lib/librmw_cyclonedds_cpp.so" ]; then
    echo "Cyclone DDS is not installed. Installing..."
    sudo apt-get install -y ros-$ROS_DISTRO-rmw-cyclonedds-cpp
    if [ $? -ne 0 ]; then
        echo "Failed to install Cyclone DDS. Please check your internet connection and try again."
        return
    fi
fi
# Enable Cyclone DDS.
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export ROS_LOCALHOST_ONLY=1
export ROS_AUTOMATIC_DISCOVERY_RANGE=LOCALHOST
# Enable multicast on loopback if it is disabled.
if [[ $(ip link show lo | grep MULTICAST | wc -l) -eq 0 ]]; then
    # Only do it outside of Distrobox
    if [ -z "$DISTROBOX_HOST_HOME" ]; then
        echo "Enabling multicast on loopback..."
        sudo ip link set lo multicast on
    else
        echo "Multicast on loopback is disabled. Please enable it on the host using: sudo ip link set lo multicast on"
    fi
fi

# Experimental Zenoh Bridge:
# Ensure that Zenoh Bridge is installed.
zenoh_bridge_version="1.2.1"
zenoh_bridge_ros2dds="$HOME/.cache/kalman_ws/zenoh_bridge_ros2dds-$zenoh_bridge_version"
if [ ! -f "$zenoh_bridge_ros2dds" ]; then
    echo "Zenoh Bridge is not installed. Installing..."
    # Ensure that the tools required for installation are available.
    if [ -z "$(which wget)" ]; then
        sudo apt-get install -y wget
        if [ $? -ne 0 ]; then
            echo "Failed to install wget. Please check your internet connection and try again."
            return
        fi
    fi
    if [ -z "$(which unzip)" ]; then
        sudo apt-get install -y unzip
        if [ $? -ne 0 ]; then
            echo "Failed to install unzip. Please check your internet connection and try again."
            return
        fi
    fi
    # Prepare directories.
    zip_url="https://www.eclipse.org/downloads/download.php?file=/zenoh/zenoh-plugin-ros2dds/$zenoh_bridge_version/zenoh-plugin-ros2dds-$zenoh_bridge_version-x86_64-unknown-linux-gnu-standalone.zip&r=1"
    zip_file="/tmp/kalman-ws-zenoh-bridge-ros2dds-$zenoh_bridge_version.zip"
    intermediate_unzip_dir="/tmp/kalman-ws-zenoh-bridge-ros2dds-$zenoh_bridge_version"
    rm -rf $intermediate_unzip_dir
    rm -f $zip_file
    rm -rf $zenoh_bridge_ros2dds
    mkdir -p $intermediate_unzip_dir
    mkdir -p $(dirname $zenoh_bridge_ros2dds)
    # Download .ZIP from Eclipse.
    wget --quiet --show-progress --progress=dot:giga -O $zip_file $zip_url
    if [ $? -ne 0 ]; then
        echo
        echo "Failed to download Zenoh Bridge. Please check your internet connection and try again."
        return
    fi
    # Extract binary from the archive.
    unzip $zip_file zenoh-bridge-ros2dds -d $intermediate_unzip_dir
    mv $intermediate_unzip_dir/zenoh-bridge-ros2dds $zenoh_bridge_ros2dds
    chmod +x $zenoh_bridge_ros2dds
    # Clean up.
    rm -rf $intermediate_unzip_dir
    rm -f $zip_file
    unset zip_url zip_file intermediate_unzip_dir
fi
# Start Zenoh Bridge daemon if not already running.
if [ -z "$(pgrep -f $zenoh_bridge_ros2dds)" ]; then
    echo "Starting Zenoh bridge..."
    nohup $zenoh_bridge_ros2dds -c $_KALMAN_WS_ROOT/scripts/zenoh-bridge-ros2dds.json5 > /tmp/zenoh-bridge-ros2dds.log 2>&1 &
    disown
fi
unset zenoh_bridge_version zenoh_bridge_ros2dds

# Enable NodeJS v20 repo.
if [ ! -f "/etc/apt/sources.list.d/nodesource.list" ]; then
    echo "NodeJS v20 repo is not installed. Installing..."
    # Ensure that curl is available.
    if [ -z "$(which curl)" ]; then
        sudo apt-get install -y curl
        if [ $? -ne 0 ]; then
            echo "Failed to install curl. Please check your internet connection and try again."
            return
        fi
    fi
    curl -fsSL https://deb.nodesource.com/setup_20.x | sudo -E bash -
    if [ $? -ne 0 ]; then
        echo "Failed to install NodeJS v20 repo. Please check your internet connection and try again."
        return
    fi
fi

# Install spacenavd if not available.
if [ ! -f "/usr/bin/spacenavd" ]; then
    echo "spacenavd is not installed. Installing..."
    sudo apt-get install -y spacenavd
    if [ $? -ne 0 ]; then
        echo "Failed to install spacenavd. Please check your internet connection and try again."
        return
    fi
fi
# Quietly start spacenavd if not started.
if [ ! -f "/run/spnavd.pid" ]; then
    sudo start-stop-daemon --start --pidfile /run/spnavd.pid --exec /usr/bin/spacenavd -- -v
fi

# Install macros.
source $_KALMAN_WS_ROOT/scripts/macros.bash
source $_KALMAN_WS_ROOT/scripts/kalm.bash

# Make sure that rosdep cache exists.
if [ ! -d "$HOME/.ros/rosdep" ]; then
    # Update rosdep index.
    echo "Updating rosdep index..."
    rosdep update --rosdistro $ROS_DISTRO --default-yes
    if [ $? -ne 0 ]; then
        echo "Failed to update rosdep index. Please check your internet connection and try again."
        return
    fi
fi
