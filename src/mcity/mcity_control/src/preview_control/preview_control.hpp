#ifndef PREVIEW_CONTROL_H
#define PREVIEW_CONTROL_H

#include <math.h>
#include <iostream>
#include <algorithm>
#include <sx.hpp>
#include <path_process.hpp>
#include <path_follow.hpp>
#include <speed_control.hpp>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <mcity_msgs/msg/control.hpp>
#include <mcity_msgs/msg/vehicle_state.hpp>
#include <mcity_msgs/msg/planned_path.hpp>

#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>


#define FREQ    (50)

namespace preview_control
{

using mcity_msgs::msg::VehicleState;
using mcity_msgs::msg::PlannedPath;
using mcity_msgs::msg::Control;

using geometry_msgs::msg::PoseWithCovarianceStamped;
using geometry_msgs::msg::TwistWithCovarianceStamped;

using namespace std;

class PreviewControl : public rclcpp::Node
{

public:
    explicit PreviewControl(const rclcpp::NodeOptions & options);
    ~PreviewControl() = default;

private:
    rclcpp::TimerBase::SharedPtr timer_;

    rclcpp::Publisher<Control>::SharedPtr pub_cmd2bywire;

    rclcpp::Subscription<PoseWithCovarianceStamped>::SharedPtr sub_pose;
    rclcpp::Subscription<VehicleState>::SharedPtr sub_veh_state;
    rclcpp::Subscription<PlannedPath>::SharedPtr sub_path;

    Control cmd_msg;

    //vehicle 
    string gainfolder = "";

    int trajectory_abort_size     = 0;
    int heading_lookahead_points  = 0;

    double max_ey                  = 0.0;
    double max_ephi                = 0.0; //rad
    double max_curvature           = 0.0;
    double speed_ctrl_kp           = 0.0;
    double speed_ctrl_ki           = 0.0;
    double heading_offset          = 0.0;
    double lateral_offset          = 0.0;
    double preview_time            = 0.0;
    double desired_time_resolution = 0.0;
    double velocity_smooth_threshold = 0.0;

    // GUI_Set_S guiSet;
    pathProcessing pathProcess;
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
    void custom_rules();
    void publishCmd();
    void publishReport();
    void pose_callback(const PoseWithCovarianceStamped::SharedPtr msg);
    void vehStateCB(const VehicleState::SharedPtr msg);
    void pathCB(const PlannedPath::SharedPtr msg);
};

}

#endif
 