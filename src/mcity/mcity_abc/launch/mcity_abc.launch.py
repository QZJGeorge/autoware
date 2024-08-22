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
            namespace='/mcity',
            executable=LaunchConfiguration('scenario')
        ),
        ############################################################
        # Mixed Reality
        ############################################################
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_cosim_plugin',
            parameters=[
                {"control_cav": True},
                {"cosim_controlled_vehicle_keys": ["terasim_cosim_vehicle_info"]}
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
