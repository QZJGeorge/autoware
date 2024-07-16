import json
import time
import rclpy
import mcity_remote.constants as constants

from mcity_msgs.msg import Control
from rosbridge_library.internal import message_conversion
from mcity_remote.basic_ros_redis_com_node import BasicRosRedisComNode


class RosToRedisVehicleControl(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('ros_to_redis_vehicle_control', 'local')

        self.veh_control_msg = None

        self.pub_cmd2bywire = self.create_subscription(Control, constants.VEHICLE_CONTROL, self.callback_control, 10)

        self.timer = self.create_timer(1/constants.UPDATE_RATE_GET, self.on_timer)

    def on_timer(self):
        if self.veh_control_msg:
            current_time = time.time()
            veh_control_msg_wrapper = {"timestamp": current_time, "data": self.veh_control_msg}

            self.redis_client.mset({
                constants.VEHICLE_CONTROL: json.dumps(veh_control_msg_wrapper),
            })
            
            self.veh_control_msg = None

    def callback_control(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.veh_control_msg = json_str

def main(args=None):
    rclpy.init(args=args)
    node = RosToRedisVehicleControl()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()