

#include "rosNode.h"


void ROSNode::ini(
    ros::NodeHandle   * const rosNodeH,
    SYSTEM_DATA_S * const ssData)
{
    
    if (rosNodeH==NULL || ssData==NULL) return;

    _nh = rosNodeH;
    _p2c = & ssData->p2c;
    _vs = & ssData->vs;
    _ctrl = & ssData->ctrl;

    //ini
    count = 0;

    //register pub
    pub_cmd2bywire = _nh->advertise<mcity_msg::Control>("/mkz_bywire_intf/control_tmp", 2); 
    
    //register sub
    sub_path         = _nh->subscribe("/mkz_path_plan/result", 2, & ROSNode::pathCB, this);
    sub_veh_state    = _nh->subscribe("/mkz_bywire_intf/vehState", 2, & ROSNode::vehStateCB, this);    
    sub_sensor_check = _nh->subscribe("/mkz_bywire_intf/SensorCheck", 2, & ROSNode::sensorCheckCB, this);
}


void ROSNode::publishCmd()
{
    if (_nh == NULL || _ctrl == NULL)
        return;

    if(count ++ > 9999999) count = 0;
    cmd_msg.timestamp = this->get_clock()->now();
    cmd_msg.count           = count;
    cmd_msg.brake_cmd       = _ctrl->brake;
    cmd_msg.throttle_cmd    = _ctrl->throttle;
    cmd_msg.steering_cmd    = _ctrl->steering;
    cmd_msg.gear_cmd        = _ctrl->gear;
    cmd_msg.turn_signal_cmd = _ctrl->turn_signal;

    //printf("output brake cmd %f\n", cmd_msg.brake_cmd);

    pub_cmd2bywire.publish(cmd_msg);
};

