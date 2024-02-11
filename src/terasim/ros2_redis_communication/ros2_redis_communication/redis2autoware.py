import json
import redis
import rclpy
import ros2_redis_communication.constants as constants

from mcity_msgs.msg import PlannedPath
from rosbridge_library.internal import message_conversion
from ros2_redis_communication.basic_ros2_redis_communication_node import BasicROS2RedisCommunicationNode


class RedisSubscriberAutowarePublisher(BasicROS2RedisCommunicationNode):
    def __init__(self):
        super().__init__('redis_subscriber_autoware_publisher')
        self.publisher_planned_path = self.create_publisher(PlannedPath, constants.PLANNED_PATH, 10)
        time_period = 0.1
        self.timer = self.create_timer(time_period, self.callback_redis)
        
    def callback_redis(self):
        json_str = self.redis_client.get(constants.PLANNED_PATH)
        if json_str is not None:
            ros_message_dict  = json.loads(json_str)
            msg = PlannedPath()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_planned_path.publish(msg)
        
def main(args=None):
    rclpy.init(args=args)
    node = RedisSubscriberAutowarePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()