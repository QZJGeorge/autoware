import launch
from launch_ros.actions import Node

def generate_launch_description():
    return launch.LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_cosim',
            namespace='/mcity/cosim',
            executable='autoware_interface_cosim',
        ),

        ############################################################
        # Mixed Reality (SUMO to Autoware)
        ############################################################
        Node(
            package='mcity_localization',
            namespace='/mcity/localization',
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
