import launch
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
import launch_testing
import unittest


def generate_test_description():
    tester = Node(
        executable=launch.substitutions.PathJoinSubstitution(
            [
                launch.substitutions.LaunchConfiguration("test_binary_dir"),
                "ulc_test_node",
            ]
        ),
        output="screen"
    )
    ulc_node = Node(
        package='dataspeed_ulc_can',
        executable='ulc_node',
        output='screen'
    )

    return launch.LaunchDescription(
        [
            launch.actions.DeclareLaunchArgument(
                name="test_binary_dir",
                description="Binary directory of package containing test executables",
            ),
            tester,
            ulc_node,
            launch_testing.actions.ReadyToTest(),
        ]
    ), {
        "tester": tester,
    }


class TestGTestWaitForCompletion(unittest.TestCase):
    # Waits for test to complete, then waits a bit to make sure result files are generated
    def test_gtest_run_complete(self, tester):
        self.proc_info.assertWaitForShutdown(tester, timeout=4000.0)


@launch_testing.post_shutdown_test()
class TestGTestProcessPostShutdown(unittest.TestCase):
    # Checks if the test has been completed with acceptable exit codes
    def test_gtest_pass(self, proc_info, tester):
        launch_testing.asserts.assertExitCodes(
            proc_info, process=tester
        )
