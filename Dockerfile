FROM ros:humble-ros-base

ENV DEBIAN_FRONTEND=noninteractive
ENV PATH="/opt/ros/humble/bin:${PATH}"
ENV LD_LIBRARY_PATH="/opt/ros/humble/lib:${LD_LIBRARY_PATH}"
ENV AMENT_PREFIX_PATH="/opt/ros/humble"

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

    # TODO before gap
    # TODO remove phidget from hardware OR make special branch without phidget for arm
RUN apt-get update && apt-get install -y --no-install-recommends \
    ros-humble-cv-bridge \
    ros-humble-image-transport \
    ros-humble-sensor-msgs \
    ros-humble-libphidget22 \
    ros-humble-phidgets-api \

    ros-humble-example-interfaces \
    ros-humble-geographic-msgs \
    ros-humble-moveit \
    ros-humble-moveit-servo \
    ros-humble-moveit-core \
    ros-humble-moveit-ros-planning \
    ros-humble-moveit-ros-planning-interface \
    ros-humble-ros2-control \
    ros-humble-ros2-controllers \
    ros-humble-controller-manager \
    ros-humble-joint-state-broadcaster \
    ros-humble-joint-trajectory-controller \
    ros-humble-robot-state-publisher \
    ros-humble-xacro \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /ws

RUN echo "source /opt/ros/humble/setup.bash" >> /root/.bashrc && \
    echo 'if [ -f /ws/install/setup.bash ]; then source /ws/install/setup.bash; fi' >> /root/.bashrc

RUN echo '#!/bin/bash\n\
source /opt/ros/humble/setup.bash\n\
if [ -f /ws/install/setup.bash ]; then\n\
  source /ws/install/setup.bash\n\
  exec "$@"\n\
else\n\
  echo "[ENTRYPOINT] Brak /ws/install/setup.bash! Uruchamiam w trybie oczekiwania na kompilacje..."\n\
  exec sleep infinity\n\
fi' > /ros_entrypoint.sh && chmod +x /ros_entrypoint.sh

ENTRYPOINT ["/ros_entrypoint.sh"]
CMD ["ros2", "launch", "kalman_arm", "arm.launch.py"]
