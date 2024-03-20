from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import EnvironmentVariable, PathJoinSubstitution

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mcity_control',
            namespace='/mcity',
            executable='preview_control',
            parameters=[
                {"gain_folder": PathJoinSubstitution([EnvironmentVariable('HOME'), 
                                                      "autoware/src/mcity/mcity_control/data/gain/withoutdelay/"])},
                {"slope_folder": PathJoinSubstitution([EnvironmentVariable('HOME'), 
                                                      "autoware/src/mcity/mcity_control/data/slope/VOICES.txt"])},
                {"max_ey": 1.5},
                {"max_ephi": 1.0},
                {"max_curvature": 0.2},
                {"speed_ctrl_kp": 1.3},
                {"speed_ctrl_ki": 0.5},
                {"heading_offset": -0.04},
                {"heading_lookahead_points": 10},
                {"lateral_offset": 0.0},
                {"preview_time": 5.0},
                {"desired_time_resolution": 0.04},
                {"trajectory_abort_size": 25},
                {"trajectory_loose_abort_size": 75}
            ],
        ),
    ])