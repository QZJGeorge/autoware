import json
import rclpy
import mcity_remote.constants as constants

from mcity_msgs.msg import PlannedPath
from rosbridge_library.internal import message_conversion
from mcity_remote.basic_ros_redis_com_node import BasicRosRedisComNode

import time
import numpy as np

class RedisToRosInputPath(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('redis_subscriber_autoware_publisher')
        self.publisher_planned_path = self.create_publisher(PlannedPath, constants.PLANNED_PATH, 10)
        self.timer = self.create_timer(1/constants.UPDATE_RATE_GET, self.on_timer)
        self.data = None
        self.latency_data = []
        
    def on_timer(self):
        t0 = time.time()
        json_str = self.redis_client.get(constants.PLANNED_PATH)
        # print("get time:", time.time()-t0)

        if json_str is not None:
            ros_message_dict = json.loads(json_str)
            self.set_redis_latency(ros_message_dict)

            msg = PlannedPath()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_planned_path.publish(msg)
        # print("on timer:", time.time()-t0)

    def set_redis_latency(self, ros_message_dict):
        latency = None
        if self.data is None:
            self.data = ros_message_dict
            latency = time.time() - ros_message_dict['timestamp']
        elif self.data != ros_message_dict:
            self.data = ros_message_dict
            latency = time.time() - ros_message_dict['timestamp']
            
        if latency and len(self.latency_data) < 2000:
            self.latency_data.append(latency)
            # print("latency:", latency)
            if len(self.latency_data) == 1999:
                print("avg:", np.average(np.array(self.latency_data)))
                # print("std:", np.std(np.array(self.latency_data)))
            # self.redis_client.set(constants.AV_PLANNING_LATENCY, latency)

def main(args=None):
    rclpy.init(args=args)
    node = RedisToRosInputPath()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()