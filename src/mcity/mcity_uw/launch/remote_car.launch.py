import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    return LaunchDescription([

        ############################################################
        # Localization
        ############################################################
        Node(
            package='mcity_localization',
            namespace='/mcity',
            executable='mcity_localization',
        ),

        ############################################################
        # Control
        ############################################################
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(get_package_share_directory('mcity_control'),'launch','mcity_control.launch.py')
            ])
        ),

        ############################################################
        # Remote Communication
        ############################################################
        Node(
            package='mcity_remote',
            namespace='/mcity',
            executable='ros_to_redis_vehicle_state',
        ),
        Node(
            package='mcity_remote',
            namespace='/mcity',
            executable='redis_to_ros_input_path',
        ),
    ])
