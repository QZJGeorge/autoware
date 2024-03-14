import json
import rclpy
import mcity_remote_com.constants as constants

from mcity_msgs.msg import PlannedPath
from rosbridge_library.internal import message_conversion
from mcity_remote_com.basic_ros_redis_com_node import BasicRosRedisComNode


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

            latency = self.calc_planning_latency(ros_message_dict)

            if latency is None:
                self.redis_client.set(constants.AV_PLANNING_LATENCY, 0.0)
            else:
                self.redis_client.set(constants.AV_PLANNING_LATENCY, latency)

    def get_current_time(self):
        # Assuming self.node is your ROS 2 node instance
        now = self.get_clock().now()
        # Convert ROS 2 time to seconds with nanoseconds as fractional part
        current_time = now.seconds_nanoseconds()
        return current_time[0] + current_time[1] * 1e-9

    def calc_planning_latency(self, ros_message_dict):
        if 'header' in ros_message_dict:
            header = ros_message_dict['header']
            if 'stamp' in header:
                stamp = header['stamp']
                if 'secs' in stamp and 'nsecs' in stamp:
                    # Convert ROS message time to seconds with nanoseconds as fractional part
                    message_time = stamp['secs'] + stamp['nsecs'] * 1e-9
                    # Calculate latency by subtracting message time from current time
                    return self.get_current_time() - message_time

        return None
        
def main(args=None):
    rclpy.init(args=args)
    node = RedisToRosInputPath()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()