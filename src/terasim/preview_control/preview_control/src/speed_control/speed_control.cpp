#include <speed_control.hpp>

void SpeedControl::get_padel_opening(float acc, float speed, float & throttle, float & brake)
{
    // step 0: check
    throttle = 0.0f;
    brake    = 0.23f;

    // step 1: find the speed level
    int vLevel = 0;

    if (speed < SPEEDTABLE[0])
    {
        brake = 0.0f;

        if (acc > 1.5)
            throttle = 0.42f;
        else if (acc > 1.0)
            throttle = 0.32f;
        else if (acc > 0.7)
            throttle = 0.26f;
        else if (acc > 0.25)
            throttle = 0.22f;
        else
        {
            throttle = 0.0f;
            brake    = 0.23f;
        }

        return;
    }
    else if ( speed > SPEEDTABLE[VNUM-1] - 0.1 )
    {
        throttle = 0.0f;
        brake    = 0.0f;
        return;
    }
    else
    {
        if (speed < SPEEDTABLE[1])
            vLevel = 0;
        else
            vLevel = (int)(speed/0.5);
    }

    // step 2: find the acc level
    float accT[TNUM];

    for (int i = 0; i < TNUM; ++i)
        accT[i] = (  ACCTABLE[i][vLevel+0] *(SPEEDTABLE[vLevel+1]-speed) 
                   + ACCTABLE[i][vLevel+1] *(speed - SPEEDTABLE[vLevel]))
                  / (SPEEDTABLE[vLevel+1]-SPEEDTABLE[vLevel]);

    
    if (acc < accT[0])
    {
        throttle = 0;
        brake    = 0.23f;
    }
        
    else if (acc >= accT[TNUM-1])
    {
        throttle = THROTTLETABLE[TNUM-1];
        brake    = 0.0f;
    }
        
    else
    {
        for (int i = 0; i < TNUM-1; ++i)
            if (acc>= accT[i] && acc < accT[i+1])
            {
                throttle = (THROTTLETABLE[i] * (accT[i+1]-acc) + THROTTLETABLE[i+1] * (acc-accT[i]))/(accT[i+1]-accT[i]);
                brake    = 0.0f;
                break;
            }
    }

    // step 3: computing brake
    if (acc < accT[0]) // need more brake, i.e., coast is not enough
    {        
        throttle = 0.0f;
        brake  = cal_brake_pedal_opening(accT[0]-acc);
    }

    if (brake > 0)
        throttle = 0;

    return;
}

float SpeedControl::cal_brake_pedal_opening(float deceleration)
{
    float torque_demand = VEHICLE_WEIGHT * fabs(deceleration) * WHEEL_DIAMETER / 2;
    float brake_pade = 0;

    if ( torque_demand >= BRAKETABLE[5][1]) //row 10
        return BRAKETABLE[5][0];

    for (int i = 0; i < 5; ++i)
    {
        if (torque_demand >= BRAKETABLE[i][1] && torque_demand < BRAKETABLE[i+1][1])
        {
            brake_pade  =  BRAKETABLE[i][0] + (torque_demand - BRAKETABLE[i][1])
                        * (BRAKETABLE[i+1][0] - BRAKETABLE[i][0])
                        / (BRAKETABLE[i+1][1] - BRAKETABLE[i][1]);
            break;
        }
    }
    return brake_pade;
}

float SpeedControl::cal_road_load(float vehicle_speed)
{
    float road_load = ( 76.98 + 40.28 * vehicle_speed)/VEHICLE_WEIGHT;
    
    if (vehicle_speed < 1)
        road_load = 0;

    return road_load;
}

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
    if (_p2c == NULL || _vs == NULL || _ctrl == NULL ){
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Speed controller not initizlized, return");
        return -1;
    }
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
    get_padel_opening(SC.acc_cmd, SC.speed_x, SC.throttle_cmd, SC.brake_cmd);

    //step 5: check gear
    //make sure the transmission is shifted to "drive"
    if (_vs->gear_position != GEAR_DRIVE && SC.vd > 0.1) //target speed > 0.1
    {
        SC.errIntg      = 0.0f;
		SC.brake_cmd    = 0.26f;
		SC.throttle_cmd = 0.0f;
        SC.gear_cmd     = GEAR_DRIVE;
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
    if (SC.speed_x < 2.5 && SC.vd > SC.speed_x+3.0 && _p2c->estop ==0)
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
    if( _p2c->estop != estop_NONE )
    {
        if (_p2c->estop == estop_LOW)
            setestop_level_low();
        else if (_p2c->estop == estop_MEDIUM)
            setestop_level_medium();
        else
            setestop_level_high();
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
    return acc;
}

void SpeedControl::set_stop()
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

void SpeedControl::setestop_level_high()
{
    float throttle = 0, brake =0.25; 
    get_padel_opening(-3.0, _vs->speed_x, throttle, brake);
   
    if (_vs->speed_x < 0.5)
        brake = 0.235f;

    _ctrl->brake = MAX(brake,0.25f);
    _ctrl->throttle = 0.0f;
}

void SpeedControl::setestop_level_medium()
{
    _ctrl->brake = MAX(0.245f, 0.245f - SLOPE2PADEL);
    _ctrl->throttle = 0.0f;
}

void SpeedControl::setestop_level_low()
{
    if ( _vs->speed_x >= 2.0 )
        _ctrl->brake = MAX(0.22f, 0.22f - SLOPE2PADEL);
    else
        _ctrl->brake = MAX(0.22f, 0.22f - SLOPE2PADEL);

    _ctrl->throttle = 0.0f;
    if (_vs->speed_x < 0.2)
        _ctrl->brake = 0.22f + ABS(SLOPE2PADEL);
}