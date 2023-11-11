#ifndef SX_HPP
#define SX_HPP

#include <iostream> 
#include <math.h> 
#include <unistd.h>
#include <stdbool.h>
#include <vector>
#include <string>
#include <cstring>
#include <xmath.hpp>

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
#define L_rtk                   (1.0)
#define L_WEIGHT                (1.6)

//dsrc define
#define BSM_SENSOR_ID           913324
#define SPAT_SENSOR_ID          913325
#define LEAD_CV_ID              (1888888)

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
#define TURN_signal_NONE    (0)
#define TURN_signal_LEFT    (1)
#define TURN_signal_RIGHT   (2)

// define turn signal
#define etop_NONE    (0)
#define etop_LOW     (1)
#define etop_MEDIUM  (2)
#define etop_HIGH    (3)

// define turn direction
#define LeftTurning         1
#define RightTurning        2
#define StraightDriving     3

// define Lane change cmd
#define LC_CMD_INV          (0)
#define LC_CMD_LEFT         (+1)
#define LC_CMD_RIGHT        (-1)

// define traffic lights
#define REDLIGHT            1
#define GREENLIGHT          3
#define YELLOWLIGHT         4

// GPS
#define GPS_STATUS_NO_FIX       (-1)    //unable to fix position
#define GPS_STATUS_FIX          (0)     //unaugmented fix
#define GPS_STATUS_SBAS_FIX     (1)     //with satellite-based augmentation
#define GPS_STATUS_GBAS_FIX     (2)     //with ground-based augmentation

#define GPS_SERVICE_GPS         (1)
#define GPS_SERVICE_GLONASS     (2)
#define GPS_SERVICE_COMPASS     (4)      //includes BeiDou.
#define GPS_SERVICE_GALILEO     (8)

//define object type
#define OBJECT_TYPE_INVALID             0 //Object classification information is invalid.
#define OBJECT_TYPE_UNKNOWN             1 //Object classification information is unknown.
#define OBJECT_TYPE_NOT_AVAILABLE       2 //Classification information on the object is not available.
#define OBJECT_TYPE_UNCLASSIFIED        3 //Object is unclassified but seen.
#define OBJECT_TYPE_UNDECIDED_SMALL     4 //Object is classified as unknown small.
#define OBJECT_TYPE_UNDECIDED_BIG       5 //Object is classified as unknown big.
#define OBJECT_TYPE_BARRIER             6 //Object is classified as a barrier.
#define OBJECT_TYPE_PEDESTRIAN          7 //Object is classified as a pedestrian.
#define OBJECT_TYPE_BIKE                8 //Object is classified as a bike.
#define OBJECT_TYPE_CAR                 9 //Object is classified as a car.
#define OBJECT_TYPE_TRUCK               10 //Object is classified as a truck.
#define OBJECT_TYPE_TRAIN               11 //Object is classified as a train
#define OBJECT_TYPE_ROAD_CONSTRUCTION   12 //Object is classified as road construction
#define OBJECT_TYPE_RUN_RED_LIGHT       13 //Object is classified as car running red light

#define LANE_UNKNOWN        (0)
#define LANE_URBAN          (1)
#define LANE_HIGHWAY        (2)
#define LANE_RAMP_MERGE     (3)
#define LANE_RAMP_EXIT      (4)
#define LANE_MERGE_EXIT     (5)
#define LANE_ROUNDABOUT     (6)

namespace StateName
{
    inline std::string Turn_signal_name(int state)
    {
        switch(state)
        {
            case TURN_signal_LEFT:  return "L";
            case TURN_signal_RIGHT: return "R";
            default:                return "NONE";
        }
    }

    inline std::string Gear_name(int state)
    {
        switch(state)
        {
            case GEAR_PARK:     return "P";
            case GEAR_REVERSE:  return "R";
            case GEAR_NEUTRAL:  return "N";
            case GEAR_DRIVE:    return "D";
            case GEAR_LOW:      return "L";
            default:            return "NONE";
        }
    }
 
    inline std::string GPS_state_name(int state)
    {
        switch(state)
        {
            case GPS_STATUS_NO_FIX:     return "no fix";
            case GPS_STATUS_FIX:        return "unaugm.fix";
            case GPS_STATUS_SBAS_FIX:   return "satel. augm.";
            case GPS_STATUS_GBAS_FIX:   return "rtk";
            default:                return "wrong";
        }
    }

    inline std::string GPS_service_name(int service)
    {
        switch(service)
        {
            case GPS_STATUS_NO_FIX:     return "GPS";
            case GPS_STATUS_FIX:        return "GLONASS";
            case GPS_STATUS_SBAS_FIX:   return "COMPASS/BeiDou";
            case GPS_STATUS_GBAS_FIX:   return "GALILEO";
            default:                return "wrong";
        }
    }

}

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
    std::string rtk_state_string = "";

    bool approchTrafficLight = 0;

    int seg_previous  = 0; // previous current Seg lane
    int lane_previous = 0;
    int WP_previous   = 0;

    int seg_current   = 0; // current Seg lane
    int lane_current  = 0;
    int WP_current    = 0; 

    int seg_next      = 0; // next Seg lane
    int lane_next     = 0;
    int WP_next       = 0;

    int key_WP_npn    = -1;

    int seg_current_noConector   = 0; // current seg lane without considering connector
    int lane_current_noConector  = 0;

    int request_traffic_light = 0;

    bool approchDestination = false;
};

// path planning and decision results
class Plan_Rlt_S 
{
public:
    Plan_Rlt_S()
    {ini();};

    double timestamp = 0;

    int etop    = etop_NONE;
    int Go       = 0;
    int signal   = 0;

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

    std::vector<float> cr_vector;
    std::vector<float> vd_vector;
    std::vector<float> slope_vector;
    std::vector<float>  x_vector;
    std::vector<float>  y_vector;

    void ini()
    {
        etop = 0;
        Go    = 0;
        vd    = 0.0f;
        cr    = 0.0f;
    }

    //method
    void print()
    {
        printf("\n\n");
        printf("etop = %d Go=%d signal=%d\n", etop, Go, signal);
        printf("Vd = %f acc_d=%f slope=%f\n", vd, acc_d, slope);
        printf("ey = %f ephi=%f len=%f cr%f\n", ey, ephi, len, cr);
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
    int   turn_signal   = TURN_signal_NONE;

    void ini()
    {
        brake    = 0.25;
        throttle = 0.0;
    }

    //method
    void print()
    {
        printf("\n\nControl value:\n");
        printf("    brake:%f\n", brake);
        printf("    throttle:%f\n", throttle);
        printf("    steering:%f rad, %fdeg \n", steering, steering*(M_PI/180.0));
        
        switch(gear)
        {
            case GEAR_NONE      : printf("    gear:GEAR_NONE\n");break;
            case GEAR_PARK      : printf("    gear:GEAR_PARK\n");break;
            case GEAR_REVERSE   : printf("    gear:GEAR_REVERSE\n");break;
            case GEAR_NEUTRAL   : printf("    gear:GEAR_NEUTRAL\n");break;
            case GEAR_DRIVE     : printf("    gear:GEAR_DRIVE\n");break;
            case GEAR_LOW       : printf("    gear:GEAR_NONE\n");break;
            default             : printf("    gear:ERROR\n");break;
        }

        switch(turn_signal)
        {
            case TURN_signal_NONE   : printf("    turn_signal:NONE\n");break;
            case TURN_signal_LEFT   : printf("    turn_signal:LEFT\n");break;
            case TURN_signal_RIGHT  : printf("    turn_signal:RIGHT\n");break;
            default                 : printf("    turn_signal:ERROR\n");break;
        }
    }
};

struct Traffic_L
{    
    long            ID;
    unsigned short  signal_status[8];
    double          signal_remain_time[8];
};

class Gipps_S
{
public:
    float bn = -2.0;
    float tor = 1.0;
    float D = 5.0;
    float bf = -2.5;

    int direction = 1;

    float gipps_car_follow(float vn, float vf, float dist)
    {
        if (vf<0) direction = -1;
        float x1 = 2*(dist - D) - vn * tor -vf*vf/bf * direction;
        float x2 = bn*bn*tor*tor - bn*x1;
        float speed = 0;
        if (x2 >= 0)
            speed = bn*tor + sqrt(x2);

        return speed;
    }
};

struct Obstacle_S
{
    double timestamp    = 0;
    float id            = 0;
    float type          = 0;
    float size_x        = 0;
    float size_y        = 0;
    float size_z        = 0;

    float x_global      = 0;
    float y_global      = 0;
    float h_global      = 0;

    float x_local       = 0;
    float y_local       = 0;

    std::vector<std::vector<Rectangle>> path_vec;
};


struct Obj_Point_Xd_S
{
    float t = 0;
    float dist = 0;
    float x = 0;
    float y = 0;
    float h = 0;
    float v = 0;
};

struct Object_S
{
    double time     = 0;
    long ID         = 0;
    int type        = 0;
    int quality     = 0;

    bool considered = false;
    bool etop      = false;
    bool target     = false;

    bool yield = false;
    bool send_to_planning = false;

    float size_x            = 0.0f;
    float size_y            = 0.0f;
    float size_z            = 0.0f;

    float x_global          = 0.0f;
    float y_global          = 0.0f;
    float v_x_global        = 0.0f;
    float v_y_global        = 0.0f;
    float heading_global    = 0.0f;

    float x_local          = 0.0f;
    float y_local          = 0.0f;
    float v_x_local        = 0.0f;
    float v_y_local        = 0.0f;
    float acc_est          = 0.0f;
    float heading_local    = 0.0f;

    float beta             = 0.0f;
    float headingGap       = 0.0f;
    
    float distInPath       = 0.0f;
    float distToPath       = 0.0f;
    float headingToPath    = 0.0f;
    float distToPathSign   = 0.0f;

    float distToVeh        = 0.0f;
    float ttc              = 0.0f;
    long  npn              = 0;

    //projection on map
    int   onLaneOrConnect  = -1; //1:LANE 2: Connect
    int   wpID             = -1; //wp ID
    int   exit_ID          = -1; //ID of the exit

    //predict path
    std::vector< std::vector<Obj_Point_Xd_S> > path_vec;
};

struct MiniPoint_S
{
    //reference path
    float x = 0;
    float y = 0;
    float heading = 0;
    float cr = 0;
    float distance = 0;

    //drivable area
    float left_width = 0;
    float right_width = 0;
};

struct PlanningEnv_S
{
    double timestamp = 0;

    //five parts
    int   etop = 0;
    bool  Go = false;
    int   signal = 0;


    //part 1 -- vehicle state
    float x = 0;
    float y = 0;
    float heading = 0;
    float speed_x = 0;
    float acc_x = 0;
    float yaw_rate = 0;
    float ego_lane_width = 0;
    int ego_lane_type = 0;


    //part 2 -- targets
    float tf = 0;
    float yf = 0;
    float xf = 0;
    float xf_d = 0;
    float xf_dd = 0;

    float tf_min = 0;
    float yf_min = 0;
    float xf_min = 0;

    float tf_max = 0;
    float yf_max = 0;
    float xf_max = 0;

    float vd_yield = 0;
    float ad_yield = 0;


    //part 2 -- obstacles
    std::vector<Obstacle_S> obstacle_vec;

    //part 3 -- lane center and drivable area
    long npn = 0;
    std::vector<MiniPoint_S> refpath_vec;
};

#endif
