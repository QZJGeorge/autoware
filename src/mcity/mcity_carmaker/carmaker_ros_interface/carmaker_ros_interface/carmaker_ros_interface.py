import math
import json
import redis
import rclpy
from rclpy.node import Node

from carmaker_msgs.msg import TrafficVehicle
from carmaker_msgs.msg import TrafficVehicleList

class RosInterface(Node):
    def __init__(self, host='localhost', port=6379, db=0):
        super().__init__('carmaker_ros_interface')

        self.redis_client = redis.Redis(host=host, port=port, db=db)
        self.sumo_to_carmaker_offset = [-891.5, -1083.5, 223.0]

        self.terasim_synced_vehicle_ids = {"CAV": 16000000}
        self.terasim_vehicle_index = 16000000 + 1

        self.pub_carmaker_transformed = self.create_publisher(TrafficVehicleList, "/mcity/carmaker/traffic_vehicle_list_transformed", 10)

        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.pub_cosim_terasim_vehicle_info)

        print("Initialize IPG Carmaker Ros Interface")

    def pub_cosim_terasim_vehicle_info(self):
        # reads sumo context from redis.
        cosim_terasim_vehicle_info_json = self.redis_get_key('cosim_terasim_vehicle_info')
        if cosim_terasim_vehicle_info_json is None:
            print("cosim_terasim_vehicle_info not found in redis.")
            self.terasim_synced_vehicle_ids = {}
            return
        
        data_transformed = []
        cosim_terasim_vehicle_info_dict = json.loads(cosim_terasim_vehicle_info_json)

        # iterates over sumo actors and updates them in carla.
        for sumo_actor_id, sumo_actor_value in cosim_terasim_vehicle_info_dict.items():
            if sumo_actor_id not in self.terasim_synced_vehicle_ids:
                self.terasim_synced_vehicle_ids[sumo_actor_id] = self.terasim_vehicle_index
                self.terasim_vehicle_index += 1
            
            x = sumo_actor_value['location']['x'] - self.sumo_to_carmaker_offset[0]
            y = sumo_actor_value['location']['y'] - self.sumo_to_carmaker_offset[1]
            z = sumo_actor_value['location']['z'] - self.sumo_to_carmaker_offset[2]
            
            yaw = sumo_actor_value['rotation']['y']
            yaw_radians = math.radians(90.0 - yaw)
            yaw_transformed = math.atan2(math.sin(yaw_radians), math.cos(yaw_radians))

            qx, qy, qz, qw = self.euler_to_quaternion(
                roll = 0.0,
                pitch = 0.0, 
                yaw = yaw_transformed,
            )

            TrafficVehicle_transformed = TrafficVehicle()
            TrafficVehicle_transformed.header.stamp = self.get_clock().now().to_msg()
            TrafficVehicle_transformed.id = self.terasim_synced_vehicle_ids[sumo_actor_id]
            TrafficVehicle_transformed.state = 3
            TrafficVehicle_transformed.pose.position.x = x
            TrafficVehicle_transformed.pose.position.y = y
            TrafficVehicle_transformed.pose.position.z = z
            TrafficVehicle_transformed.pose.orientation.x = qx
            TrafficVehicle_transformed.pose.orientation.y = qy
            TrafficVehicle_transformed.pose.orientation.z = qz
            TrafficVehicle_transformed.pose.orientation.w = qw

            data_transformed.append(TrafficVehicle_transformed)

        TrafficVehicleListTransformed = TrafficVehicleList()
        TrafficVehicleListTransformed.header.stamp = self.get_clock().now().to_msg()
        TrafficVehicleListTransformed.data = data_transformed

        self.pub_carmaker_transformed.publish(TrafficVehicleListTransformed)

        # List of keys to remove (to avoid modifying the dictionary while iterating)
        keys_to_remove = [key for key in self.terasim_synced_vehicle_ids if key not in cosim_terasim_vehicle_info_dict]

        # Remove the keys
        for key in keys_to_remove:
            del self.terasim_synced_vehicle_ids[key]
    
    def euler_to_quaternion(self, roll, pitch, yaw):
        """
        Convert Euler angles (pitch, yaw, roll) to a quaternion.
        
        Parameters:
        - pitch, yaw, roll: Euler angles in radians.
        
        Returns:
        - (x, y, z, w): Quaternion representation of the input angles.
        """
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)
        
        w = cr * cp * cy + sr * sp * sy
        x = sr * cp * cy - cr * sp * sy
        y = cr * sp * cy + sr * cp * sy
        z = cr * cp * sy - sr * sp * cy
        
        return x, y, z, w

    def redis_get_key(self, key):
        return self.redis_client.get(key)


def main(args=None):
    rclpy.init(args=args)

    carmaker_ros_interface = RosInterface()

    rclpy.spin(carmaker_ros_interface)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    carmaker_ros_interface.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

