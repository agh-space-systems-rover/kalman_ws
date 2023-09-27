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
            # IncludeLaunchDescription(
            #     PythonLaunchDescriptionSource(
            #         str(
            #             get_package_share_path("rtabmap_launch")
            #             / "launch"
            #             / "rtabmap.launch.py"
            #         )
            #     ),
            #     # <param name="subscribe_rgbd" type="bool"   value="true"/>
            #     # <param name="frame_id"       type="string" value="base_link"/>
            #     # <remap from="rgbd_image" to="/$(arg camera)/rgbd_image"/>
            #     # <remap from="odom" to="$(arg camera)/odom"/>
            #     # <param name="publish_tf" value="false"/>
            #     launch_arguments={
            #         "localization": "true",
            #         # "rtabmapviz": "false",
            #         "publish_tf_map": "false",
            #         "namespace": "d455_front",
            #         "rtabmap_args": "--delete_db_on_start",
            #         # "initial_pose": "0 0 0 0 0 0",
            #         "rgb_topic": "/d455_front/color/image_raw",
            #         # "depth_topic": "/d455_front/aligned_depth_to_color/image_raw",
            #         # "subscribe_rgbd": "true",
            #         # "subscribe_scan_cloud": "true",
            #         # "scan_cloud_topic": "/d455_front/depth/color/points",
            #         "visual_odometry": "true",
            #         # "icp_odometry": "true",
            #         # "odom_topic": "/d455_front/odom",
            #         "publish_tf_odom": "false",
            #         "depth": "false",
            #         "subscribe_rgb": "false",
            #     }.items(),
            # ),
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
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    str(
                        get_package_share_path("unity_sim")
                        / "launch"
                        / "unity_sim.launch.py"
                    )
                ),
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
