import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
import csv
import mgrs

class SlopeRecorder(Node):
    def __init__(self):
        super().__init__('slope_recorder')
        self.subscription = self.create_subscription(NavSatFix, '/ins/nav_sat_fix', self.listener_callback, 10)
        self.previous_point = None
        self.csv_file = open('/home/zhijie/autoware/src/mcity/slope_recorder/data/gnss_data.csv', mode='w', newline='')
        self.csv_writer = csv.writer(self.csv_file, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
        self.csv_writer.writerow(['x', 'y', 'z'])

        self.m = mgrs.MGRS()
        self.previous_point = None

    def listener_callback(self, msg):
        latitude = msg.latitude
        longitude = msg.longitude
        altitude = msg.altitude

        mgrs_coord = self.m.toMGRS(latitude, longitude)
        x = mgrs_coord[5:10]
        y = mgrs_coord[10:15]

        current_point = (x, y)

        if current_point != self.previous_point:
            self.csv_writer.writerow([x, y, altitude])
            self.previous_point = current_point
            print(f'x: {x}, y: {y}, z: {altitude}')

    def on_shutdown(self):
        self.csv_file.close()

def main(args=None):
    rclpy.init(args=args)
    slope_recorder = SlopeRecorder()
    rclpy.spin(slope_recorder)

    slope_recorder.on_shutdown()
    rclpy.shutdown()

if __name__ == '__main__':
    main()