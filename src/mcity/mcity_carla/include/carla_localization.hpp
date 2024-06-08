#ifndef MCITY_TERASIM__CARLA_LOCALIZATION__HPP_
#define MCITY_TERASIM__CARLA_LOCALIZATION__HPP_

#include <cmath>
#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Geometry>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <std_msgs/msg/header.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>


namespace carla_localization
{
    
using namespace std;

using std_msgs::msg::Header;
using sensor_msgs::msg::Imu;
using nav_msgs::msg::Odometry;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using geometry_msgs::msg::TwistWithCovarianceStamped;


class CarlaLocalization : public rclcpp::Node
{
public:
  explicit CarlaLocalization(const rclcpp::NodeOptions & options);
  ~CarlaLocalization() = default;

private:
  rclcpp::Publisher<Imu>::SharedPtr pub_imu;
  rclcpp::Publisher<PoseWithCovarianceStamped>::SharedPtr pub_pose;
  rclcpp::Publisher<TwistWithCovarianceStamped>::SharedPtr pub_twist;

  rclcpp::Subscription<Odometry>::SharedPtr sub_odom;

  rclcpp::TimerBase::SharedPtr timer_;

  std::array<double, 36> Identity_Min_6 =
  {
    0.0000001, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0000001, 0.0, 0.0, 0.0, 0.0, 
    0.0, 0.0, 0.0000001, 0.0, 0.0, 0.0, 
    0.0, 0.0, 0.0, 0.0000001, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0000001, 0.0, 
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0000001
  };

  Header header;

  Imu imu_msg;
  Odometry odom_msg;
  PoseWithCovarianceStamped pose_with_cov_msg;
  TwistWithCovarianceStamped twist_with_cov_msg;
  
  void pub_localization();

  void quaternion_process(double qx, double qy, double qz, double qw, 
                          double* qx_new, double* qy_new, double* qz_new, double* qw_new);

  constexpr double deg2rad(double degrees);
  constexpr double rad2deg(double radians);

  void odom_callback(Odometry::SharedPtr msg);
};

}
#endif