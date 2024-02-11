#ifndef PREVIEW_PATH_HPP
#define PREVIEW_PATH_HPP

#include <math.h>
#include <iostream>
#include <algorithm>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <mcity_msgs/msg/planned_path.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>

namespace preview_path
{

using namespace std;

using mcity_msgs::msg::PlannedPath;
using autoware_auto_planning_msgs::msg::Trajectory;


class PreviewPath : public rclcpp::Node
{

public:
    explicit PreviewPath(const rclcpp::NodeOptions & options);
    ~PreviewPath() = default;

private:
    rclcpp::Publisher<PlannedPath>::SharedPtr pub_path;
    rclcpp::Subscription<Trajectory>::SharedPtr sub_trajectory;
    rclcpp::TimerBase::SharedPtr traj_timer_;

    PlannedPath path_msg;
    
    void init_path();
    void on_traj_timer();
    void trajectory_callback(const Trajectory::SharedPtr msg);
};

}

#endif


 