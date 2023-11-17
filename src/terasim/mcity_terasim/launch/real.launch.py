from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='gnss_to_local',
        ),
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='preview_path',
        ),
        Node(
            package='tf2_ros',
            namespace='/terasim',
            executable='static_transform_publisher',
            arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'map']
        ),
    ])
