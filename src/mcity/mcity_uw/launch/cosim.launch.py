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
            executable='autoware_interface_uw_cosim',
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
    ])
