FROM ros:jazzy-ros-base

ENV DEBIAN_FRONTEND=noninteractive
ENV PATH="/opt/ros/jazzy/bin:${PATH}"
ENV LD_LIBRARY_PATH="/opt/ros/jazzy/lib:${LD_LIBRARY_PATH}"
ENV AMENT_PREFIX_PATH="/opt/ros/jazzy"
ENV PIP_BREAK_SYSTEM_PACKAGES=1

RUN apt-get update && apt-get install -y --no-install-recommends \
    can-utils \
    iproute2 \
    python3-pip \
    python3-serial \
    python3-pyudev \
    python3-colcon-common-extensions \
    build-essential \
    git \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update && apt-get install -y --no-install-recommends \
    ros-jazzy-cv-bridge \
    ros-jazzy-image-transport \
    ros-jazzy-sensor-msgs \
    ros-jazzy-libphidget22 \
    ros-jazzy-phidgets-api \
    ros-jazzy-example-interfaces \
    ros-jazzy-geographic-msgs \
    ros-jazzy-moveit \
    ros-jazzy-moveit-servo \
    ros-jazzy-moveit-core \
    ros-jazzy-moveit-ros-planning \
    ros-jazzy-moveit-ros-planning-interface \
    ros-jazzy-ros2-control \
    ros-jazzy-ros2-controllers \
    ros-jazzy-controller-manager \
    ros-jazzy-joint-state-broadcaster \
    ros-jazzy-joint-trajectory-controller \
    ros-jazzy-robot-state-publisher \
    ros-jazzy-xacro \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /ws

RUN echo "source /opt/ros/jazzy/setup.bash" >> /root/.bashrc && \
    echo 'if [ -f /ws/install/setup.bash ]; then source /ws/install/setup.bash; fi' >> /root/.bashrc

RUN echo '#!/bin/bash\n\
source /opt/ros/jazzy/setup.bash\n\
if [ -f /ws/install/setup.bash ]; then\n\
  source /ws/install/setup.bash\n\
fi' > /ros_entrypoint.sh && chmod +x /ros_entrypoint.sh

ENTRYPOINT ["/ros_entrypoint.sh"]
CMD ["ros2", "launch", "kalman_arm", "arm.launch.py"]