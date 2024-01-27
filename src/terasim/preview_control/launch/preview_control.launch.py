from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='preview_control',
            namespace='/terasim',
            executable='preview_control',
            parameters=[
                {"gain_folder": "/home/mtl12345/autoware/src/terasim/preview_control/data/gain/withoutdelay/"},
                {"max_ey": 1.8},
                {"max_ephi": 45.0},
                {"speed_ctrl_kp": 1.3},
                {"speed_ctrl_ki": 0.5},
            ],
        ),
        Node(
            package='mkz_bywire',
            namespace='/terasim',
            executable='mkz_bywire',
            parameters=[
                {"max_speed": 8.333},
                {"max_throttle": 0.45},
                {"max_lat_acc": 2.0},
                {"autonomous_mode_smooth_time", 1.5}
            ],
        ),
    ])