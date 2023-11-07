

/*
 *
 * Used for path tracking
 * by Shaobing Xu at MTC
 * email: shaobxu@gmail.com
 * pathFollowing.hpp
 *
 */


#ifndef PATHFOLLOWING_HPP
#define PATHFOLLOWING_HPP

#include <iostream> 
#include <algorithm> 
#include <math.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>


#include "SX.h"
#include "XMath.h"

#define GAIN_LINE_NUM (30)

struct PreviewControl_S
{
    bool  inPathFlag    = false;
    float wheelAngle    = 0;
    float steeringAngle = 0;

    float dE       = 1e8;
    float dERate   = 1e8;
    float hE       = 0;
    float hERate   = 0;
    float steerAglReal  = 0;
    float delayedCmd[5]  = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f};

    float dEGain       = 0;
    float dERateGain   = 0;
    float hEGain       = 0;
    float hERateGain   = 0;
    float steerAglRealGain  = 0;
    float delayedCmdGain[5]  = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f};

    float dEFB      = 0;
    float dERateFB  = 0;
    float hEFB      = 0;
    float hERateFB  = 0;
    float steerAglRealFB = 0;
    float delayedCmdFB  = 0;

    float feedForward    = 0;

    float steer_preview  = 0;
    float steer_CBF_final= 0;
};
 


 
class PathFollowing
{

public:
    PathFollowing(){};
    ~PathFollowing(){};
    void ini(
        Plan_Rlt_S * const planning2control_msg,
        VehState_S * const vehicle_state,
        Control_Value_S * const control_output,
        std::string gain_folder,
        float max_allowed_ey_,
        float max_allowed_eh_,
        bool consider_delay_lag_,
        int controller_id_);

    int  run();
    PreviewControl_S PVC;

private:
    float preview();
    int loadGains(std::string gain_folder);
    float pure_pursuit();

    float kfb[GAIN_LINE_NUM][20] = {{0}};
    float kff[GAIN_LINE_NUM][250] = {{0}};
    float steer_pp = 0;
    Plan_Rlt_S * _p2c  = NULL;
    VehState_S * _vs   = NULL;
    Control_Value_S * _ctrl = NULL;
    long count = 0;
    float max_allowed_ey;
    float max_allowed_eh;
    bool consider_delay_lag;
    int controller_id = 1;

public:    
    

};

#endif // PATHFOLLOWING_HPP