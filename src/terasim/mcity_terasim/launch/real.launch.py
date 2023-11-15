import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import AnyLaunchDescriptionSource

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mcity_terasim',
            namespace='/terasim',
            executable='gnss_to_pose_twist',
        ),
        # Node(
        #     package='mcity_terasim',
        #     namespace='/terasim',
        #     executable='sumo_autoware_real',
        # ),
        Node(
            package='tf2_ros',
            namespace='/terasim',
            executable='static_transform_publisher',
            arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'map']
        ),
    ])
