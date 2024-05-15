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
            package='mcity_remote',
            namespace='/mcity',
            executable='redis_to_ros_vehicle_state',
        ),
        Node(
            package='mcity_remote',
            namespace='/mcity',
            executable='ros_to_redis_input_path',
        ),
        ExecuteProcess(
            cmd=[
                'python3',
                PathJoinSubstitution([
                    EnvironmentVariable('HOME'),
                    'autoware/src/mcity/mcity_remote/mcity_remote/redis_local_remote.py'
                ])
            ],
            name='redis_local_remote',
        )
    ])