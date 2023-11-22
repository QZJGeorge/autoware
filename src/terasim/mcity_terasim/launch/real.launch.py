from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sumo_terasim',
            namespace='/terasim',
            executable='cav_context_converter',
        ),
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='gnss_to_local',
        ),
        # Node(
        #     package='mcity_terasim',
        #     namespace='/terasim',
        #     executable='preview_path',
        # ),
    ])
