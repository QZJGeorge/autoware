#ifndef PREVIEW_PATH_HPP
#define PREVIEW_PATH_HPP

#include <math.h>
#include <iostream>
#include <algorithm>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <mcity_msgs/msg/planned_path.hpp>
#include <mcity_msgs/msg/vehicle_state.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>

namespace preview_path
{

using namespace std;

using mcity_msgs::msg::PlannedPath;
using mcity_msgs::msg::VehicleState;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using geometry_msgs::msg::TwistWithCovarianceStamped;
using autoware_auto_planning_msgs::msg::Trajectory;


class PreviewPath : public rclcpp::Node
{

public:
    explicit PreviewPath(const rclcpp::NodeOptions & options);
    ~PreviewPath() = default;

private:
    rclcpp::Publisher<PlannedPath>::SharedPtr pub_path;

    rclcpp::Subscription<PoseWithCovarianceStamped>::SharedPtr sub_pose;
    rclcpp::Subscription<TwistWithCovarianceStamped>::SharedPtr sub_twist;
    rclcpp::Subscription<VehicleState>::SharedPtr sub_veh_state;
    rclcpp::Subscription<Trajectory>::SharedPtr sub_trajectory;

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
    double curvature_bound;
    double lookahead_time;
    double heading_offset;

    float steering_wheel_angle_cmd;

    bool is_trajectory_received = false;

    PlannedPath path_msg;
    PoseWithCovarianceStamped pose_msg;
    TwistWithCovarianceStamped twist_msg;
    
    void init_path();
    void on_traj_timer();
    void on_veh_timer();

    void pose_callback(const PoseWithCovarianceStamped::SharedPtr msg);
    void twist_callback(const TwistWithCovarianceStamped::SharedPtr msg);
    void vehStateCB(const VehicleState::SharedPtr msg);
    void trajectory_callback(const Trajectory::SharedPtr msg);

    void trajectory_cutoff();
    void compute_curvature();
    void adjust_speed();
    void downsampling();

    int get_closest_index(std::vector<double> x_vec, std::vector<double> y_vec);

    double compute_heading(double qx, double qy, double qz, double qw);
    double compute_heading_error(int closest_point_idx);
    double compute_lateral_error(int closest_point_idx);

    double findRadius(double x1, double y1, double x2, double y2, double x3, double y3);
};

}

#endif


 