from ament_index_python import get_package_share_path
from launch import LaunchDescription
from launch_ros.actions import Node
import xacro

# from launch.actions import IncludeLaunchDescription
# from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    kalman_xacro = get_package_share_path("kalman") / "urdf" / "kalman.urdf.xacro"
    assert kalman_xacro.is_file(), "Could not find kalman/urdf/kalman.urdf.xacro"
    kalman_desc = xacro.process_file(str(kalman_xacro)).toxml()

    return LaunchDescription(
        [
            Node(
                name="kalman_state_publisher",
                package="robot_state_publisher",
                executable="robot_state_publisher",
                parameters=[{"robot_description": kalman_desc}],
            ),
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
            # front PC converter
            Node(
                package="image_transport",
                executable="republish",
                name="image_republisher",
                namespace="",
                arguments=["compressed", "raw"],
                remappings=[
                    ("in/compressed", "/d455_front/color/image_raw/compressed"),
                    ("out", "/d455_front/color/image_raw"),
                ],
            ),
            Node(
                package="image_transport",
                executable="republish",
                name="image_republisher",
                namespace="",
                output="screen",
                arguments=["compressed", "raw"],
                remappings=[
                    ("in/compressed", "/d455_front/depth/image_rect_raw/compressed"),
                    ("out", "/d455_front/depth/image_rect_raw"),
                ],
            ),
            ComposableNodeContainer(
                name="container",
                namespace="",
                package="rclcpp_components",
                executable="component_container",
                composable_node_descriptions=[
                    ComposableNode(
                        package="depth_image_proc",
                        plugin="depth_image_proc::PointCloudXyzrgbNode",
                        name="point_cloud_xyzrgb_node",
                        remappings=[
                            (
                                "/d455_front/color/camera_info",
                                "/camera/color/camera_info",
                            ),
                            (
                                "/d455_front/color/image_raw",
                                "/camera/color/image_raw",
                            ),
                            (
                                "/d455_front/depth/image_rect_raw",
                                "/camera/aligned_depth_to_color/image_raw",
                            ),
                            ("/points", "/camera/depth_registered/points"),
                        ],
                    ),
                ],
                output="screen",
            ),
        ]
    )
