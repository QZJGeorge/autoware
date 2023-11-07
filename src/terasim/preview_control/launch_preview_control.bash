#!/bin/sh
# export ROS_IP=192.168.50.233
# export ROS_MASTER_URI=http://192.168.50.27:11311
source ./devel/setup.bash

gnome-terminal \
    --tab -e "roslaunch dbw_mkz_twist_controller_mtlvp twist_controller_preview.launch" \
    --tab -e "roslaunch mkz_control mkz_control.launch" \
    --tab -e "rosrun dummy_planner_mtlvp sender_path.py"
