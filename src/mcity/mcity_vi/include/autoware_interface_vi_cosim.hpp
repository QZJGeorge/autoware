#ifndef mcity_vi_AUTOWARE_INTERFACE_vi_cosim_HPP_
#define mcity_vi_AUTOWARE_INTERFACE_vi_cosim_HPP_

#include <iostream>
#include <chrono>
#include <thread>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <RedisClient.h>

#include <nav_msgs/msg/odometry.hpp>

#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>

#include <tier4_system_msgs/srv/change_operation_mode.hpp>
#include <tier4_system_msgs/srv/change_autoware_control.hpp>

#include <autoware_adapi_v1_msgs/srv/set_route_points.hpp>
#include <autoware_auto_system_msgs/msg/autoware_state.hpp>


namespace autoware_interface_vi_cosim
{

using namespace std;

using geometry_msgs::msg::Pose;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using tier4_system_msgs::srv::ChangeOperationMode;
using tier4_system_msgs::srv::ChangeAutowareControl;
using autoware_adapi_v1_msgs::srv::SetRoutePoints;
using autoware_auto_system_msgs::msg::AutowareState;

class AutowareInterfaceVICosim : public rclcpp::Node
{
public:
  explicit AutowareInterfaceVICosim(const rclcpp::NodeOptions & options);
  ~AutowareInterfaceVICosim() = default;

private:
  int autoware_state = 1;

  RedisClient redis_client;

  rclcpp::TimerBase::SharedPtr timer_;

  rclcpp::Publisher<PoseWithCovarianceStamped>::SharedPtr pub_local;
  rclcpp::Subscription<AutowareState>::SharedPtr sub_autoware_state;

  rclcpp::Client<SetRoutePoints>::SharedPtr cli_set_route_points;
  rclcpp::Client<ChangeOperationMode>::SharedPtr cli_set_operation_mode;
  rclcpp::Client<ChangeAutowareControl>::SharedPtr cli_set_autoware_control;

  void on_timer();

  void init_localization();

  void set_route_points();
  void set_operation_mode(uint8_t mode);
  void set_autoware_control(bool autoware_control);

  void autoware_state_callback(AutowareState::SharedPtr msg);
};

}

#endif