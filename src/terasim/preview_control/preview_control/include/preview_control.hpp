#ifndef PREVIEW_CONTROL_H
#define PREVIEW_CONTROL_H

#include <math.h>
#include <iostream>
#include <algorithm>
#include <sx.hpp>
#include <utm.hpp>
#include <data_model.hpp>
#include <path_follow.hpp>
#include <speed_control.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <mcity_msgs/msg/vehicle_state.hpp>
#include <mcity_msgs/msg/control.hpp>
#include <mcity_msgs/msg/sensor_check.hpp>
#include <mcity_msgs/msg/planed_path2.hpp>

namespace preview_control
{

using mcity_msgs::msg::VehicleState;
using mcity_msgs::msg::SensorCheck;
using mcity_msgs::msg::PlanedPath2;
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
    rclcpp::Subscription<PlanedPath2>::SharedPtr sub_path;
    rclcpp::Subscription<SensorCheck>::SharedPtr sub_sensor_check;

    rclcpp::TimerBase::SharedPtr timer_;

    long count = 0;

    Control cmd_msg;
    SensorCheck sensor_msg;

    GUI_Set_S guiSet;
    PathFollowing pathFollow;
    SpeedControl  speedCtrl;
    SYSTEM_DATA_S ssData;

    Plan_Rlt_S          * _p2c  = NULL;
    VehState_S          * _vs   = NULL;
    Control_Value_S     * _ctrl = NULL;
    
    void on_timer();
    void publishCmd();
    void vehStateCB(const VehicleState::SharedPtr msg);
    void pathCB(const PlanedPath2::SharedPtr msg);
    void sensorCheckCB(const SensorCheck::SharedPtr msg);
};

}

#endif


 