# Installs ROS 2: Humble Hawksbill (Desktop) in an Ubuntu 22.04 container.
# https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html
# We could use the official ROS 2 image, but those only come in ros_base flavor.

# ROS 2: Humble Hawksbill requires Jammy.
FROM ubuntu:jammy

# Update repositories.
RUN apt-get update

# Set locale to UTF-8 compatible.
RUN apt-get install -y locales
RUN locale-gen en_US en_US.UTF-8
RUN update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
RUN export LANG=en_US.UTF-8

# Enable universe repository.
RUN apt-get install -y software-properties-common
RUN add-apt-repository -y universe
RUN apt-get update

# Install the ROS 2 GPG key.
RUN apt-get install -y curl
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

# Add the ROS 2 repository.
RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null
RUN apt-get update

# Install ROS 2.
RUN apt-get upgrade -y
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y tzdata
RUN apt-get install -y ros-humble-desktop
RUN apt-get install -y ros-dev-tools

# Source the ROS 2 environment.
# (This script is always run in a Bash environment.)
# RUN source /opt/ros/humble/setup.bash

# Initialize rosdep.
RUN rosdep init --rosdistro humble --as-root "apt:no pip:no" 

# Install PIP and setuptools 58.2.0.
# Later versions of setuptools show distutils deprecation
# warnings when Colcon is installing python packages.
RUN apt-get install -y python3-pip
RUN pip3 install setuptools==58.2.0

# Install additional dependencies for the ease of use.
RUN apt-get install -y iputils-ping nano vim

# Clean up caches.
RUN rm -rf /var/lib/apt/lists/*
RUN rm -rf /tmp/*
