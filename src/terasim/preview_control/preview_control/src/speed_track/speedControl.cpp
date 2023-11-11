
/*
 *
 * Used to control longitudinal speed
 * by Shaobing Xu at MTC
 * email: shaobxu@gmail.com
 * speedControl.cpp
 *
 */


#include <iostream>
#include <algorithm>
#include <math.h>

#include "speedControl.hpp"

#define SLOPE2PADEL (SC.acc_slope*(0.33-0.23)/(0.6*9.8))



void SpeedControl::ini(
    Plan_Rlt_S * const planning2control_msg,
    VehState_S * const vehicle_state,
    Control_Value_S * const control_output,
    float pid_kp_, 
    float pid_ki_, 
    int frequence_)
{   
    _p2c = planning2control_msg;
    _vs = vehicle_state;
    _ctrl = control_output;
    pid_kp = pid_kp_;
    pid_ki  = pid_ki_;
    frequence = frequence_;

    SC.vd  = 0.0f;
    SC.throttle_cmd = 0.0f;
    SC.brake_cmd    = 0.25f;
    SC.acc_cmd      = -3.0f;
    SC.errIntg       = 0.0f;
    SC.acc_max_barr  = -3.0f;
}


int SpeedControl::run()
{
    if (PRINT_OUT_SPEED) printf("\n\n==>> In speed control\n");
    if (_p2c == NULL || _vs == NULL || _ctrl == NULL ) return -1;
    count ++;

    // *************** step 0: INPUT, Assignment *****************
    SC.vd       = _p2c->vd;
    SC.speed_x  = MAX(0.0, _vs->speed_x);

    // ************************************************************
    //step 1: estimate road slope and mileage
    float slope = _p2c->slope;
    SC.acc_slope = 9.8*sin(slope);

    //step 2: speed error
    SC.vErr = SC.speed_x-SC.vd;

    //step 3: speed control rule
    SC.acc_cmd = speed_pid_ctrl();


    SC.acc_cmd = MAX(MAX_DCC, MIN(MAX_ACC, SC.acc_cmd));

    //step 4: get the padel opening
    getPadelOpening(SC.acc_cmd, SC.speed_x, SC.throttle_cmd, SC.brake_cmd);

    //step 5: check gear
    //make sure the transmission is shifted to "drive"
    if (_vs->gear_position != GEAR_DRIVE && SC.vd > 0.1) //target speed > 0.1
    {
        SC.errIntg      = 0.0f;
		SC.brake_cmd    = 0.26f;
		SC.throttle_cmd = 0.0f;
        SC.gear_cmd     = GEAR_DRIVE;
        if (PRINT_OUT_SPEED)
           printf("In speed control, shift gear to DRIVE");
    }

    // step 6: correct SC.errIntg
    if (_vs->gear_position != GEAR_DRIVE)
        SC.errIntg = 0.0f;

    if (SC.vd == 0 && SC.errIntg < 0)
        SC.errIntg = 0.0f; //no accelerate

    if (SC.speed_x == 0 && SC.errIntg > 0)
        SC.errIntg = 0.0f; //no dcc

    // step 7:if speeding
    if (SC.speed_x > MAX_SPEED + 0.2)
        SC.throttle_cmd = 0.0f;

    // step 8: low speed
    if (SC.speed_x < 2.5 && SC.vd > SC.speed_x+3.0 && _p2c->etop ==0)
    {
        SC.throttle_cmd = 0.3f + SLOPE2PADEL;
    }


    if (SC.speed_x < 0.3 && SC.vd < 2.0 && SC.brake_cmd > 0.1f )
    {
        if (SC.vd < SC.speed_x)
            SC.brake_cmd = MAX(0.22f, 0.22f - SLOPE2PADEL);

        if (SC.vd == 0)
            SC.brake_cmd = 0.22f + ABS(SLOPE2PADEL);
    }

 
    // ********************** OUTPUT *******************
    SC.throttle_cmd  = MAX(0.0f, MIN( MAX_THROTTLE, SC.throttle_cmd ));
    SC.brake_cmd     = MAX(0.0f, MIN( MAX_BRAKE,    SC.brake_cmd ));

    if (SC.brake_cmd > 0.0f) SC.throttle_cmd = 0.0f;
    if (SC.throttle_cmd> 0.01f) SC.brake_cmd = 0.0f;

    _ctrl->brake         = SC.brake_cmd;
    _ctrl->throttle      = SC.throttle_cmd;
    _ctrl->gear          = SC.gear_cmd;
    _ctrl->turn_signal   = _p2c->signal;


    // ********************** final steps *******************
    if( _p2c->etop != etop_NONE )
    {
        if (_p2c->etop == etop_LOW)
            setetop_level_low();
        else if (_p2c->etop == etop_MEDIUM)
            setetop_level_medium();
        else
            setetop_level_high();
        if (count%25==0)
            printf("Set to etop, level%d\n", _p2c->etop);
    }

    //smooth brake
    float beta = 0.95;
    if (_ctrl->brake >= 0.18)
    {
        if (_ctrl->brake > brake_prev)
            _ctrl->brake = _ctrl->brake * (1-beta) + brake_prev * beta;
        brake_prev = MAX(0.18, _ctrl->brake);
    };

    return 0;
}



float SpeedControl::speed_pid_ctrl()
{
    float acc = -2.0f;

    //step 1: error integral
    SC.errIntg += (SC.vErr/frequence) * pid_ki;
    SC.errIntg = max(-0.42f, min(1.25f, SC.errIntg) ); // acc ->[ -1.25, 0.42]

    //step 2: feedback of err
    SC.speedFB  = SC.vErr * pid_kp;

    //step 3: control
    acc = - SC.errIntg - SC.speedFB + _p2c->acc_d + SC.acc_slope;

    //printf("_p2c->acc_d %f\n", _p2c->acc_d);
 
    return acc;
}




void SpeedControl::setStop()
{
    if ( _vs->speed_x >= 2.0 )
        _ctrl->brake = MAX(0.220f, 0.220f - SLOPE2PADEL);
    else
        _ctrl->brake = MAX(0.22f, 0.22f - SLOPE2PADEL);

    if (_vs->speed_x < 0.2)
        _ctrl->brake = 0.22f + ABS(SLOPE2PADEL);

    if (_vs->speed_x == 0 )
    {        
        if ( stopTimeCount++ > frequence*1.5) // 1.5 seconds
        {
            _ctrl->brake = 0.235f;
            _ctrl->gear = GEAR_PARK;
        }
    }
    else
        stopTimeCount = 0;

    _ctrl->throttle = 0.0f;

    return;
}


 


void SpeedControl::setetop_level_high()
{
    float throttle = 0, brake =0.25; 
    getPadelOpening(-3.0, _vs->speed_x, throttle, brake);
   
    if (_vs->speed_x < 0.5)
        brake = 0.235f;

    _ctrl->brake = MAX(brake,0.25f);
    _ctrl->throttle = 0.0f;
}

void SpeedControl::setetop_level_medium()
{    
    //if ( _vs->speed_x >= 0.5 )
    //    _ctrl->brake = MAX(0.24f, 0.24f - SLOPE2PADEL);
    //else
    //    _ctrl->brake = MAX(0.226f, 0.226f - SLOPE2PADEL);

    _ctrl->brake = MAX(0.245f, 0.245f - SLOPE2PADEL);
    _ctrl->throttle = 0.0f;
    //if (_vs->speed_x < 0.2)
    //    _ctrl->brake = 0.218f + ABS(SLOPE2PADEL);
}


void SpeedControl::setetop_level_low()
{
    if ( _vs->speed_x >= 2.0 )
        _ctrl->brake = MAX(0.22f, 0.22f - SLOPE2PADEL);
    else
        _ctrl->brake = MAX(0.22f, 0.22f - SLOPE2PADEL);

    _ctrl->throttle = 0.0f;
    if (_vs->speed_x < 0.2)
        _ctrl->brake = 0.22f + ABS(SLOPE2PADEL);
}