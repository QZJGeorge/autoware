#ifndef ROSNODE_H
#define ROSNODE_H

#include "ros/ros.h"
#include <iostream>

#include <std_msgs/String.h>
#include <std_msgs/Bool.h>

#include <dbw_mkz_msgs_mtlvp/ThrottleCmd.h>
#include <dbw_mkz_msgs_mtlvp/BrakeCmd.h>
#include <dbw_mkz_msgs_mtlvp/SteeringCmd.h>
#include <dbw_mkz_msgs_mtlvp/GearCmd.h>
#include <dbw_mkz_msgs_mtlvp/TurnSignalCmd.h>

#include <dbw_mkz_msgs_mtlvp/ThrottleReport.h>
#include <dbw_mkz_msgs_mtlvp/BrakeReport.h>
#include <dbw_mkz_msgs_mtlvp/GearReport.h>
#include <dbw_mkz_msgs_mtlvp/SteeringReport.h>
#include <dbw_mkz_msgs_mtlvp/WheelSpeedReport.h>

#include <sensor_msgs/NavSatFix.h>
#include <geometry_msgs/TwistWithCovarianceStamped.h>
#include <nav_msgs/Odometry.h>
#include <sensor_msgs/Imu.h> 


#include "mcity_msg/VehicleState.h"
#include "mcity_msg/Control.h"
#include "mcity_msg/SensorCheck.h"
#include "mcity_msg/SafeGuardResults.h"

#include "dataModel.h"
#include "SX.h"


class ROSNode
{

public:
    ROSNode(ros::NodeHandle * nodeH)
    {
        _nh = nodeH;
        ini();
    };

    ~ROSNode(){};

    void ini();
    void publishCmd();
    void publishVehState();
    void check();
    void sensorCheck();

    void publishSensorcheck();

private:
    ros::NodeHandle * _nh = NULL;
    long count = 0;

    //pub

    ros::Publisher pub_throttle;
    ros::Publisher pub_brake;
    ros::Publisher pub_steering;
    ros::Publisher pub_gear;
    ros::Publisher pub_turn_signal;
    ros::Publisher pub_veh_state;
    ros::Publisher pub_sensor_check;

    dbw_mkz_msgs_mtlvp::ThrottleCmd throttle_msg;
    dbw_mkz_msgs_mtlvp::BrakeCmd brake_msg;
    dbw_mkz_msgs_mtlvp::SteeringCmd steering_msg;
    dbw_mkz_msgs_mtlvp::GearCmd gear_msg;
    dbw_mkz_msgs_mtlvp::TurnSignalCmd turn_signal_msg;

    mcity_msg::VehicleState vs_msg;
    mcity_msg::SensorCheck sensor_msg;

    mcity_msg::SafeGuardResults safe_guard_msg;


    //recv
    ros::Subscriber pub_sys_enable;
    ros::Subscriber sub_cmd;
    ros::Subscriber sub_throttle_rept;
    ros::Subscriber sub_brake_rept;
    ros::Subscriber sub_steer_rept;
    ros::Subscriber sub_gear_rept;
    ros::Subscriber sub_wheel_speed;
    ros::Subscriber sub_gps_fix;
    ros::Subscriber sub_gps_vel;
    ros::Subscriber sub_gps_odom;
    ros::Subscriber sub_gps_pos_type;
    ros::Subscriber sub_gps_nav_state;
    ros::Subscriber sub_imu;
    ros::Subscriber sub_safe_guard;

    void sysEnableCB(const std_msgs::Bool::ConstPtr& msg);
    void cmdCB(const mcity_msg::Control::ConstPtr& msg);
    void throttleReptCB(const dbw_mkz_msgs_mtlvp::ThrottleReport::ConstPtr& msg);
    void brakeReptCB(const dbw_mkz_msgs_mtlvp::BrakeReport::ConstPtr& msg);
    void steerReptCB(const dbw_mkz_msgs_mtlvp::SteeringReport::ConstPtr& msg);
    void gearReptCB(const dbw_mkz_msgs_mtlvp::GearReport::ConstPtr& msg);
    void wheelspeedReptCB(const dbw_mkz_msgs_mtlvp::WheelSpeedReport::ConstPtr& msg);
    void gpsFixCB(const sensor_msgs::NavSatFix::ConstPtr& msg);
    void gpsVelCB(const geometry_msgs::TwistWithCovarianceStamped::ConstPtr& msg);
    void gpsOdomCB(const nav_msgs::Odometry::ConstPtr& msg);
    void gpsPosTypeCB(const std_msgs::String::ConstPtr& msg);
    void gpsNavStateCB(const std_msgs::String::ConstPtr& msg);
    void imuCB(const sensor_msgs::Imu::ConstPtr& msg);
    void safeGuardCB(const mcity_msg::SafeGuardResults::ConstPtr& msg);
 
    Control_Value_S cmd_in;
    long control_count = 0;
    std::string postype;
};


#endif /*ROSNODE_H*/
