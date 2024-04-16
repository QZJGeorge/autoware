import rclpy
import json
import mcity_remote.constants as constants

from mcity_msgs.msg import PlannedPath
from mcity_msgs.msg import PlannedPath
from rosbridge_library.internal import message_conversion
from mcity_remote.basic_ros_redis_com_node import BasicRosRedisComNode


class RosToRedisInputPath(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('autoware_subscriber_redis_publisher')
        self.subscriber_autoware = self.create_subscription(PlannedPath, constants.PLANNED_PATH, self.callback_planned_path, 10)

        self.planned_path_msg = None
        self.timer = self.create_timer(1/constants.UPDATE_RATE_SET, self.on_timer)

    def on_timer(self):
        if self.planned_path_msg is not None:
            self.redis_client.set(constants.PLANNED_PATH, self.planned_path_msg)

    def callback_planned_path(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.planned_path_msg = json_str

def main(args=None):
    rclpy.init(args=args)
    node = RosToRedisInputPath()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()