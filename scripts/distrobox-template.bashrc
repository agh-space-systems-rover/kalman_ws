# This bashrc script configures Kalman workspace Distrobox on login.
# It should be run as kalman_ws/.distrobox/.bashrc.

# Source the default Ubuntu configuration.
# This sets up the prompt, aliases, colors, etc.
source $(dirname $BASH_SOURCE)/../scripts/default-ubuntu.bashrc

# Ensure that host-spawn is properly installed.
# Unity Engine won't work well within a Docker container, so we use host-spawn to run it on the host.
distrobox-host-exec --yes cat /dev/null

# Fix-up variables passed from the host.
# Distrobox inherits all environment variables from the host and that can cause many issues.
#
# We use bash, but the host might use something else.
export SHELL=/usr/bin/bash
# If host has ROS installed, it might be a different version.
export ROS_DISTRO="<<<ROS_DISTRO_TEMPLATE_SUBSTITUTION>>>"
# Host might have /bin before /usr/bin which is not good.
export PATH=/usr/local/bin:/usr/local/sbin:/usr/bin:/usr/sbin

# Fix file descriptor limits in Docker.
# Mostly prevents ROS CLI tools from hanging up.
ulimit -Sn 524288
ulimit -Hn 524288

# Source kalman_ws setup just like it would be done on a native Ubuntu install.
source $(dirname $BASH_SOURCE)/../scripts/setup.bash
