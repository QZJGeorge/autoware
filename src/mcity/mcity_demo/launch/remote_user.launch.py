from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch.substitutions import EnvironmentVariable, PathJoinSubstitution

def generate_launch_description():
    return LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_realcar',
            namespace='/mcity/realcar',
            executable='autoware_interface_realcar',
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
        ),
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_dummy_grid',
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
        # Remote Communication
        ############################################################
        Node(
            package='ros_redis_interface',
            namespace='/mcity',
            executable='redis_to_ros_vehicle_state',
        ),
        Node(
            package='ros_redis_interface',
            namespace='/mcity',
            executable='ros_to_redis_input_path',
        ),
    ])