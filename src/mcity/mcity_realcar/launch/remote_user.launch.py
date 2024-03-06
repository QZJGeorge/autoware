from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        ############################################################
        # Autoware Interface to handle the simulation requests
        ############################################################
        Node(
            package='mcity_realcar',
            namespace='/mcity/realcar',
            executable='autoware_interface',
        ),

        ############################################################
        # Read Traffic Light from McityOS and Sync to SUMO
        ############################################################
        # Node(
        #     package='mcity_light',
        #     namespace='/mcity/light',
        #     executable='mcity_light',
        # ),

        ############################################################
        # Localization (Autoware to SUMO)
        ############################################################
        # Node(
        #     package='mcity_localization',
        #     namespace='/mcity/localization',
        #     executable='autoware_to_sumo',
        # ),
        Node(
            package='mcity_localization',
            namespace='/mcity/localization',
            executable='gnss_to_autoware',
        ),
        
        ############################################################
        # Perception (SUMO to Autoware)
        ############################################################
        # Node(
        #     package='mcity_perception',
        #     namespace='/mcity/perception',
        #     executable='sumo_background_vehicle_converter',
        # ),
        # Node(
        #     package='mcity_perception',
        #     namespace='/mcity/perception',
        #     executable='sumo_traffic_light_converter',
        # ),
        # Node(
        #     package='mcity_perception',
        #     namespace='/mcity/perception',
        #     executable='sumo_occ_grid_converter',
        # ),

        ############################################################
        # Planning (Autoware Path to Preview Control)
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
            package='mcity_remote_communication',
            namespace='/mcity/communication',
            executable='redis_to_ros_vehicle_state',
        ),
        Node(
            package='mcity_remote_communication',
            namespace='/mcity/communication',
            executable='ros_to_redis_input_path',
        ),
    ])