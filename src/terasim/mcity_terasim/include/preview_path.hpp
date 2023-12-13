#ifndef PREVIEW_PATH_HPP
#define PREVIEW_PATH_HPP

#include <math.h>
#include <iostream>
#include <algorithm>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <mcity_msgs/msg/planned_path.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>
#include <autoware_auto_planning_msgs/msg/trajectory_point.hpp>

#include <mcity_msgs/msg/vehicle_state.hpp>

namespace preview_path
{

using namespace std;

using nav_msgs::msg::Odometry;
using mcity_msgs::msg::PlannedPath;
using mcity_msgs::msg::VehicleState;
using autoware_auto_planning_msgs::msg::Trajectory;


class PreviewPath : public rclcpp::Node
{

public:
    explicit PreviewPath(const rclcpp::NodeOptions & options);
    ~PreviewPath() = default;

private:
    rclcpp::Publisher<PlannedPath>::SharedPtr pub_path;

    rclcpp::Subscription<Trajectory>::SharedPtr sub_trajectory;
    rclcpp::Subscription<Odometry>::SharedPtr sub_odom;
    rclcpp::Subscription<VehicleState>::SharedPtr sub_veh_state;

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

    Odometry odom_msg;
    PlannedPath path_msg;

    bool is_trajectory_received = false;
    bool is_odom_received = false;
    
    void init_path();
    void on_traj_timer();
    void on_veh_timer();
    
    void trajectory_cutoff();

    void trajectory_callback(const Trajectory::SharedPtr msg);
    void odom_callback(const Odometry::SharedPtr msg);

    void compute_curvature();
    void downsampling();

    int get_closest_index(std::vector<double> x_vec, std::vector<double> y_vec);

    double compute_heading(double qx, double qy, double qz, double qw);

    double compute_heading_error(int closest_point_idx);
    double compute_lateral_error(int closest_point_idx);

    void vehStateCB(const VehicleState::SharedPtr msg);

    double findRadius(double x1, double y1, double x2, double y2, double x3, double y3);

    void adjust_speed();
};

}

#endif


 