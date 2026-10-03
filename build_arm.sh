#!/usr/bin/env bash
set -e

if [ -z "$ROS_DISTRO" ] && [ -f /opt/ros/jazzy/setup.bash ]; then
  source /opt/ros/jazzy/setup.bash
fi

colcon build --symlink-install \
  --parallel-workers 2 \
  --packages-up-to \
    kalman_arm \
    kalman_arm_controller \
    kalman_arm_moveit_config \
    kalman_arm_utils \
    kalman_description \
    kalman_hardware \
    kalman_interfaces \
    kalman_master \
    kalman_utils \
    bio_ik \
    joy_linux \

if [ -f install/setup.bash ]; then
  source install/setup.bash
fi