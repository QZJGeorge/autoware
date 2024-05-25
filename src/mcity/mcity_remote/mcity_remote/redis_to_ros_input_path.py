import json
import rclpy
import mcity_remote.constants as constants

from std_msgs.msg import Float64
from mcity_msgs.msg import PlannedPath
from rosbridge_library.internal import message_conversion
from mcity_remote.basic_ros_redis_com_node import BasicRosRedisComNode

import time
import numpy as np

class RedisToRosInputPath(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('redis_to_ros_input_path', 'remote')
        self.publisher_planned_path = self.create_publisher(PlannedPath, constants.PLANNED_PATH, 10)
        self.publisher_planned_path_latency = self.create_publisher(Float64, constants.PLANNED_PATH_LATENCY, 10)
        self.timer = self.create_timer(1/constants.UPDATE_RATE_GET, self.on_timer)
        self.data = None
        self.latency_data = []
        
    def on_timer(self):
        json_str = self.redis_client.get(constants.PLANNED_PATH)

        if json_str is not None:
            ros_message_dict_wrapper = json.loads(json_str)

            timestamp = ros_message_dict_wrapper['timestamp']
            ros_message_dict = ros_message_dict_wrapper['data']

            msg = PlannedPath()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_planned_path.publish(msg)

            # self.set_redis_latency(ros_message_dict)

            latency = time.time() - timestamp
            planned_path_latency_wrapper = {"timestamp": time.time(), "data": latency}
            self.redis_client.set(constants.AV_PLANNING_LATENCY, json.dumps(planned_path_latency_wrapper))

    # def set_redis_latency(self, ros_message_dict):
    #     latency = None
    #     if self.data is None:
    #         self.data = ros_message_dict
    #         latency = time.time() - ros_message_dict['timestamp']
    #     elif self.data != ros_message_dict:
    #         self.data = ros_message_dict
    #         latency = time.time() - ros_message_dict['timestamp']
            
    #     if latency:
    #         self.publisher_planned_path_latency.publish(Float64(data=latency))

def main(args=None):
    rclpy.init(args=args)
    node = RedisToRosInputPath()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()