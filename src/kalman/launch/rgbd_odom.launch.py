from ament_index_python import get_package_share_path
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch.actions import OpaqueFunction


def launch_setup(context):
    return [
        Node(
            namespace=f"{LaunchConfiguration('camera_id').perform(context)}/rgbd_odometry",
            package="rtabmap_odom",
            executable="rgbd_odometry",
            parameters=[
                {
                    "config_path": str(
                        get_package_share_path("kalman") / "config" / "rtabmap.ini"
                    ),
                    "frame_id": "base_link",
                    "publish_tf": False,
                    "subscribe_rgbd": True,
                }
            ],
            remappings={
                "rgbd_image": f"/{LaunchConfiguration('camera_id').perform(context)}/rgbd_sync/rgbd_image"
            }.items(),
        ),
        Node(
            namespace=f"{LaunchConfiguration('camera_id').perform(context)}/rgbd_sync",
            package="rtabmap_sync",
            executable="rgbd_sync",
            parameters=[{"approx_sync": False}],
            remappings={
                "rgb/image": f"/{LaunchConfiguration('camera_id').perform(context)}/color/image_raw",
                "depth/image": f"/{LaunchConfiguration('camera_id').perform(context)}/aligned_depth_to_color/image_raw",
                "rgb/camera_info": f"/{LaunchConfiguration('camera_id').perform(context)}/color/camera_info",
            }.items(),
        ),
    ]


def generate_launch_description():
    return LaunchDescription(
        [
            DeclareLaunchArgument(
                "camera_id",
                default_value="camera",
                description="Prefix of the RGB-D sensor.",
            ),
            OpaqueFunction(function=launch_setup),
        ]
    )
