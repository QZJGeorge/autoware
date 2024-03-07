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
            package='mcity_voices',
            namespace='/mcity/voices',
            executable='autoware_interface_voices_realcar',
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
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(get_package_share_directory('mcity_control'),'launch','mcity_control.launch.py')
            ])
        ),
    ])