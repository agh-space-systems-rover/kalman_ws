from ament_index_python import get_package_share_path
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    return LaunchDescription(
        [
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    str(
                        get_package_share_path("nav2_bringup")
                        / "launch"
                        / "navigation_launch.py"
                    )
                ),
                launch_arguments={
                    "params_file": str(
                        get_package_share_path("kalman") / "config" / "nav2.yaml"
                    ),
                }.items(),
            )
        ]
    )
