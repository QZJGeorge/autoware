import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import AnyLaunchDescriptionSource

def generate_launch_description():
    return LaunchDescription([
        # Node(
        #     package='mcity_terasim',
        #     namespace='/terasim',
        #     executable='gnss_to_pose_twist',
        # ),
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='gnss_to_dummy_pose_twist',
        ),
        Node(
            package='tf2_ros',
            namespace='/terasim',
            executable='static_transform_publisher',
            arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'map']
        ),
        # DeclareLaunchArgument(
        #     'map_path',
        #     default_value=str(os.getenv('HOME')) + '/autoware/map',
        #     description='Path to map file'
        # ),
        # DeclareLaunchArgument(
        #     'vehicle_model', 
        #     default_value='sample_vehicle',
        #     description='Vehicle model'
        # ),
        # DeclareLaunchArgument(
        #     'sensor_model',
        #     default_value='sample_sensor_kit',
        #     description='Sensor model'
        # ),
        # DeclareLaunchArgument(
        #     'lanelet2_map_file',
        #     default_value='lanelet2_mcity_v25.osm',
        #     description='Lanelet2 map file'
        # ),
        # IncludeLaunchDescription(
        #     AnyLaunchDescriptionSource(str(os.getenv('HOME')) + '/autoware/src/launcher/autoware_launch/autoware_launch/launch/autoware.launch.xml'),
        #     launch_arguments={
        #         'map_path': LaunchConfiguration('map_path'),
        #         'vehicle_model': LaunchConfiguration('vehicle_model'),
        #         'sensor_model': LaunchConfiguration('sensor_model'),
        #         'lanelet2_map_file': LaunchConfiguration('lanelet2_map_file')
        #     }.items()
        # ),
    ])
