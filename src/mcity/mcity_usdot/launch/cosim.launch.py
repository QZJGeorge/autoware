import launch
from launch_ros.actions import Node

def generate_launch_description():
    return launch.LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_usdot',
            namespace='/mcity',
            executable='autoware_interface_usdot_cosim',
        ),

        ############################################################
        # Cosim
        ############################################################
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_cosim_plugin',
            parameters=[
                {'control_cav': True},
                {'cosim_controlled_vehicle_keys': ["terasim_cosim_vehicle_info"]}
            ],
        ),
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_tls_plugin',
            parameters=[
                {'cosim_controlled_tls_keys': ["terasim_cosim_tls_info"]}
            ],
        ),
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_dummy_grid',
        ),
    ])
