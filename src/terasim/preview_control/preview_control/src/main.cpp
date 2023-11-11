
/*
 *
 * Control Module
 * by Shaobing Xu
 * email: shaobxu@gmail.com
 * main.cpp
 *
 */


#include <iostream>
#include "globalDef.hpp"

#include <dlfcn.h>

#include <ros/ros.h>
#include <ros/package.h>


MOTIONCONTROL MC;
GUI_Set_S guiSet;


void ini()
{   
    
    MC.rosNode.ini(MC._rosnh, &MC.ssData);

    MC.pathFollow.ini(
        &MC.ssData.p2c,
        &MC.ssData.vs,
        &MC.ssData.ctrl, 
        guiSet.ros_gainfolder,
        guiSet.ros_max_ey,
        guiSet.ros_max_ephi);

   
    MC.speedCtrl.ini(
        &MC.ssData.p2c,
        &MC.ssData.vs,
        &MC.ssData.ctrl,
        guiSet.speed_ctrl_kp,
        guiSet.speed_ctrl_ki,
        FREQ
        );
    
}

 
void update()
{   
    
    //step 1: ini
    auto t0 = clock();
    MC.count+=1;

    //step 2: update ROS data
    ros::spinOnce();
    
    //step 3: check in path or not, and path tracking
    MC.pathFollow.run();

    // step 4: speed control
    MC.speedCtrl.run();

    // step 5: check stop/go
    if(MC.ssData.p2c.go == 0)
    {
        MC.speedCtrl.setStop();
        ROS_WARN_THROTTLE(5,"Decision go = 0, set stop");
    }

    
    // step 6: check recv state
    std::cout << ros::Time::now().toSec() - MC.ssData.p2c.timestamp<<std::endl;
    if (ros::Time::now().toSec() - MC.ssData.p2c.timestamp > 0.5)
    {
        MC.speedCtrl.setStop();
        ROS_WARN_THROTTLE(5,"NOT able to recv decision result, set stop");    
    }


    // step 7: publish commands
    MC.rosNode.publishCmd();

    //step 10: computing time
    auto t1 = clock();    
    ROS_INFO_THROTTLE(10, "Main loop %ld used %g CPU seconds",
        MC.count, (t1 - t0) / (double)CLOCKS_PER_SEC);

}


int main(int argc, char *argv[])
{
    //ros
    ros::init (argc, argv, "mkz_control");
    ros::NodeHandle nh;
    MC._rosnh = &nh;

    ros::NodeHandle priv_nh("~");
    priv_nh.getParam("gain_folder", guiSet.ros_gainfolder);
    priv_nh.getParam("max_ey", guiSet.ros_max_ey);
    priv_nh.getParam("max_ephi", guiSet.ros_max_ephi);

    priv_nh.getParam("speed_ctrl_kp", guiSet.speed_ctrl_kp);
    priv_nh.getParam("speed_ctrl_ki", guiSet.speed_ctrl_ki);


    printf("\n\n");
    printf("  getParam gain_folder              %s\n", guiSet.ros_gainfolder.data());
    printf("  getParam max_ey                   %f m\n", guiSet.ros_max_ey);
    printf("  getParam max_ephi                 %f degree\n", guiSet.ros_max_ephi);

    printf("  getParam speed_ctrl_kp            %f\n", guiSet.speed_ctrl_kp);
    printf("  getParam speed_ctrl_ki            %f\n", guiSet.speed_ctrl_ki);



    guiSet.ros_max_ephi = guiSet.ros_max_ephi * PI/180;

    //ini and run
    ini();
    ros::Rate loop_rate(50);
    while (ros::ok())
    {
        update();
        loop_rate.sleep();   
    }

    //exit
    ros::shutdown();
    ROS_WARN("mkz_control QUIT");
	return 0;
}