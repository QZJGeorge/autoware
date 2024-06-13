import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    return LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_demo',
            namespace='/mcity',
            executable='autoware_interface_demo_realcar',
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
        # Planning
        ############################################################
        Node(
            package='mcity_planning',
            namespace='/mcity',
            executable='autoware_path',
        ),
        
        ############################################################
        # Control
        ############################################################
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(get_package_share_directory('mcity_control'),'launch','mcity_control.launch.py')
            ])
        ),
    ])