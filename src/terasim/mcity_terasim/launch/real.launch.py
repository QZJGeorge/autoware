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
            package='sumo_terasim',
            namespace='/terasim',
            executable='cav_info_converter',
        ),
        Node(
            package='sumo_terasim',
            namespace='/terasim',
            executable='cav_context_converter',
        ),
        Node(
            package='sumo_terasim',
            namespace='/terasim',
            executable='create_occupancy_grid',
        ),
        Node(
            package='sumo_terasim',
            namespace='/terasim',
            executable='traffic_signal_control',
        ),
        # Node(
        #     package='mcity_terasim',
        #     namespace='/terasim',
        #     executable='preview_path',
        # ),
    ])
