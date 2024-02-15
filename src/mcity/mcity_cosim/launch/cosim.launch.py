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
        # Localization (Autoware to SUMO)
        ############################################################
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
            executable='sumo_occ_grid_converter',
        ),
        Node(
            package='mcity_perception',
            namespace='/mcity/perception',
            executable='sumo_traffic_light_converter',
        ),
    ])
