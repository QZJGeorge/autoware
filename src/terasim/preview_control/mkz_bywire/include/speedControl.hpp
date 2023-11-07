
/*
 *
 * Used to control longitudinal speed
 * by Shaobing Xu at MTC
 * email: shaobxu@gmail.com
 * speedControl.hpp
 *
 */


#ifndef SPEEDCONTROL_H
#define SPEEDCONTROL_H

#include "SX.h"
#include "XMath.h"

#define PRINT_OUT_SPEED (false)
using namespace std;

// a point
struct Point_X
{    
    float x =0;
    float y = 0;
    float z = 0;
    float slope = 0;
};

// data definition for speed control
struct SpeedControl_S
{
    int controler       = 1;

    float slope         = 0;
    float acc_slope     = 0;

    float vd_road       = MAX_SPEED;

    float speed_x       = 0.0f;
    float vd            = 0.0f;
    float vErr          = 0.0f;
    
    float brake_cmd     = 0.0f; 
    float throttle_cmd  = 0.0f;
    int   gear_cmd      = 0;
    float acc_cmd       = -3.0f;

    float errIntg       = 0.0f;
    float speedFB       = 0.0f;
    float accFB         = 0.0f;
    float speedPrev     = 0.0f;
    float slopePrev     = 0.0f;
    float acc_max_barr  = 0.0f;
};
 

class SpeedControl
{

public:
    SpeedControl() {};
    ~SpeedControl() {};
    void ini(Plan_Rlt_S * const planning2control_msg,
        VehState_S * const vehicle_state,
        Control_Value_S * const control_output,
        int vehicle_id_, 
        float pid_kp_, 
        float pid_ki_,
        int frequence_,
        float  coe_smooth_brake_,
        float  coe_smooth_throttle_,
        float  scale_brake_,
        float  scale_throttle_);

    int  run();
    void setStop();
    void setEstop_level_high();
    void setEstop_level_medium();
    void setEstop_level_low();

    SpeedControl_S SC;

private:
    float roadLimitedSpeed();
    float speed_pid_ctrl();
    void  getPadelOpening(float acc, float speed, float & throttle, float & brake);
    float cal_brake_pedal_opening(float deceleration);    
    float cal_road_load(float vehicle_speed);

    void slopeEst();
    Point_X P_now, P_pre;

    void calMileage();
    double m_x_pre =-1e5, m_y_pre=-1e5;

    void smoothBrakeThrottle(float beta_brake, float beta_throttle);
    Control_Value_S cmd_prev;

    Plan_Rlt_S * _p2c  = NULL;
    VehState_S * _vs   = NULL;
    Control_Value_S * _ctrl = NULL;

    int vehicle_id = 0;
    float pid_kp = 0.f;
    float pid_ki  = 0.f;
    int frequence = 50;

    float  coe_smooth_brake = 0.95;
    float  coe_smooth_throttle = 0.99;
    float  scale_brake = 1.0;
    float  scale_throttle = 1.0;
    
    long stopTimeCount = 0;
    long count = 0;
};

#endif
