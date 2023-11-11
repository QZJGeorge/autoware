
/*
 * Used for path tracking control
 * by Shaobing Xu at MTC, 11/14/2016
 * email: shaobxu@gmail.com
 * pathFollowing.cpp
 *
 */


#include "pathFollowing.hpp"

using namespace std;


void PathFollowing::ini(
    Plan_Rlt_S * const planning2control_msg,
    VehState_S * const vehicle_state,
    Control_Value_S * const control_output,
    std::string gain_folder,
    float max_allowed_ey_,
    float max_allowed_eh_)
{
    _p2c = planning2control_msg;
    _vs = vehicle_state;
    _ctrl = control_output;

    _p2c->cr_vector.clear();
    for (int i = 0; i < 100; ++i)
        _p2c->cr_vector.push_back(0.0f);

    max_allowed_ey = max_allowed_ey_;
    max_allowed_eh = max_allowed_eh_;

    loadGains(gain_folder);
}


int PathFollowing::run()
{
    if (_p2c == NULL || _vs == NULL || _ctrl == NULL )
        return -1;

    count += 1;

    //step 0: check in path
    if ( fabs(_p2c->ey) < max_allowed_ey && 
         fabs(_p2c->ephi) < max_allowed_eh) //rad
        PVC.inPathFlag  = true;
    else
        PVC.inPathFlag  = false;


    if (PVC.inPathFlag != true)
    {
        _p2c->etop = MAX(_p2c->etop, etop_HIGH);
        
        if (count%25==0)
        printf("The vehicle departs from the path, ey=%f/%f ephi=%f/%f, set to etop_HIGH\n",
            _p2c->ey, max_allowed_ey, _p2c->ephi, max_allowed_eh);
    }

    //step 1: preview
    PVC.wheelAngle = preview();
    PVC.steeringAngle = MAX( MIN_STEERING_ANGLE, 
                        MIN( MAX_STEERING_ANGLE, PVC.wheelAngle * STEERING_RATIO));

    // step 3: OUTPUT
    if (_vs->speed_x > 0.001f)
        _ctrl->steering = PVC.steeringAngle;

    // step 4: set the delayed steering cmd
    if (count%2==0) //time step 0.04 second
    {
        PVC.delayedCmd[0] = PVC.delayedCmd[1]; //delayed 5th steps 
        PVC.delayedCmd[1] = PVC.delayedCmd[2];
        PVC.delayedCmd[2] = PVC.delayedCmd[3];
        PVC.delayedCmd[3] = PVC.delayedCmd[4];

        if (_vs->speed_x < 1 || _vs->by_wire_enabled != true)
            PVC.delayedCmd[4] = 0;
        else
            PVC.delayedCmd[4] = _ctrl->steering / STEERING_RATIO; //delayed 1st step
    }

    return 0;
}


