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
            DeclareLaunchArgument(
                "simulation",
                default_value="False",
                description="Launch without physical drivers and start up the simulator.",
            ),
            # Placeholder transforms for map -> odom -> base_link
            Node(
                name="map_to_odom",
                package="tf2_ros",
                executable="static_transform_publisher",
                arguments=["0", "0", "0", "0", "0", "0", "map", "odom"],
            ),
            Node(
                name="odom_to_base_link",
                package="tf2_ros",
                executable="static_transform_publisher",
                arguments=["0", "0", "0", "0", "0", "0", "odom", "base_link"],
            ),
            # Load Kalman Xacro
            Node(
                name="kalman_state_publisher",
                package="robot_state_publisher",
                executable="robot_state_publisher",
                parameters=[
                    {
                        "robot_description": xacro.process_file(
                            str(
                                get_package_share_path("kalman")
                                / "urdf"
                                / "kalman.urdf.xacro"
                            )
                        ).toxml()
                    }
                ],
            ),
            # Launch RealSense nodes only if simulation is disabled
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
                condition=UnlessCondition(LaunchConfiguration("simulation")),
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
                condition=UnlessCondition(LaunchConfiguration("simulation")),
            ),
            # TODO: Add the other two cameras.
            # front PC converter
            # Node(
            #     package="image_transport",
            #     executable="republish",
            #     name="image_republisher",
            #     namespace="",
            #     arguments=["compressed", "raw"],
            #     remappings=[
            #         ("in/compressed", "/d455_front/color/image_raw/compressed"),
            #         ("out", "/d455_front/color/image_raw"),
            #     ],
            # ),
            # Node(
            #     package="image_transport",
            #     executable="republish",
            #     name="image_republisher",
            #     namespace="",
            #     output="screen",
            #     arguments=["compressed", "raw"],
            #     remappings=[
            #         ("in/compressed", "/d455_front/depth/image_rect_raw/compressed"),
            #         ("out", "/d455_front/depth/image_rect_raw"),
            #     ],
            # ),
            # ComposableNodeContainer(
            #     name="container",
            #     namespace="",
            #     package="rclcpp_components",
            #     executable="component_container",
            #     composable_node_descriptions=[
            #         # ComposableNode(
            #         #     package="depth_image_proc",
            #         #     plugin="depth_image_proc::PointCloudXyzrgbNode",
            #         #     name="point_cloud_xyzrgb_node",
            #         #     remappings=[
            #         #         (
            #         #             "/rgb/camera_info",
            #         #             "/d455_front/color/camera_info",
            #         #         ),
            #         #         (
            #         #             "/rgb/image_rect_color",
            #         #             "/d455_front/color/image_raw",
            #         #         ),
            #         #         (
            #         #             "/depth_registered/image_rect",
            #         #             "/d455_front/depth/image_rect_raw",
            #         #         ),
            #         #         ("/points", "/test_points_front"),
            #         #     ],
            #         # ),
            #         ComposableNode(
            #             package="depth_image_proc",
            #             plugin="depth_image_proc::PointCloudXyzNode",
            #             name="point_cloud_xyz_node",
            #             remappings=[
            #                 (
            #                     "/camera_info",
            #                     "/d455_front/depth/camera_info",
            #                 ),
            #                 (
            #                     "/image_rect",
            #                     "/d455_front/depth/image_rect_raw",
            #                 ),
            #                 ("/points", "/test_points_front"),
            #             ],
            #         )
            #     ],
            #     output="screen",
            # ),
        ]
    )
