from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_realcar',
            namespace='/mcity/realcar',
            executable='autoware_interface',
        ),

        ############################################################
        # Read Traffic Light from McityOS and Sync to SUMO
        ############################################################
        Node(
            package='mcity_light',
            namespace='/mcity/light',
            executable='mcity_light',
        ),

        ############################################################
        # Localization (GNSS to Autoware to SUMO)
        ############################################################
        Node(
            package='mcity_localization',
            namespace='/mcity/localization',
            executable='gnss_to_autoware',
        ),
        Node(
            package='mcity_localization',
            namespace='/mcity/localization',
            executable='autoware_to_sumo',
        ),
        
        ############################################################
        # Perception (SUMO to Autoware)
        ############################################################
        Node(
            package='mcity_perception',
            namespace='/mcity/perception',
            executable='sumo_background_vehicle_converter',
        ),
        Node(
            package='mcity_perception',
            namespace='/mcity/perception',
            executable='sumo_traffic_light_converter',
        ),
        Node(
            package='mcity_perception',
            namespace='/mcity/perception',
            executable='sumo_occ_grid_converter',
        ),

        ############################################################
        # Planning (Autoware Path to Preview Control)
        ############################################################
        Node(
            package='mcity_planning',
            namespace='/mcity/planning',
            executable='autoware_path',
        ),
        
        ############################################################
        # Control (Preview Control & Drive by Wire)
        ############################################################
        Node(
            package='mcity_control',
            namespace='/mcity/control',
            executable='preview_control',
            parameters=[
                {"gain_folder": "/home/mtl12345/autoware/src/mcity/mcity_bywire/data/gain/withoutdelay/"},
                {"max_ey": 1.5},
                {"max_ephi": 1.0},
                {"max_curvature": 0.2},
                {"speed_ctrl_kp": 1.3},
                {"speed_ctrl_ki": 0.5},
                {"heading_offset": -0.04},
                {"heading_lookahead_points": 30},
                {"lateral_offset": 0.0},
                {"preview_time": 5.0},
                {"desired_time_resolution": 0.04},
                {"autonomous_start_protection_time": 3.0},
                {"trajectory_abort_size": 5}
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
    ])