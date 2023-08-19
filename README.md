# Kalman

ROS 2 development environment for the Kalman rover

## Prerequisites

- [Docker](https://www.docker.com/) + [BuildX](https://github.com/docker/buildx)
- [Distrobox](https://github.com/89luca89/distrobox)
- [Unity](https://unity.com/releases/editor/archive) (Required only to launch the simulation.)

Use `ros2 run unity_sim version` after a successful build to know which Unity version is required by the simulation to start:

```julia
$ ros2 run unity_sim version
Unity 2022.3.7f1
```

In order to upgrade the simulation to a newer version, please launch it using Unity Hub.

## Getting Started

To enter the accelerated ROS 2 shell, run this automated script:
```bash
./scripts/distrobox
```
Then, a new Bash shell will pop up. Execute the following command to launch the simulation:
```bash
ros2 run unity_sim start
```

## Custom Macros

- `build` - Build the workspace and then source its setup script. Additionally, Visual Studio Code is automatically configured for ease of use.
- `clean` - Remove build artifacts in the workspace.
- `pull` - Automatically pull latest changes in all repositories.
- `push` - For each repo automatically commit changes/create branches and push them to the origin.

See: [macros.bash](/scripts/macros.bash)

## Design Sheet

### Build Variants

There exist three different build targets implemented as "meta" packages (`rover`, `station`, `full`) that do not contain any code

- `rover` is meant to be installed on the rover where physical hardware is available.
- `station` is to be installed on the ground station unit.
- `full` target should only be built on a developer's PC and it includes the two above packages plus virtual hardware modules managed by the simulator.

There are overlaps between the packages needed by each of the three build variants and this is why their sources are stored as a flat `src` directory of packages instead of dividing them into folders.

###  Source Packaging

The main repository of our project includes all our packages as Git submodules. I can already see how this design forces us to download all packages despite only needed a few of them to be built for the specific target. One good thing about submodules is that we can create tags in the main repository to be able to later return to specific point in time.

###  Launch Files

Each build target exposes launch files specific to the platform.

- `rover` exposes one launch file for every competition type (i.e. autonomous navigation, science, extreme delivery, etc.).
- `station` would only contain a single launch file that starts the station with RF and should work with all operation modes of the rover.
- `full` provides a similar set of launch files, but each one of them relies on the simulator to provide the hardware interface and boot up the ground station without RF communication.

Launch files from previous contests are consistently replaced by the new ones. The old ones end up archived in the Git index.

## Project Structure

```yaml
├─ .distrobox/             # Distrobox home directory (ignored)
├─ build/                  # ROS 2 build artifacts (ignored)
├─ install/                # ROS 2 install artifacts (ignored)
├─ log/                    # ROS 2 runtime artifacts (ignored)
├─ src/                    # the package directory
│   ├─ my_package/         # example ROS 2 package
│   └─ unity_sim/          # Unity simulation package
└─ scripts/                # The implementation of the workspace
    ├─ .bashrc             # Kalman dev env Bash overlay; Can be sourced both from Distrobox or from a standalone system.
    ├─ configure_vscode.py # Visual Studio auto-complete configuration script; called from macros.bash
    ├─ Dockerfile          # ROS 2 (Desktop) image recipe; Does not assume Distrobox.
    ├─ distrobox     # Distrobox launch script
    └─ macros.bash         # Implements useful development macros; included by .bashrc
```

## Coding Guidelines

- Make sure that your Colcon packages do not depend on this workspace repository. This includes for instance referring to environment variables exported by the setup scripts or assuming that your package will always be located under `src/`.

## Learning Resources

- https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html

Create a Python package:
```bash
cd ws/src
ros2 pkg create --build-type ament_python my_package
```

Generate package dependency graph:
```bash
colcon graph --dot | dot -Tpng -o deps.png
```
ROS 2 logs can be found in `.ros/log`

Example package is located in `src/my_package`.
