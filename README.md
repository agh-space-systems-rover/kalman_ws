# Kalman Workspace

ROS 2 development environment for the Kalman rover

## Prerequisites

If you wish to use a Docker container:
- [Docker](https://www.docker.com/) + [BuildX](https://github.com/docker/buildx)
- [Distrobox](https://github.com/89luca89/distrobox)

If you wish to develop natively on your Ubuntu Jammy:
- [ROS 2 Humble](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html)
- [Python 3](https://www.python.org) possibly along with `python-is-python3`
- [setuptools 58.2.0](https://pypi.org/project/setuptools/58.2.0/) to remove warnings when building Python-based ROS packages

## Getting Started

Firstly clone the repository on your machine:
```bash
git clone --recurse-submodules git@github.com:agh-space-systems-rover/kalman_ws.git
```

If you have already cloned without `--recurse-submodules`, use:
```bash
git submodule update --init --recursive
```

This repository includes `kalman_robot` repository as a submodule, but it might not always be up to date.
Therefore, after your distrobox is ready, you should pull the latest changes from the remote repository:

```bash
cd src/kalman_robot
git pull
```

### Containerized Development

To enter the accelerated ROS 2 shell, run this automated script:
```bash
./scripts/distrobox
```
It will automatically build the Docker image if it is not present on your system.
Then, using this image, a new distrobox will be created and you will be logged in automatically.

After the initial setup of your container is done, you will be able to use ROS 2 and graphical tools such as Rviz and Rqt.

#### Building the Workspace

Now you can build the workspace. `kalman_ws` provides a useful macro that can be used to automate this process. It can be typed right into the terminal:
```bash
build
```
Running this command will install all rosdeps, build the workspace, source it, and configure Visual Studio Code for you.
Visual Studio Code is configured by adding IntelliSense paths to `./.vscode/settings.json` and setting up a custom terminal profile, this ensures that every new terminal that you open within Visual Studio Code will automatically enter the distrobox so that you can develop on your host machine and seamlessly run the code in a container.

After the workspace is built, please visit [kalman_robot](https://github.com/agh-space-systems-rover/kalman_robot) repository for instructions on how to start the robot.

### Native Ubuntu Development

If you do not wish to use a container, you can still make use of most of the features offered by `kalman_ws`.
- In order to setup your environment, you should first instal all the necessary dependencies listed in the corresponding subsection of [Prerequisites](#prerequisites).
- After that, you can enable all the macros normally available in Distrobox by sourcing the `./scripts/setup.bash` script from a Bash shell.
For deployment, this script should be sourced from within the `.bashrc` file.

In this alternate configuration Visual Studio Code's terminal profile will be configured to open a new Bash shell and source `./scripts/setup.bash` on entry.

- From this point onward follow the steps in [Building the Workspace](#building-the-workspace).

## Custom Macros

- `build` - Pull from rosdep and build the workspace, then source its setup script. Additionally, Visual Studio Code is automatically configured for ease of use.
- `clean` - Remove build artifacts from the workspace.
- `format` - Run `clang-format` and `black` on all packages in the workspace.

See: [macros.bash](/scripts/macros.bash)

## Coding Guidelines

- Make sure that your Colcon packages do not depend on this workspace repository. This includes for instance referring to environment variables exported by the setup scripts or assuming that your package will always be located under `src/`.

## Project Structure

```yaml
├─ .distrobox/            # Distrobox home directory (ignored)
├─ .vscode/               # Visual Studio Code configuration (ignored)
├─ build/                 # ROS 2 build artifacts (ignored)
├─ install/               # ROS 2 install artifacts (ignored)
├─ log/                   # ROS 2 runtime artifacts (ignored)
├─ scripts/               # The implementation of the workspace
│  ├─ .bashrc             # Kalman dev env Bash overlay; Can be sourced both from Distrobox or from a standalone system.
│  ├─ configure_vscode.py # Visual Studio auto-complete configuration script; called from macros.bash
│  ├─ Dockerfile          # ROS 2 (Desktop) image recipe; Does not assume Distrobox.
│  ├─ distrobox           # Distrobox launch script
│  └─ macros.bash         # Implements useful development macros; included by .bashrc
└─ src/                   # the package directory
   └─ kalman_robot/       # a single submodule for all packages that make up Kalman's software stack
```
