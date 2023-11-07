

#ifndef ROSNODE_H
#define ROSNODE_H

#include "ros/ros.h"
#include <iostream>


#include "mcity_msg/VehicleState.h"
#include "mcity_msg/Control.h"
#include "mcity_msg/PlanedPath2.h"
#include "mcity_msg/SensorCheck.h"

#include "dataModel.hpp"


class ROSNode
{

public:
    ROSNode(){};
    ~ROSNode(){};
    void ini(ros::NodeHandle * const rosNodeH,
             SYSTEM_DATA_S * const ssData);
    
    void publishCmd();

    //recv
    mcity_msg::SensorCheck sensor_msg;

private:
    ros::NodeHandle     * _nh   = NULL;
    Plan_Rlt_S          * _p2c  = NULL;
    VehState_S          * _vs   = NULL;
    Control_Value_S     * _ctrl = NULL;

    long count = 0;

    //pub
    ros::Publisher  pub_cmd2bywire;
    mcity_msg::Control cmd_msg;
    
    //recv
    ros::Subscriber sub_veh_state;
    ros::Subscriber sub_path;
    ros::Subscriber sub_sensor_check; 
    void vehStateCB(const mcity_msg::VehicleState::ConstPtr& msg);
    void pathCB(const mcity_msg::PlanedPath2::ConstPtr& msg);
    void sensorCheckCB(const mcity_msg::SensorCheck::ConstPtr& msg);   
};


#endif /*ROSNODE_H*/


 