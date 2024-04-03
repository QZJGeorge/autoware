import os
import launch
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    return launch.LaunchDescription([
        
        ############################################################
        # ABC Test Scenario Setup
        ############################################################
        DeclareLaunchArgument(
          'scenario',
          default_value='01_lane_change_realcar',
          description='Name of the executable.'
        ),
        Node(
            package='mcity_abc_realcar',
            namespace='/mcity',
            executable=LaunchConfiguration('scenario')
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
        # Mixed Reality
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
        # Node(
        #     package='mcity_mr',
        #     namespace='/mcity',
        #     executable='sumo_light_converter',
        # ),
        Node(
            package='mcity_mr',
            namespace='/mcity',
            executable='occ_grid_converter',
        ),

        ############################################################
        # Planning
        ############################################################
        Node(
            package='mcity_planning',
            namespace='/mcity/planning',
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
