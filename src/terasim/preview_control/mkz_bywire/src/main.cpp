
//main.cpp

#include <iostream>
#include "rosNode.h"

Set_S adminSet;


int main (int argc, char** argv)
{

    ros::init (argc, argv, "mkz_bywire");
    ros::NodeHandle nodeH;
    ROSNode rosNode_(& nodeH);
    ros::NodeHandle priv_nh("~");
 
    priv_nh.getParam("max_speed", adminSet.max_speed);
    priv_nh.getParam("max_throttle", adminSet.max_throttle);
    priv_nh.getParam("max_lat_acc", adminSet.max_lat_acc);
    priv_nh.getParam("GPS_angle_calib", adminSet.gps_angle_calib);
    priv_nh.getParam("correct_cg_x", adminSet.correct_cg_x);
    priv_nh.getParam("correct_cg_y", adminSet.correct_cg_y);
    priv_nh.getParam("output_xmsgs", adminSet.output_xmsgs);
    priv_nh.getParam("enable_safeguard", adminSet.enable_safeguard);


    printf("  getParam max_speed    %f\n",adminSet.max_speed);
    printf("  getParam max_throttle %f\n",adminSet.max_throttle);
    printf("  getParam max_lat_acc  %f\n",adminSet.max_lat_acc);
    printf("  getParam GPS_angle_calib  %f\n",adminSet.gps_angle_calib);
    printf("  correct_cg_x  %f\n",adminSet.correct_cg_x);
    printf("  correct_cg_y  %f\n",adminSet.correct_cg_y);
    printf("  getParam output_xmsgs %d\n",adminSet.output_xmsgs);
    printf("  getParam enable_safeguard %d\n\n",adminSet.enable_safeguard);


    ros::Rate loop_rate(FREQ); // hz
    long count = 0;

    while (ros::ok())
    {
        ++count;
        ros::spinOnce();

        rosNode_.check();
        rosNode_.sensorCheck();

        rosNode_.publishCmd();

        if (adminSet.output_xmsgs)
            rosNode_.publishVehState();

        if (count%FREQ == 0)
            rosNode_.publishSensorcheck();
        
        loop_rate.sleep();
        ROS_INFO_THROTTLE(10,"By_wire loop count = %ld", count);
    }

    return 0;

}

