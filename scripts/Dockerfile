ARG ROS_DISTRO=humble

FROM osrf/ros:${ROS_DISTRO}-desktop-full

RUN apt-get update && \
    # Install Python.
    apt-get install -y python3 python-is-python3 python3-pip && \
    # Disable EXTERNALLY-MANAGED.
    # This should not be needed in Ubuntu Jammy,
    # but might become necessary in the future.
    rm -rf /usr/lib/python3*/EXTERNALLY-MANAGED && \
    # Downgrade setuptools.
    # Later versions show distutils deprecation warnings
    # when Colcon is installing python packages.
    pip install setuptools==58.2.0 && \
    # Install additional dependencies that should be present on any desktop system.
    apt-get install -y iputils-ping nano vim alsa-utils alsa pulseaudio git git-man && \
    # Clean up.
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*
