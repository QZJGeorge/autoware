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
