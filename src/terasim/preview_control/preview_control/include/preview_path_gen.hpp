#ifndef PREVIEW_PATH_GEN_HPP
#define PREVIEW_PATH_GEN_HPP

#include <math.h>
#include <iostream>
#include <algorithm>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <mcity_msgs/msg/planned_path.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>

namespace preview_path_gen
{

using namespace std;

using geometry_msgs::msg::PoseWithCovarianceStamped;
using geometry_msgs::msg::TwistWithCovarianceStamped;
using mcity_msgs::msg::PlannedPath;
using autoware_auto_planning_msgs::msg::Trajectory;

class PreviewPathGen : public rclcpp::Node
{

public:
    explicit PreviewPathGen(const rclcpp::NodeOptions & options);
    ~PreviewPathGen() = default;

private:
    rclcpp::Publisher<PlannedPath>::SharedPtr pub_path;
    rclcpp::Subscription<Trajectory>::SharedPtr sub_trajectory;
    rclcpp::Subscription<TwistWithCovarianceStamped>::SharedPtr sub_twist;
    rclcpp::Subscription<PoseWithCovarianceStamped>::SharedPtr sub_pose;
    rclcpp::TimerBase::SharedPtr traj_timer_;
    rclcpp::TimerBase::SharedPtr veh_timer_;

    std::vector<double> x_vec;
    std::vector<double> y_vec;
    std::vector<double> cur_vec;
    std::vector<double> speed_vec;
    std::vector<double> time_vec;

    std::vector<double> x_vec_processed;
    std::vector<double> y_vec_processed;
    std::vector<double> cur_vec_processed;
    std::vector<double> speed_vec_processed;

    double delta_t;
    double max_acc;
    double max_vel;
    double min_speed;
    double max_curvature;
    double curve_slow_factor;
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

    void trajectory_callback(const Trajectory::SharedPtr msg);
    void twist_callback(const TwistWithCovarianceStamped::SharedPtr msg);
    void pose_callback(const PoseWithCovarianceStamped::SharedPtr msg);

    void compute_curvature();
    void compute_time();
    void compute_lateral_and_heading_error(int closest_point_idx);
    void compute_desired_speed_and_acceleration();
    void compute_speed();
    void path_cutoff();

    void upsampling();
    void downsampling();

    int get_closest_index();
    double compute_heading();

    std::vector<double> interpolateVec(const std::vector<double>& original_vec);
};

}

#endif


 