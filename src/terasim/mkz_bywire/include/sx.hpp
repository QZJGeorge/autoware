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
#define estop_NONE    (0)
#define estop_LOW     (1)
#define estop_MEDIUM  (2)
#define estop_HIGH    (3)

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

#endif
