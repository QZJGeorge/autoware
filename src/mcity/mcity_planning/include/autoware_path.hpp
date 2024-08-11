#ifndef autoware_path_HPP
#define autoware_path_HPP

#include <math.h>
#include <iostream>
#include <algorithm>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <mcity_msgs/msg/planned_path.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>

#include <RedisClient.h>
#include <nlohmann/json.hpp>

namespace autoware_path
{

using namespace std;

using mcity_msgs::msg::PlannedPath;
using autoware_auto_planning_msgs::msg::Trajectory;


class AutowarePath : public rclcpp::Node
{

public:
    explicit AutowarePath(const rclcpp::NodeOptions & options);
    ~AutowarePath() = default;

private:
    rclcpp::Publisher<PlannedPath>::SharedPtr pub_path;
    rclcpp::Subscription<Trajectory>::SharedPtr sub_trajectory;
    rclcpp::TimerBase::SharedPtr traj_timer_;

    PlannedPath path_msg;

    RedisClient redis_client;
    
    void init_path();
    void on_traj_timer();
    void trajectory_callback(const Trajectory::SharedPtr msg);
};

}

#endif


 