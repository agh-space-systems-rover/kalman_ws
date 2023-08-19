from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_package',
            executable='my_node',
            name='my_node'
        ),
        Node(
            package='unity_sim',
            executable='unity_sim',
            name='unity_sim'
        ),
    ])
