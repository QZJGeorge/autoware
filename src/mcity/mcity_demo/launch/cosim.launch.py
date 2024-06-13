import launch
from launch_ros.actions import Node

def generate_launch_description():
    return launch.LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_demo',
            namespace='/mcity',
            executable='autoware_interface_demo_cosim',
        ),
    ])
