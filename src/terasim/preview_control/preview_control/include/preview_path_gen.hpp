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

    std::vector<float> x_vec;
    std::vector<float> y_vec;
    std::vector<float> cur_vec;
    std::vector<float> speed_vec;
    std::vector<float> time_vec;

    PoseWithCovarianceStamped pose_msg;
    TwistWithCovarianceStamped twist_msg;
    PlannedPath path_msg;

    bool is_trajectory_received = false;
    bool is_twist_received = false;
    bool is_pose_received = false;
    
    void on_traj_timer();
    void on_veh_timer();

    void trajectory_callback(const Trajectory::SharedPtr msg);
    void twist_callback(const TwistWithCovarianceStamped::SharedPtr msg);
    void pose_callback(const PoseWithCovarianceStamped::SharedPtr msg);

    void compute_curvature();
    void compute_time();
    void compute_lateral_and_heading_error(int closest_point_idx);
    void compute_desired_speed_and_acceleration(int closest_point_idx);
    void compute_speed();
    void path_cutoff();

    void upsampling();
    void downsampling();

    int get_closest_index();
    float compute_heading();
    
    std::vector<float> interpolateVec(const std::vector<float>& original_vec);
};

}

#endif


 