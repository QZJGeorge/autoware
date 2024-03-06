import json
import rclpy
import mcity_remote_communication.constants as constants

from nav_msgs.msg import Odometry
from mcity_msgs.msg import VehicleState
from sensor_msgs.msg import NavSatFix, Imu
from rosbridge_library.internal import message_conversion
from mcity_remote_communication.basic_ros_redis_com_node import BasicRosRedisComNode


class RedisToRosVehicleState(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('redis_subscriber_realvehicle_publisher')
        self.publisher_rtk_imu = self.create_publisher(Imu, constants.RTK_IMU, 10)
        self.publisher_rtk_odometry = self.create_publisher(Odometry, constants.RTK_ODOMETRY, 10)
        self.publisher_rtk_position = self.create_publisher(NavSatFix, constants.RTK_POSITION, 10)
        self.publisher_vehicle_state = self.create_publisher(VehicleState, constants.VEHICLE_STATE, 10)

        self.timer = self.create_timer(1/constants.UPDATE_RATE, self.callback_redis)
        
    def callback_redis(self):
        redis_key_list = [constants.RTK_POSITION, constants.RTK_ODOMETRY, constants.RTK_IMU, constants.VEHICLE_STATE]
        results = self.redis_client.mget(redis_key_list)
        if results[0] is not None:
            ros_message_dict  = json.loads(results[0])
            msg = NavSatFix()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_rtk_position.publish(msg)
        if results[1] is not None:
            ros_message_dict  = json.loads(results[1])
            msg = Odometry()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_rtk_odometry.publish(msg)
        if results[2] is not None:
            ros_message_dict  = json.loads(results[2])
            msg = Imu()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_rtk_imu.publish(msg)
        if results[3] is not None:
            ros_message_dict  = json.loads(results[3])
            msg = VehicleState()
            message_conversion.populate_instance(ros_message_dict, msg)
            self.publisher_vehicle_state.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = RedisToRosVehicleState()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()