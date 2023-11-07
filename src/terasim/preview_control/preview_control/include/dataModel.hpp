

#ifndef DATAMODEL_HPP
#define DATAMODEL_HPP

#include <iostream> 
#include <unistd.h>
#include <stdbool.h>

#include <SX.h>

#define FREQ    (50)


struct SYSTEM_DATA_S
{
    Plan_Rlt_S p2c;
    VehState_S vs;
    Control_Value_S ctrl;
};


//data models are for GUI
struct GUI_Set_S
{
    //vehicle 
    std::string ros_gainfolder = "";
    float ros_max_ey = 0.8;                     //m
    float ros_max_ephi = 45;                    //degree
    
    float speed_ctrl_kp = 1.0;
    float speed_ctrl_ki = 1.0;
};

extern GUI_Set_S guiSet;
 

#endif //DATAMODEL_HPP
