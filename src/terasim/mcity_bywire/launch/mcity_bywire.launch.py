from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mcity_bywire',
            namespace='/terasim',
            executable='preview_control',
            parameters=[
                {"gain_folder": "/home/mtl12345/autoware/src/terasim/preview_control/data/gain/withoutdelay/"},
                {"max_ey": 1.5},
                {"max_ephi": 0.8},
                {"max_curvature": 0.2},
                {"speed_ctrl_kp": 1.3},
                {"speed_ctrl_ki": 0.5},
                {"heading_offset": 0.0},
                {"heading_lookahead_points": 5},
                {"preview_time": 5.0},
                {"desired_time_resolution": 0.04},
                {"autonomous_start_protection_time": 3.0}
            ],
        ),
        Node(
            package='mcity_bywire',
            namespace='/terasim',
            executable='mkz_bywire',
            parameters=[
                {"max_speed": 10.0},
                {"max_throttle": 0.5},
                {"max_lat_acc": 2.0},
            ],
        ),
        Node(
            package='mcity_bywire',
            namespace='/terasim',
            executable='gnss_to_local',
        ),
    ])