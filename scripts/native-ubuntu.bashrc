# This bashrc script configures Kalman workspace on login.

# Source the default .bashrc if it exists.
if [ -f $HOME/.bashrc ]; then
    source $HOME/.bashrc
fi

# Source the setup.
source $(dirname $BASH_SOURCE)/../scripts/setup.bash
