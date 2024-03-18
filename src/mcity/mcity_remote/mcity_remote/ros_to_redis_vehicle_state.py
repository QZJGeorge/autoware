import json
import rclpy
import mcity_remote.constants as constants

from mcity_msgs.msg import VehicleState
from nav_msgs.msg import Odometry
from sensor_msgs.msg import NavSatFix, Imu
from rosbridge_library.internal import message_conversion
from mcity_remote.basic_ros_redis_com_node import BasicRosRedisComNode


class RosToRedisVehicleState(BasicRosRedisComNode):
    def __init__(self):
        super().__init__('realvehicle_subscriber_redis_publisher')
        self.rtk_imu_msg = None
        self.rtk_odometry_msg = None
        self.rtk_position_msg = None
        self.veh_state_msg = None

        self.subscriber_rtk_imu = self.create_subscription(Imu, constants.RTK_IMU, self.callback_rtk_imu, 10)
        self.subscriber_rtk_odometry = self.create_subscription(Odometry, constants.RTK_ODOMETRY, self.callback_rtk_odometry, 10)
        self.subscriber_rtk_position = self.create_subscription(NavSatFix, constants.RTK_POSITION, self.callback_rtk_position, 10)
        self.subscriber_vehiclestate = self.create_subscription(VehicleState, constants.VEHICLE_STATE, self.callback_vehicle_state, 10)

        self.timer = self.create_timer(1/constants.UPDATE_RATE, self.on_timer)

    def on_timer(self):
        if self.rtk_imu_msg and self.rtk_odometry_msg and self.rtk_position_msg and self.veh_state_msg:
            self.redis_client.mset({
                constants.VEHICLE_STATE: self.veh_state_msg,
                constants.RTK_IMU: self.rtk_imu_msg,
                constants.RTK_ODOMETRY: self.rtk_odometry_msg,
                constants.RTK_POSITION: self.rtk_position_msg
            })
            
            self.rtk_imu_msg = None
            self.rtk_odometry_msg = None
            self.rtk_position_msg = None
            self.veh_state_msg = None

    def callback_rtk_imu(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.rtk_imu_msg = json_str

    def callback_rtk_odometry(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.rtk_odometry_msg = json_str

    def callback_rtk_position(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.rtk_position_msg = json_str

    def callback_vehicle_state(self, msg):
        json_str = json.dumps(message_conversion.extract_values(msg))
        self.veh_state_msg = json_str

def main(args=None):
    rclpy.init(args=args)
    node = RosToRedisVehicleState()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()