from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mcity_os',
            namespace='/terasim',
            executable='web_subscriber_traffic_lights',
        ),
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='gnss_to_local',
        ),
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='sumo_autoware_real',
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
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='preview_path',
            parameters=[
                {"max_vel": 8.333},
                {"curvature_bound": 0.2},
                {"delta_t": 0.04},
                {"lookahead_time": 2.0},
                {"heading_offset": 0.04},
                {"lateral_offset": 0.2},
                {"lookahead_points": 5},
                {"trajectory_cutoff_size": 10},
            ],
        ),
    ])
