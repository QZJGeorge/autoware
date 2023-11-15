from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='preview_control',
            namespace='/terasim',
            executable='preview_control',
        ),
        Node(
            package='preview_control',
            namespace='/terasim',
            executable='preview_path_gen',
        ),
        Node(
            package='mkz_bywire',
            namespace='/terasim',
            executable='mkz_bywire',
        ),
    ])
