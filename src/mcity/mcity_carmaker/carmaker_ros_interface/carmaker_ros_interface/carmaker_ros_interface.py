import math
import json
import redis
import carla
import rclpy
from rclpy.node import Node

from carmaker_msgs.msg import TrafficVehicle
from carmaker_msgs.msg import TrafficVehicleList

class RosInterface(Node):
    def __init__(self, host='localhost', port=6379, db=0):
        super().__init__('mcity_light')

        self.redis_client = redis.Redis(host=host, port=port, db=db)
        self.sumo_to_xdor_offset = [2.0, 159.0, 34.5]

        self.terasim_synced_vehicle_ids = {"CAV": 160000}
        self.terasim_vehicle_index = 1600000 + 1

        self.pub_carmaker_untransformed = self.create_publisher(TrafficVehicleList, "/mcity/carmaker/traffic_vehicle_list_untransformed", 10)
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
        data_untransformed = []

        cosim_terasim_vehicle_info_dict = json.loads(cosim_terasim_vehicle_info_json)

        # iterates over sumo actors and updates them in carla.
        for sumo_actor_id, sumo_actor_value in cosim_terasim_vehicle_info_dict.items():
            if sumo_actor_id not in self.terasim_synced_vehicle_ids:
                self.terasim_synced_vehicle_ids[sumo_actor_id] = self.terasim_vehicle_index
                self.terasim_vehicle_index += 1
            
            sumo_actor_transform = carla.Transform()
            sumo_actor_transform.location.x = sumo_actor_value['location']['x']
            sumo_actor_transform.location.y = sumo_actor_value['location']['y']
            sumo_actor_transform.location.z = sumo_actor_value['location']['z']
            sumo_actor_transform.rotation.pitch = sumo_actor_value['rotation']['x']
            sumo_actor_transform.rotation.yaw = sumo_actor_value['rotation']['y']
            sumo_actor_transform.rotation.roll = sumo_actor_value['rotation']['z']

            sumo_actor_extent = carla.Vector3D()
            sumo_actor_extent.x = sumo_actor_value['extent']['x']
            sumo_actor_extent.y = sumo_actor_value['extent']['y']
            sumo_actor_extent.z = sumo_actor_value['extent']['z']

            ##################################################################################
            ## The following add an untransformed vehicle as in sumo
            ##################################################################################

            qx, qy, qz, qw = self.euler_to_quaternion(
                sumo_actor_transform.rotation.pitch, 
                sumo_actor_transform.rotation.yaw, 
                sumo_actor_transform.rotation.roll
            )

            TrafficVehicle_untransformed = TrafficVehicle()
            TrafficVehicle_untransformed.header.stamp = self.get_clock().now().to_msg()
            TrafficVehicle_untransformed.id = self.terasim_synced_vehicle_ids[sumo_actor_id]
            TrafficVehicle_untransformed.state = 3
            TrafficVehicle_untransformed.pose.position.x = sumo_actor_transform.location.x
            TrafficVehicle_untransformed.pose.position.y = sumo_actor_transform.location.y
            TrafficVehicle_untransformed.pose.position.z = sumo_actor_transform.location.z
            TrafficVehicle_untransformed.pose.orientation.x = qx
            TrafficVehicle_untransformed.pose.orientation.y = qy
            TrafficVehicle_untransformed.pose.orientation.z = qz
            TrafficVehicle_untransformed.pose.orientation.w = qw

            data_transformed.append(TrafficVehicle_untransformed)

            ##################################################################################
            ## The following add a transformed vehicle as in carla
            ##################################################################################

            carla_transform = self.get_carla_transform(sumo_actor_transform, sumo_actor_extent)

            qx, qy, qz, qw = self.euler_to_quaternion(
                carla_transform.rotation.pitch, 
                carla_transform.rotation.yaw, 
                carla_transform.rotation.roll
            )

            TrafficVehicle_transformed = TrafficVehicle()
            TrafficVehicle_transformed.header.stamp = self.get_clock().now().to_msg()
            TrafficVehicle_transformed.id = self.terasim_synced_vehicle_ids[sumo_actor_id]
            TrafficVehicle_transformed.state = 3
            TrafficVehicle_transformed.pose.position.x = carla_transform.location.x
            TrafficVehicle_transformed.pose.position.y = carla_transform.location.y
            TrafficVehicle_transformed.pose.position.z = carla_transform.location.z
            TrafficVehicle_transformed.pose.orientation.x = qx
            TrafficVehicle_transformed.pose.orientation.y = qy
            TrafficVehicle_transformed.pose.orientation.z = qz
            TrafficVehicle_transformed.pose.orientation.w = qw

            data_untransformed.append(TrafficVehicle_transformed)


        TrafficVehicleListTransformed = TrafficVehicleList()
        TrafficVehicleListUntransformed = TrafficVehicleList()

        TrafficVehicleListTransformed.header.stamp = self.get_clock().now().to_msg()
        TrafficVehicleListUntransformed.header.stamp = self.get_clock().now().to_msg()

        TrafficVehicleListTransformed.data = data_transformed
        TrafficVehicleListUntransformed.data = data_untransformed

        self.pub_carmaker_transformed.publish(TrafficVehicleListTransformed)
        self.pub_carmaker_untransformed.publish(TrafficVehicleListUntransformed)

        # List of keys to remove (to avoid modifying the dictionary while iterating)
        keys_to_remove = [key for key in self.terasim_synced_vehicle_ids if key not in cosim_terasim_vehicle_info_dict]

        # Remove the keys
        for key in keys_to_remove:
            del self.terasim_synced_vehicle_ids[key]

    def get_carla_transform(self, in_sumo_transform, extent):
        """
        Returns carla transform based on sumo transform.
        """
        in_location = in_sumo_transform.location
        in_rotation = in_sumo_transform.rotation

        offset = self.sumo_to_xdor_offset

        # From front-center-bumper to center (sumo reference system).
        # (http://sumo.sourceforge.net/userdoc/Purgatory/Vehicle_Values.html#angle)

        yaw = -1 * in_rotation.yaw + 90
        pitch = in_rotation.pitch
        out_location = (in_location.x - math.cos(math.radians(yaw)) * extent.x,
                        in_location.y - math.sin(math.radians(yaw)) * extent.x,
                        in_location.z - math.sin(math.radians(pitch)) * extent.x)
        out_rotation = (in_rotation.pitch, in_rotation.yaw, in_rotation.roll)

        # Applying offset sumo-carla net.
        out_location = (out_location[0] - offset[0],  -(out_location[1] - offset[1]), out_location[2] - offset[2])

        # Transform to carla reference system (left-handed system).
        out_transform = carla.Transform(
            carla.Location(out_location[0], out_location[1], out_location[2]),
            carla.Rotation(out_rotation[0], out_rotation[1] - 90, out_rotation[2]))

        return out_transform
    
    def euler_to_quaternion(self, pitch, yaw, roll):
        """
        Convert Euler angles (pitch, yaw, roll) to a quaternion.
        
        Parameters:
        - pitch, yaw, roll: Euler angles in degrees.
        
        Returns:
        - (x, y, z, w): Quaternion representation of the input angles.
        """
        # Convert degrees to radians
        pitch = math.radians(pitch)
        yaw = math.radians(yaw)
        roll = math.radians(roll)
        
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

