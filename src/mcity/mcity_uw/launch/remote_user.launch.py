from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_uw',
            namespace='/mcity',
            executable='autoware_interface_uw_realcar',
        ),

        ############################################################
        # Localization
        ############################################################
        Node(
            package='mcity_localization',
            namespace='/mcity',
            executable='mcity_localization',
        ),

        ############################################################
        # Mixed Reality (SUMO to Autoware)
        ############################################################
        Node(
            package='mcity_mr',
            namespace='/mcity',
            executable='cav_state_converter',
        ),
        Node(
            package='mcity_mr',
            namespace='/mcity',
            executable='cav_context_converter',
        ),
        Node(
            package='mcity_mr',
            namespace='/mcity',
            executable='occ_grid_converter',
        ),
        Node(
            package='mcity_mr',
            namespace='/mcity',
            executable='sumo_light_converter',
        ),

        ############################################################
        # Planning
        ############################################################
        Node(
            package='mcity_uw',
            namespace='/mcity',
            executable='autoware_path_uw',
        ),

        ############################################################
        # Remote Communication
        ############################################################
        Node(
            package='mcity_remote',
            namespace='/mcity',
            executable='redis_to_ros_vehicle_state',
        ),
        Node(
            package='mcity_remote',
            namespace='/mcity',
            executable='ros_to_redis_input_path',
        ),
    ])
