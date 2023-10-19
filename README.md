# Kalman Workspace

ROS 2 development environment for the Kalman rover

## Prerequisites

- [Docker](https://www.docker.com/) + [BuildX](https://github.com/docker/buildx)
- [Distrobox](https://github.com/89luca89/distrobox)

## Getting Started

Firstly clone the repository on your machine:
```bash
git clone --recurse-submodules git@github.com:agh-space-systems-rover/kalman_ws.git
```

If you have already cloned without `--recurse-submodules`, use:
```bash
git submodule update --init --recursive
```

To enter the accelerated ROS 2 shell, run this automated script:
```bash
./scripts/distrobox
```
It will automatically build the Docker image if it is not present on your system.
Then, using this image, a new distrobox will be created and you will be logged in automatically.

After the initial setup of your container is done, you will be able to use ROS 2 and even start up Kalman's stack.
This repository includes `kalman_robot` repository as a submodule, but it might not always be up to date.
Therefore, after your distrobox is ready, you should pull the latest changes from the remote repository:

```bash
cd src/kalman_robot
git pull
```

Once that is done, you can build the workspace. Distrobox shell provides a useful macro that can be used to automate this process:
```bash
build
```
Running this command will install all rosdeps, build the workspace, source it, and configure Visual Studio Code for you.
Primarily, this means that every new terminal that you open within Visual Studio Code will automatically enter the distrobox.

After the workspace is built, please visit [kalman_robot](https://github.com/agh-space-systems-rover/kalman_robot) repository for instructions on how to start the robot.

## Custom Macros

- `build` - Pull from rosdep and build the workspace, then source its setup script. Additionally, Visual Studio Code is automatically configured for ease of use.
- `clean` - Remove build artifacts from the workspace.

See: [macros.bash](/scripts/macros.bash)

## Coding Guidelines

- Make sure that your Colcon packages do not depend on this workspace repository. This includes for instance referring to environment variables exported by the setup scripts or assuming that your package will always be located under `src/`.

## Project Structure

```yaml
├─ .distrobox/             # Distrobox home directory (ignored)
├─ build/                  # ROS 2 build artifacts (ignored)
├─ install/                # ROS 2 install artifacts (ignored)
├─ log/                    # ROS 2 runtime artifacts (ignored)
├─ src/                    # the package directory
│   └─ kalman_robot/       # a single submodule for all packages that make up Kalman's software stack
└─ scripts/                # The implementation of the workspace
    ├─ .bashrc             # Kalman dev env Bash overlay; Can be sourced both from Distrobox or from a standalone system.
    ├─ configure_vscode.py # Visual Studio auto-complete configuration script; called from macros.bash
    ├─ Dockerfile          # ROS 2 (Desktop) image recipe; Does not assume Distrobox.
    ├─ distrobox           # Distrobox launch script
    └─ macros.bash         # Implements useful development macros; included by .bashrc
```
