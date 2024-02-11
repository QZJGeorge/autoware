import json
import rclpy
import ros2_redis_communication.constants as constants

from mcity_msgs.msg import VehicleState
from nav_msgs.msg import Odometry
from sensor_msgs.msg import NavSatFix, Imu
from rosbridge_library.internal import message_conversion
from ros2_redis_communication.basic_ros2_redis_communication_node import BasicROS2RedisCommunicationNode


class RealVehicleSubscriberRedisPublisher(BasicROS2RedisCommunicationNode):
    def __init__(self):
        super().__init__('realvehicle_subscriber_redis_publisher')
        self.subscriber_rtk_imu = self.create_subscription(Imu, constants.RTK_IMU, self.callback_rtk_imu, 10)
        self.subscriber_rtk_odometry = self.create_subscription(Odometry, constants.RTK_ODOMETRY, self.callback_rtk_odometry, 10)
        self.subscriber_rtk_position = self.create_subscription(NavSatFix, constants.RTK_POSITION, self.callback_rtk_position, 10)
        self.subscriber_vehiclestate = self.create_subscription(VehicleState, constants.VEHICLE_STATE, self.callback_vehicle_state, 10)

    def callback_rtk_imu(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.redis_client.set(constants.RTK_IMU, json_str)

    def callback_rtk_odometry(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.redis_client.set(constants.RTK_ODOMETRY, json_str)

    def callback_rtk_position(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.redis_client.set(constants.RTK_POSITION, json_str)

    def callback_vehicle_state(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.redis_client.set(constants.VEHICLE_STATE, json_str)


def main(args=None):
    rclpy.init(args=args)
    node = RealVehicleSubscriberRedisPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()