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
            package='mcity_voices',
            namespace='/mcity/voices',
            executable='autoware_interface_voices_realcar',
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
            namespace='/mcity/localization',
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
            executable='sumo_light_converter',
        ),
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
        # Remote Communication
        ############################################################
        Node(
            package='ros_redis_interface',
            namespace='/mcity/communication',
            executable='redis_to_ros_vehicle_state',
        ),
        Node(
            package='ros_redis_interface',
            namespace='/mcity/communication',
            executable='ros_to_redis_input_path',
        ),
        ExecuteProcess(
            cmd=[
                'python3',
                PathJoinSubstitution([
                    EnvironmentVariable('HOME'),
                    'autoware/src/mcity/ros_redis_interface/ros_redis_interface/redis_local_remote.py'
                ])
            ],
            name='redis_local_remote',
        )
    ])