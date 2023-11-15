#!/bin/bash

source /home/mtl12345/autoware/install/setup.bash

ros2 bag record /vehicle/ds/throttle_report /vehicle/ds/brake_report /vehicle/ds/steering_report vehicle/ds/gear_report vehicle/wheel_speed_report ins/imu ins/odometry ins/nav_sat_fix
