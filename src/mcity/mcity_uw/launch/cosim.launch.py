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
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_cosim_plugin',
            parameters=[
                {"control_cav": True},
                {"cosim_controlled_vehicle_keys": ["av_context"]}
            ]
        ),
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_tls_plugin',
        ),
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_dummy_grid',
        ),
    ])