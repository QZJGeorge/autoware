

#include "rosNode.h"
#include <math.h>
#include "UTM.h"
 

void ROSNode::vehStateCB(const mcity_msg::VehicleState::ConstPtr& msg)
{
    if (_vs == NULL) return;

    _vs->timestamp = msg->timestamp;
    _vs->rtk_state_string = msg->rtk_state_string;
    _vs->latitude = msg->rtk_gps_latitude;
    _vs->longitude = msg->rtk_gps_longitude;
    _vs->z = msg->z;
    UTM::LLtoUTM( _vs->latitude, _vs->longitude,
                  _vs->y, _vs->x);

    _vs->heading = msg->heading;
    _vs->yawRate = msg->yaw_rate;
    _vs->speed_x = msg->speed_x;
    _vs->speed_y = msg->speed_y;
    _vs->acc_x = msg->acc_x;
    _vs->acc_y = msg->acc_y;

    _vs->by_wire_enabled         = msg->by_wire_enabled;
    _vs->steering_wheel_angle    = msg->steer_state;
    _vs->wheelAngle              = msg->steer_state/STEERING_RATIO; //not steering wheel, front wheel    
    _vs->brake_pedal_output      = msg->brake_state;
    _vs->throttle_pedal_output   = msg->throttle_state;
    _vs->gear_position           = msg->gear_pos;
}


void ROSNode::pathCB(const mcity_msg::PlanedPath2::ConstPtr& msg)
{
    if (_p2c == NULL) return;
    
    _p2c->timestamp =msg->timestamp;
    _p2c->etop =msg->etop;
    _p2c->go =msg->go;
    _p2c->signal =msg->signal;

    _p2c->vd =msg->vd;
    _p2c->acc_d =msg->acc_d;
    _p2c->acc_dd =msg->acc_dd;
    _p2c->slope =msg->slope;
    _p2c->vmax =msg->vmax;

    _p2c->ey =msg->ey;
    _p2c->ephi =msg->ephi;
    _p2c->len =msg->len;
    _p2c->cr =msg->cr;

    _p2c->x =msg->x;
    _p2c->y =msg->y;

    _p2c->cr_vector.clear();
    for (int i = 0; i < msg->cr_vector.size(); ++i)
        _p2c->cr_vector.push_back(msg->cr_vector.at(i));

    _p2c->vd_vector.clear();
    for (int i = 0; i < msg->vd_vector.size(); ++i)
        _p2c->vd_vector.push_back(msg->vd_vector.at(i));

    _p2c->slope_vector.clear();
    for (int i = 0; i < msg->slope_vector.size(); ++i)
        _p2c->slope_vector.push_back(msg->slope_vector.at(i));

    _p2c->x_vector.clear();
    for (int i = 0; i < msg->x_vector.size(); ++i)
        _p2c->x_vector.push_back(msg->x_vector.at(i));

    _p2c->y_vector.clear();
    for (int i = 0; i < msg->y_vector.size(); ++i)
        _p2c->y_vector.push_back(msg->y_vector.at(i)); 

    //printf("rcv msg etop%d\n", msg->etop);
}


void ROSNode::sensorCheckCB(const mcity_msg::SensorCheck::ConstPtr& msg)
{
    sensor_msg = * msg;
}
 