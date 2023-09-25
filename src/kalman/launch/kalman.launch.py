import os
from ament_index_python import get_package_share_path
from launch import LaunchDescription
from launch_ros.actions import Node
import xacro

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition

# from launch_ros.actions import ComposableNodeContainer
# from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    return LaunchDescription(
        [
            # ----------------
            # launch arguments
            # ----------------
            DeclareLaunchArgument(
                "physical_drivers",
                default_value="False",
                description="Launch with physical sensors and actuators.",
            ),
            DeclareLaunchArgument(
                "simulation",
                default_value="False",
                description="Start up the simulator and RViz.",
            ),
            # -------
            # commons
            # -------
            Node(
                name="map_to_odom",
                package="tf2_ros",
                executable="static_transform_publisher",
                arguments=["0", "0", "0", "0", "0", "0", "map", "odom"],
            ),
            Node(
                name="state_publisher",
                package="robot_state_publisher",
                executable="robot_state_publisher",
                parameters=[
                    {
                        "robot_description": xacro.process_file(
                            str(
                                get_package_share_path("kalman")
                                / "config"
                                / "kalman.urdf.xacro"
                            )
                        ).toxml()
                    }
                ],
            ),
            Node(
                name="ukf",
                package="robot_localization",
                executable="ukf_node",
                parameters=[
                    str(get_package_share_path("kalman") / "config" / "ukf.yaml")
                ],
            ),
            # ---------------------------
            # real-life RealSense drivers
            # ---------------------------
            # Those nodes facilitate the communication with the RealSense devices
            # and publish data to ROS topics.
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    str(
                        get_package_share_path("realsense2_camera")
                        / "launch"
                        / "rs_launch.py"
                    )
                ),
                launch_arguments={
                    "camera_name": "d455_front",
                    "serial_no": "_043422251512",
                    "pointcloud.enable": "true",
                }.items(),
                condition=IfCondition(LaunchConfiguration("physical_drivers")),
            ),
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    str(
                        get_package_share_path("realsense2_camera")
                        / "launch"
                        / "rs_launch.py"
                    )
                ),
                launch_arguments={
                    "camera_name": "d455_right",
                    "serial_no": "_231122300896",
                    "pointcloud.enable": "true",
                }.items(),
                condition=IfCondition(LaunchConfiguration("physical_drivers")),
            ),
            # -----------------------
            # Unity simulation + RViz
            # -----------------------
            Node(
                name="unity_sim",
                package="unity_sim",
                executable="simulation",
                condition=IfCondition(LaunchConfiguration("simulation")),
            ),
            Node(
                name="rosbridge",
                package="rosbridge_server",
                executable="rosbridge_websocket",
                condition=IfCondition(LaunchConfiguration("simulation")),
            ),
            Node(
                name="rviz",
                package="rviz2",
                executable="rviz2",
                arguments=[
                    "-d",
                    str(get_package_share_path("kalman") / "config" / "default.rviz"),
                ],
                condition=IfCondition(LaunchConfiguration("simulation")),
            ),
        ]
    )
