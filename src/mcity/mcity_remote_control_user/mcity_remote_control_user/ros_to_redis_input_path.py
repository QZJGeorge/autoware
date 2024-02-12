import rclpy
import json
import mcity_remote_control_user.constants as constants

from mcity_msgs.msg import PlannedPath
from mcity_msgs.msg import PlannedPath
from rosbridge_library.internal import message_conversion
from mcity_remote_control_user.basic_ros_redis_com_node import BasicRosRedisComNode


class RosToRedisInputPath(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('autoware_subscriber_redis_publisher')
        self.subscriber_autoware = self.create_subscription(PlannedPath, constants.PLANNED_PATH, self.callback_planned_path, 10)

    def callback_planned_path(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.redis_client.set(constants.PLANNED_PATH, json_str)


def main(args=None):
    rclpy.init(args=args)
    node = RosToRedisInputPath()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()