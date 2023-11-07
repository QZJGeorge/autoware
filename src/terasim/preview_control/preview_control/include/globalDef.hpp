
#ifndef GLOBALDEF_HPP
#define GLOBALDEF_HPP

#include <iostream>
#include <math.h>

#include "ros/ros.h"
#include "dataModel.hpp"
#include "speedControl.hpp"
#include "pathFollowing.hpp"
#include "rosNode.h"
#include "mcity_msg/PlanedPath2.h"


class MOTIONCONTROL
{

public:
    PathFollowing pathFollow;
    SpeedControl  speedCtrl;
    ROSNode       rosNode;
    ros::NodeHandle   * _rosnh = NULL;
    SYSTEM_DATA_S ssData;

    long count =0;
    
    //method
    MOTIONCONTROL() {};
};


#endif
