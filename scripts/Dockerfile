ARG ROS_DISTRO=humble

FROM osrf/ros:${ROS_DISTRO}-desktop-full

# Initialize rosdep.
RUN rosdep init --rosdistro ${ROS_DISTRO} --as-root "apt:no pip:no" 

# Install Python
RUN apt-get update && \
    apt-get install -y python3 python-is-python3 python3-pip && \
    rm -rf /usr/lib/python3*/EXTERNALLY-MANAGED

# Downgrade setuptools.
# Later versions show distutils deprecation warnings
# when Colcon is installing python packages.
RUN pip install setuptools==58.2.0

# Install additional dependencies that should be present on any desktop system.
RUN apt-get install -y iputils-ping nano vim alsa-utils alsa pulseaudio
