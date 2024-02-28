from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        ############################################################
        # Localization (GNSS to Autoware to SUMO)
        ############################################################
        Node(
            package='mcity_localization',
            namespace='/mcity/localization',
            executable='gnss_to_autoware',
        ),
        
        ############################################################
        # Control (Preview Control & Drive by Wire)
        ############################################################
        Node(
            package='mcity_control',
            namespace='/mcity/control',
            executable='preview_control',
            parameters=[
                {"gain_folder": "/home/mtl12345/autoware/src/mcity/mcity_control/data/gain/withoutdelay/"},
                {"max_ey": 1.5},
                {"max_ephi": 1.0},
                {"max_curvature": 0.2},
                {"speed_ctrl_kp": 1.3},
                {"speed_ctrl_ki": 0.5},
                {"heading_offset": -0.04},
                {"heading_lookahead_points": 10},
                {"lateral_offset": 0.0},
                {"preview_time": 5.0},
                {"desired_time_resolution": 0.04},
                {"trajectory_abort_size": 25}
            ],
        ),
        Node(
            package='mcity_control',
            namespace='/mcity/control',
            executable='mkz_bywire',
            parameters=[
                {"max_speed": 10.0},
                {"max_throttle": 0.5},
                {"max_lat_acc": 2.0},
            ],
        ),

        ############################################################
        # Remote Communication
        ############################################################
        Node(
            package='mcity_remote_com_car',
            namespace='/mcity/communication',
            executable='ros_to_redis_vehicle_state',
        ),
        Node(
            package='mcity_remote_com_car',
            namespace='/mcity/communication',
            executable='redis_to_ros_input_path',
        ),
    ])