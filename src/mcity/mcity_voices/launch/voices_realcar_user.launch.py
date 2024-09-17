from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch.substitutions import EnvironmentVariable, PathJoinSubstitution


def generate_launch_description():
    return LaunchDescription(
        [
            ############################################################
            # Autoware Interface to handle the simulation requests
            ############################################################
            Node(
                package="mcity_voices",
                namespace="/mcity/voices",
                executable="autoware_interface_voices_realcar",
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
                executable="autoware_tls_plugin",
            ),
            Node(
                package="autoware_cosim_plugin",
                namespace="/mcity",
                executable="autoware_dummy_grid",
            ),
            ############################################################
            # Planning
            ############################################################
            Node(
                package="mcity_planning",
                namespace="/mcity/planning",
                executable="mcity_planning",
            ),
            ############################################################
            # Remote Communication
            ############################################################
            Node(
                package="ros_redis_interface",
                namespace="/mcity/communication",
                executable="redis_to_ros_vehicle_state",
            ),
            Node(
                package="ros_redis_interface",
                namespace="/mcity/communication",
                executable="ros_to_redis_input_path",
            ),
            ExecuteProcess(
                cmd=[
                    "python3",
                    PathJoinSubstitution(
                        [
                            EnvironmentVariable("HOME"),
                            "autoware/src/mcity/ros_redis_interface/ros_redis_interface/redis_local_remote.py",
                        ]
                    ),
                ],
                name="redis_local_remote",
            ),
        ]
    )
