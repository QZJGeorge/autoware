#ifndef PREVIEW_PATH_HPP
#define PREVIEW_PATH_HPP

#include <math.h>
#include <iostream>
#include <algorithm>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <mcity_msgs/msg/planned_path.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory_point.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>

namespace preview_path
{

using namespace std;

using geometry_msgs::msg::PoseWithCovarianceStamped;
using geometry_msgs::msg::TwistWithCovarianceStamped;
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
    rclcpp::Subscription<TwistWithCovarianceStamped>::SharedPtr sub_twist;
    rclcpp::Subscription<PoseWithCovarianceStamped>::SharedPtr sub_pose;
    rclcpp::TimerBase::SharedPtr traj_timer_;
    rclcpp::TimerBase::SharedPtr veh_timer_;

    std::vector<double> x_vec;
    std::vector<double> y_vec;
    std::vector<double> speed_vec;
    std::vector<double> acc_vec;
    std::vector<double> heading_vec;
    std::vector<double> cur_vec;

    std::vector<double> x_vec_preview;
    std::vector<double> y_vec_preview;
    std::vector<double> speed_vec_preview;
    std::vector<double> acc_vec_preview;
    std::vector<double> heading_vec_preview;
    std::vector<double> cur_vec_preview;

    double delta_t;
    double max_vel;
    double max_curvature;
    double lookahead_time;

    PoseWithCovarianceStamped pose_msg;
    TwistWithCovarianceStamped twist_msg;
    PlannedPath path_msg;

    bool is_trajectory_received = false;
    bool is_twist_received = false;
    bool is_pose_received = false;
    
    void init_path();
    void on_traj_timer();
    void on_veh_timer();
    
    void trajectory_cutoff();

    void trajectory_callback(const Trajectory::SharedPtr msg);
    void twist_callback(const TwistWithCovarianceStamped::SharedPtr msg);
    void pose_callback(const PoseWithCovarianceStamped::SharedPtr msg);

    void compute_curvature();
    void downsampling();

    int get_closest_index(std::vector<double> x_vec, std::vector<double> y_vec);

    double compute_heading(double qx, double qy, double qz, double qw);

    double compute_heading_error(int closest_point_idx);
    double compute_lateral_error(int closest_point_idx);

};

}

#endif


 