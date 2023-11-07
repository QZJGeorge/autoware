

#include "rosNode.h"
#include <math.h>
#include "UTM.h"
 

void ROSNode::vehStateCB(const mcity_msg::VehicleState::ConstPtr& msg)
{
    if (_vs == NULL) return;

    _vs->timestamp = msg->timestamp;
    _vs->RTK_state_string = msg->RTK_state_string;
    _vs->latitude = msg->RTK_gps_latitude;
    _vs->longitude = msg->RTK_gps_longitude;
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
    _p2c->Estop =msg->Estop;
    _p2c->Go =msg->Go;
    _p2c->Signal =msg->Signal;

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

    _p2c->crVector.clear();
    for (int i = 0; i < msg->crVector.size(); ++i)
        _p2c->crVector.push_back(msg->crVector.at(i));

    _p2c->vdVector.clear();
    for (int i = 0; i < msg->vdVector.size(); ++i)
        _p2c->vdVector.push_back(msg->vdVector.at(i));

    _p2c->slopeVector.clear();
    for (int i = 0; i < msg->slopeVector.size(); ++i)
        _p2c->slopeVector.push_back(msg->slopeVector.at(i));

    _p2c->xVector.clear();
    for (int i = 0; i < msg->xVector.size(); ++i)
        _p2c->xVector.push_back(msg->xVector.at(i));

    _p2c->yVector.clear();
    for (int i = 0; i < msg->yVector.size(); ++i)
        _p2c->yVector.push_back(msg->yVector.at(i)); 

    //printf("rcv msg Estop%d\n", msg->Estop);
}


void ROSNode::sensorCheckCB(const mcity_msg::SensorCheck::ConstPtr& msg)
{
    sensor_msg = * msg;
}
 