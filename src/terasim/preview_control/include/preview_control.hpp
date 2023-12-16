#ifndef PREVIEW_CONTROL_H
#define PREVIEW_CONTROL_H

#include <math.h>
#include <iostream>
#include <algorithm>
#include <sx.hpp>
#include <path_follow.hpp>
#include <speed_control.hpp>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <mcity_msgs/msg/control.hpp>
#include <mcity_msgs/msg/vehicle_state.hpp>
#include <mcity_msgs/msg/planned_path.hpp>


#define FREQ    (50)

namespace preview_control
{

using mcity_msgs::msg::VehicleState;
using mcity_msgs::msg::PlannedPath;
using mcity_msgs::msg::Control;

using namespace std;

class PreviewControl : public rclcpp::Node
{

public:
    explicit PreviewControl(const rclcpp::NodeOptions & options);
    ~PreviewControl() = default;

private:
    rclcpp::Publisher<Control>::SharedPtr pub_cmd2bywire;
    rclcpp::Subscription<VehicleState>::SharedPtr sub_veh_state;
    rclcpp::Subscription<PlannedPath>::SharedPtr sub_path;
    rclcpp::TimerBase::SharedPtr timer_;

    long count = 0;
    Control cmd_msg;

    //vehicle 
    string gainfolder = "";
    float max_ey = 0.8;  //m
    float max_ephi = 45 * PI/180; //radian
    float speed_ctrl_kp = 1.0;
    float speed_ctrl_ki = 1.0;

    // GUI_Set_S guiSet;
    PathFollowing pathFollow;
    SpeedControl  speedCtrl;

    Plan_Rlt_S          * _p2c  = NULL;
    VehState_S          * _vs   = NULL;
    Control_Value_S     * _ctrl = NULL;

    Plan_Rlt_S p2c;
    VehState_S vs;
    Control_Value_S ctrl;
    
    void init();
    void on_timer();
    void publishCmd();
    void vehStateCB(const VehicleState::SharedPtr msg);
    void pathCB(const PlannedPath::SharedPtr msg);
};

}

#endif


 