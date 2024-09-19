import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    return LaunchDescription(
        [
            ############################################################
            # Autoware Interface to handle the simulation requests
            ############################################################
            Node(
                package="mcity_uw",
                namespace="/mcity",
                executable="autoware_interface_uw_realcar",
            ),
            ############################################################
            # Localization
            ############################################################
            Node(
                package="gnss_cosim_plugin",
                namespace="/mcity",
                executable="gnss_cosim_plugin",
            ),
            ############################################################
            # Cosim
            ############################################################
            Node(
                package="autoware_cosim_plugin",
                namespace="/mcity",
                executable="autoware_cosim_plugin",
                parameters=[
                    {"control_cav": False},
                    {"cosim_controlled_vehicle_keys": ["terasim_cosim_vehicle_info"]},
                ],
            ),
            Node(
                package="autoware_cosim_plugin",
                namespace="/mcity",
                executable="autoware_dummy_grid",
            ),
            Node(
                package="autoware_cosim_plugin",
                namespace="/mcity",
                executable="autoware_tls_plugin",
            ),
            ############################################################
            # Planning
            ############################################################
            Node(
                package="mcity_planning",
                namespace="/mcity",
                executable="mcity_planning",
            ),
            ############################################################
            # Control
            ############################################################
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        os.path.join(
                            get_package_share_directory("mcity_control"),
                            "launch",
                            "mcity_control.launch.py",
                        )
                    ]
                )
            ),
            ############################################################
            # Remote Communication
            ############################################################
            Node(
                package="ros_redis_interface",
                namespace="/mcity/communication",
                executable="ros_to_redis_vehicle_state",
            ),
        ]
    )
