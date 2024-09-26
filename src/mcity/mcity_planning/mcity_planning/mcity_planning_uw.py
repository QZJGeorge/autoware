import math
import json
import rclpy
import terasim_cosim.redis_msgs as redis_msgs

from rclpy.node import Node
from mcity_msgs.msg import PlannedPath
from autoware_auto_planning_msgs.msg import Trajectory

from terasim_cosim.constants import *
from terasim_cosim.redis_client_wrapper import create_redis_client


class McityPlanningUW(Node):
    def __init__(self):
        super().__init__("mcity_planning_uw")

        # Register publisher
        self.pub_path = self.create_publisher(PlannedPath, "/mcity/planned_path", 10)

        # Register subscriber
        self.sub_trajectory = self.create_subscription(
            Trajectory,
            "/planning/scenario_planning/trajectory",
            self.trajectory_callback,
            10,
        )

        # Register timer
        self.traj_timer = self.create_timer(0.05, self.on_timer)

        self.uw_speed = 0.0
        self.uw_timestamp = 0.0

        key_value_config = {
            "output": redis_msgs.GeneralMsg,
        }
        self.redis_client = create_redis_client(key_value_config=key_value_config)

        self.path_msg = PlannedPath()
        self.path_msg.estop = 0
        self.path_msg.go = 1

    def on_timer(self):
        self.update_uw_control()
        self.apply_uw_speed()

        self.path_msg.timestamp = self.get_clock().now().nanoseconds / 1e9
        self.pub_path.publish(self.path_msg)

    def update_uw_control(self):
        output = self.redis_client.get("output")
        if output:
            data = json.loads(output.data)
            info = data["info"]
            if info:
                trajectory_commands = info["trajectory_commands_cav"]
                if trajectory_commands:
                    self.uw_timestamp = output.header.timestamp
                    uw_speed = float(trajectory_commands["spd"])
                    if uw_speed >= 0.0:
                        self.uw_speed = uw_speed
                        self.get_logger().info(
                            "uw speed received {}".format(self.uw_speed)
                        )

    def apply_uw_speed(self):
        current_time = self.get_clock().now().nanoseconds / 1e9
        if current_time - self.uw_timestamp <= 0.5:
            self.path_msg.vd_vector = [self.uw_speed] * len(self.path_msg.vd_vector)
            self.get_logger().info("uw control speed applied {}".format(self.uw_speed))
        else:
            pass
            # self.get_logger().info("uw control command outdated")

    def trajectory_callback(self, msg):
        x_list = []
        y_list = []
        vd_list = []
        ori_list = []

        # 500 * 0.1 meter = 50m max distance
        max_num_points = 500
        num_points_to_store = min(max_num_points, len(msg.points))

        for i in range(num_points_to_store):
            point = msg.points[i]

            qx = point.pose.orientation.x
            qy = point.pose.orientation.y
            qz = point.pose.orientation.z
            qw = point.pose.orientation.w

            siny_cosp = 2 * (qw * qz + qx * qy)
            cosy_cosp = 1 - 2 * (qy * qy + qz * qz)
            yaw = math.atan2(siny_cosp, cosy_cosp)

            x_list.append(point.pose.position.x)
            y_list.append(point.pose.position.y)
            vd_list.append(point.longitudinal_velocity_mps)
            ori_list.append(yaw)

        self.path_msg.x_vector = x_list
        self.path_msg.y_vector = y_list
        self.path_msg.vd_vector = vd_list
        self.path_msg.ori_vector = ori_list


def main(args=None):
    rclpy.init(args=args)
    node = McityPlanningUW()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
