from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_uw',
            namespace='/mcity',
            executable='autoware_interface_uw_realcar',
        ),

        ############################################################
        # Localization
        ############################################################
        Node(
            package='mcity_localization',
            namespace='/mcity',
            executable='mcity_localization',
        ),

        ############################################################
        # Mixed Reality (SUMO to Autoware)
        ############################################################
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_cosim_plugin',
            parameters=[
                {"control_cav": False},
                {"cosim_controlled_vehicle_keys": ["av_context"]}
            ]
        ),
        Node(
            package='autoware_cosim_plugin',
            namespace='/mcity',
            executable='autoware_dummy_grid',
        ),
        Node(
            package='gnss_cosim_plugin',
            namespace='/mcity',
            executable='gnss_cosim_plugin',
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
