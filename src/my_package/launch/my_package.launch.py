from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_package',
            executable='my_node'
        ),
        Node(
            package='my_package',
            executable='my_publisher',
        ),
        Node(
            package='my_package',
            executable='my_subscriber',
        )
    ])
