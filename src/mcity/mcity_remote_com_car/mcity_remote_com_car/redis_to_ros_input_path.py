import json
import rclpy
import mcity_remote_com_car.constants as constants

from mcity_msgs.msg import PlannedPath
from rosbridge_library.internal import message_conversion
from mcity_remote_com_car.basic_ros_redis_com_node import BasicRosRedisComNode


class RedisToRosInputPath(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('redis_subscriber_autoware_publisher')
        self.publisher_planned_path = self.create_publisher(PlannedPath, constants.PLANNED_PATH, 10)
        self.timer = self.create_timer(1/constants.UPDATE_RATE, self.on_timer)
        
    def on_timer(self):
        json_str = self.redis_client.get(constants.PLANNED_PATH)
        if json_str is not None:
            ros_message_dict  = json.loads(json_str)
            msg = PlannedPath()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_planned_path.publish(msg)
        
def main(args=None):
    rclpy.init(args=args)
    node = RedisToRosInputPath()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()