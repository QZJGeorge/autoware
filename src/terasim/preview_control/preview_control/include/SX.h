
/*
 * Definition of Shaobing Xu
 *
 */


#ifndef SX_PUBLIC_H
#define SX_PUBLIC_H

#include <iostream> 
#include <math.h> 
#include <unistd.h>
#include <stdbool.h>
#include <vector>

#include <string>
#include <cstring>

// Path following parameters
#define MAX_DISTANCE_ERROR      (1.35f)          //m
#define MAX_HEADING_ERROR       (45*M_PI/180)   //degree

 
// Steering
#define MAX_STEERING_ANGLE      (2.5*M_PI)
#define MIN_STEERING_ANGLE      (-2.5*M_PI)


// Speed control parameters
#define MAX_THROTTLE            (0.45f)
#define MAX_BRAKE               (0.70f)
#define MAX_SPEED               (25.0f)     // m/s
#define MAX_ACC                 (3.00f)
#define MAX_DCC                 (-8.0f)
#define MAX_ACC_LAT             (3.5f)

// always fixed
#define EARTH_R                 (6371004.0)
#define RELATIVE_LONGITUDE      (-1.460877)
#define RELATIVE_LATITUDE       (0.73824)

#define STEERING_RATIO          (16.0f)
#define WHEEL_DIAMETER          (0.673f)
#define VEHICLE_WEIGHT          (1800.0f)   //kg
#define L_WHEELS                (2.85f)     //m
#define L_RTK                   (1.0)
#define L_WEIGHT                (1.6)


// state of auto control 
#define AUTO_STATE_INVALID      (0)
#define AUTO_STATE_AVAILABLE    (1)
#define AUTO_STATE_AUTOCONTROL  (2)


// define gears
#define GEAR_NONE       (0)
#define GEAR_PARK       (1)
#define GEAR_REVERSE    (2)
#define GEAR_NEUTRAL    (3)
#define GEAR_DRIVE      (4)
#define GEAR_LOW        (5)


// define turn signal
#define ESTOP_NONE    (0)
#define ESTOP_LOW     (1)
#define ESTOP_MEDIUM  (2)
#define ESTOP_HIGH    (3)


// GPS
#define GPS_STATUS_NO_FIX       (-1)    //unable to fix position
#define GPS_STATUS_FIX          (0)     //unaugmented fix
#define GPS_STATUS_SBAS_FIX     (1)     //with satellite-based augmentation
#define GPS_STATUS_GBAS_FIX     (2)     //with ground-based augmentation

#define GPS_SERVICE_GPS         (1)
#define GPS_SERVICE_GLONASS     (2)
#define GPS_SERVICE_COMPASS     (4)      //includes BeiDou.
#define GPS_SERVICE_GALILEO     (8)



#define PI      (3.14159265)
#define PI_L    (3141592L)
#define TWOPI   (2.0 * PI)
#define HALFPI  (M_PI / 2.0)


#define SQR(x)              ((x) * (x))
#define CUBE(x)             ((x) * (x)* (x))
#define ABS(x)              (((x)>0)?(x):-1*(x))
#define MAX(x,y)            ((x) > (y) ? (x) : (y))
#define MIN(x,y)            ((x) > (y) ? (y) : (x))
#define SIGN(x)             (((x) > 0) - ((x) < 0)) 
#define POW_0(x)            (1.0)
#define POW_1(x)            (x)
#define POW_2(x)            ( (x)*(x) )




// vehicle state
class  VehState_S
{
public:
    double timestamp = 0;
    double x         = 0;
    double y         = 0;
    double z         = 0;
    double heading   = 0;
    double yawRate   = 0;
    double speed_x   = 0;
    double speed_y   = 0;
    double speed_z   = 0;
    double acc_x     = 0;
    double acc_y     = 0;
    double acc_z     = 0;

    bool   by_wire_enabled       = false;
    double wheelAngle            = 0; //not steering wheel, front wheel
    double steering_wheel_angle  = 0;
    double brake_pedal_output    = 0;
    double throttle_pedal_output = 0;
    int    gear_position         = 0;
    int    turn_signal           = 0;

    float  speed_limit           = MAX_SPEED;
    float  mileage               = 0.0f;

    double latitude  = 42.2995541 * M_PI / 180.0f;
    double longitude = -83.6975026 * M_PI / 180.0f;
    std::string RTK_state_string = "";
 
};


// path planning and decision results
class Plan_Rlt_S 
{
public:
    Plan_Rlt_S()
    {ini();};

    double timestamp = 0;

    int Estop    = ESTOP_NONE;
    int Go       = 0;
    int Signal   = 0;

    double vd     = 0.0f;
    double acc_d  = 0.0f;
    double acc_dd = 0.0f;
    double slope  = 0.0f;
    double vmax   = 0.0f;

    double ey     = 0.0f;
    double ephi   = 0.0f;
    double len    = 0.0f;
    double cr     = 0.0f;

    double x      = 0.0f;
    double y      = 0.0f;

    std::vector<float> crVector;
    std::vector<float> vdVector;
    std::vector<float> slopeVector;
    std::vector<float>  xVector;
    std::vector<float>  yVector;

    void ini()
    {
        Estop = 0;
        Go    = 0;
        vd    = 0.0f;
        cr    = 0.0f;
    }
};

 
// output control commands
class Control_Value_S
{
public:
    double timestamp    = 0;

    float brake         = 0.25;
    float throttle      = 0.0;
    float steering      = 0.0;
    int   gear          = GEAR_NONE;
    int   turn_signal   = 0;

    void ini()
    {
        brake    = 0.25;
        throttle = 0.0;
    }
};


#endif //SX_PUBLIC_H
