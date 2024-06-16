#ifndef MCITY_UW_AUTOWARE_PATH_UW_HPP_
#define MCITY_UW_AUTOWARE_PATH_UW_HPP_

#include <math.h>
#include <iostream>
#include <algorithm>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <mcity_msgs/msg/planned_path.hpp>
#include <mcity_msgs/msg/vehicle_state.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>

#include <RedisClient.h>
#include <nlohmann/json.hpp>

namespace autoware_path_uw
{

using namespace std;

using nlohmann::json;
using mcity_msgs::msg::PlannedPath;
using mcity_msgs::msg::VehicleState;
using autoware_auto_planning_msgs::msg::Trajectory;


class AutowarePathUW : public rclcpp::Node
{

public:
    explicit AutowarePathUW(const rclcpp::NodeOptions & options);
    ~AutowarePathUW() = default;

private:
    rclcpp::Publisher<PlannedPath>::SharedPtr pub_path;

    rclcpp::Subscription<Trajectory>::SharedPtr sub_trajectory;
    rclcpp::Subscription<VehicleState>::SharedPtr sub_veh_state;

    rclcpp::TimerBase::SharedPtr traj_timer_;

    PlannedPath path_msg;

    RedisClient redis_client;

    bool uw_control = false;
    
    double uw_spd;
    double uw_acc;
    double uw_time;

    double current_speed = 0.0;
    double recoreded_speed = 0.0;
    
    void init_path();
    void on_traj_timer();
    void trajectoryCB(const Trajectory::SharedPtr msg);
    void vehStateCB(const VehicleState::SharedPtr msg);
};

}

#endif


 