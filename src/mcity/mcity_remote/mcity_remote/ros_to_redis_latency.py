import rclpy
import json
import mcity_remote.constants as constants

from std_msgs.msg import Float64
from mcity_remote.basic_ros_redis_com_node import BasicRosRedisComNode


class RosToRedisLatency(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('ros_to_redis_latency')
        self.subscriber_autoware = self.create_subscription(Float64, constants.PLANNED_PATH_LATENCY, self.callback_planned_path_latency, 10)

        self.planned_path_latency = None
        self.timer = self.create_timer(1/constants.UPDATE_RATE_SET, self.on_timer)

    def on_timer(self):
        if self.planned_path_latency is not None:
            self.redis_client.set(constants.AV_PLANNING_LATENCY, self.planned_path_latency)

    def callback_planned_path_latency(self, msg):
        self.planned_path_latency = msg.data

def main(args=None):
    rclpy.init(args=args)
    node = RosToRedisLatency()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()