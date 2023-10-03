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
                "unity_sim",
                default_value="False",
                description="Start up the Unity simulator with virtual sensors and actuators.",
            ),
            DeclareLaunchArgument(
                "physical_drivers",
                default_value="False",
                description="Launch with physical sensors and actuators.",
            ),
            # (those two args should never be set simultaneously)
            # -------
            # commons
            # -------
            # robot structure TF publisher
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
            # static map->odom transform
            Node(
                name="map_to_odom",
                package="tf2_ros",
                executable="static_transform_publisher",
                arguments=["0", "0", "0", "0", "0", "0", "map", "odom"],
            ),
            # # static odom->base_link for testing
            # Node(
            #     name="odom_to_base_link",
            #     package="tf2_ros",
            #     executable="static_transform_publisher",
            #     arguments=["0", "0", "0", "0", "0", "0", "odom", "base_link"],
            # ),
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
            #         "cfg": str(
            #             get_package_share_path("kalman") / "config" / "rtabmap.ini"
            #         ),
            #         "localization": "true",
            #         "rtabmapviz": "false",
            #         "publish_tf_map": "true",
            #         # "namespace": "d455_front",
            #         "args": "--delete_db_on_start",
            #         # "initial_pose": "0 0 0 0 0 0",
            #         "approx_sync": "true",
            #         "rgb_topic": "/d455_front/color/image_raw",
            #         "depth_topic": "/d455_front/aligned_depth_to_color/image_raw",
            #         "camera_info_topic": "/d455_front/color/camera_info",
            #         # "subscribe_rgbd": "true",
            #         # "subscribe_scan_cloud": "true",
            #         # "scan_cloud_topic": "/d455_front/depth/color/points",
            #         # "visual_odometry": "true",
            #         # "icp_odometry": "true",
            #         # "odom_topic": "/d455_front/odom",
            #         "publish_tf_odom": "true",
            #         "imu_topic": "/imu/data",
            #         "wait_imu_to_init": "true",
            #         # "depth": "false",
            #         # "subscribe_rgb": "false",
            #         # "rviz": "true",
            #     }.items(),
            # ),
        ]
        + [
            # visual odometry
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    str(
                        get_package_share_path("kalman")
                        / "launch"
                        / "rgbd_odom.launch.py"
                    )
                ),
                launch_arguments={
                    "camera_id": camera_id,
                }.items(),
            )
            for camera_id in ["d455_front", "d455_back", "d455_left", "d455_right"]
        ]
        + [
            # Kalman filter
            Node(
                name="ukf",
                package="robot_localization",
                executable="ukf_node",
                parameters=[
                    str(get_package_share_path("kalman") / "config" / "ukf.yaml")
                ],
            ),
            # RViz in dev mode
            Node(
                name="rviz",
                package="rviz2",
                executable="rviz2",
                arguments=[
                    "-d",
                    str(get_package_share_path("kalman") / "config" / "default.rviz"),
                ],
            ),
            # RTAB-Map SLAM
            # Node(
            #     namespace=f"/slam",
            #     package="rtabmap_slam",
            #     executable="rtabmap",
            #     parameters=[
            #         {
            #             "subscribe_depth": False,
            #             "subscribe_rgbd": False,
            #             "subscribe_rgb": False,
            #             "subscribe_stereo": False,
            #             "subscribe_scan": False,
            #             "subscribe_scan_cloud": True,
            #             "subscribe_user_data": False,
            #             "subscribe_odom_info": False,
            #             "frame_id": "base_link",
            #             "map_frame_id": "map",
            #             "odom_frame_id": "odom",
            #             "publish_tf": True,
            #             "approx_sync": False,
            #             "queue_size": 40,
            #         }
            #     ],
            #     remappings={"scan_cloud": f"/d455_front/depth/color/points"}.items(),
            # ),
            # IncludeLaunchDescription(
            #     PythonLaunchDescriptionSource(
            #         str(
            #             get_package_share_path("rtabmap_launch")
            #             / "launch"
            #             / "rtabmap.launch.py"
            #         )
            #     ),
            #     launch_arguments={
            #         "localization": "false",
            #         "odom_topic": "/odometry/filtered",
            #         "visual_odometry": "false",
            #         "publish_tf_map": "false",
            #         "publish_tf_odom": "false",
            #         # "subscribe_rgbd": False,
            #         "rgb_topic": "/d455_front/color/image_raw",
            #         "depth_topic": "/d455_front/aligned_depth_to_color/image_raw",
            #         "camera_info_topic": "/d455_front/color/camera_info",
            #         "approx_sync": "true",
            #         "rviz": "true",
            #         "args": "--delete_db_on_start",
            #     }.items(),
            # ),
            # -----------------------------------
            # Unity simulation + physical drivers
            # -----------------------------------
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    str(
                        get_package_share_path("unity_sim")
                        / "launch"
                        / "unity_sim.launch.py"
                    )
                ),
                condition=IfCondition(LaunchConfiguration("unity_sim")),
            ),
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    str(
                        get_package_share_path("kalman")
                        / "launch"
                        / "physical_drivers.launch.py"
                    )
                ),
                condition=IfCondition(LaunchConfiguration("physical_drivers")),
            ),
        ]
    )
