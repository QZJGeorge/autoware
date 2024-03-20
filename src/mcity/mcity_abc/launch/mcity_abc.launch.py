import launch
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return launch.LaunchDescription([
        
        ############################################################
        # ABC Test Scenario Setup
        ############################################################
        DeclareLaunchArgument(
          'scenario',
          default_value='01_lane_change',
          description='Name of the executable.'
        ),
        Node(
            package='mcity_abc',
            namespace='/mcity/abc',
            executable=LaunchConfiguration('scenario')
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
        Node(
            package='mcity_mr',
            namespace='/mcity',
            executable='occ_grid_converter',
        ),
    ])
