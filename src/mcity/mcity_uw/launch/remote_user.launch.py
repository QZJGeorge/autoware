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
            package='mcity_uw',
            namespace='/mcity',
            executable='uw_route_realcar',
        ),

        ############################################################
        # Localization
        ############################################################
        Node(
            package='mcity_localization',
            namespace='/mcity/localization',
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
