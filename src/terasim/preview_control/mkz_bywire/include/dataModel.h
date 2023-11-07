#ifndef DATAMODEL_H
#define DATAMODEL_H
 
#include <iostream>

#define FREQ    (50)

struct Set_S
{
    float max_speed 		= 2.0;
    float max_throttle 		= 0.2;
    float max_lat_acc 		= 0.2;

    float gps_angle_calib 	= 0;
    float correct_cg_x 		= 0;
    float correct_cg_y 		= 0;

    bool  output_xmsgs 		= true;
    bool  enable_safeguard 	= true;
};

extern Set_S adminSet;

#endif /*DATAMODEL_H*/
