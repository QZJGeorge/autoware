// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__BUILDER_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_performance_analysis
{

namespace msg
{

namespace builder
{

class Init_DrivingMonitorStamped_controller_processing_time
{
public:
  explicit Init_DrivingMonitorStamped_controller_processing_time(::control_performance_analysis::msg::DrivingMonitorStamped & msg)
  : msg_(msg)
  {}
  ::control_performance_analysis::msg::DrivingMonitorStamped controller_processing_time(::control_performance_analysis::msg::DrivingMonitorStamped::_controller_processing_time_type arg)
  {
    msg_.controller_processing_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_performance_analysis::msg::DrivingMonitorStamped msg_;
};

class Init_DrivingMonitorStamped_desired_steering_angle
{
public:
  explicit Init_DrivingMonitorStamped_desired_steering_angle(::control_performance_analysis::msg::DrivingMonitorStamped & msg)
  : msg_(msg)
  {}
  Init_DrivingMonitorStamped_controller_processing_time desired_steering_angle(::control_performance_analysis::msg::DrivingMonitorStamped::_desired_steering_angle_type arg)
  {
    msg_.desired_steering_angle = std::move(arg);
    return Init_DrivingMonitorStamped_controller_processing_time(msg_);
  }

private:
  ::control_performance_analysis::msg::DrivingMonitorStamped msg_;
};

class Init_DrivingMonitorStamped_lateral_jerk
{
public:
  explicit Init_DrivingMonitorStamped_lateral_jerk(::control_performance_analysis::msg::DrivingMonitorStamped & msg)
  : msg_(msg)
  {}
  Init_DrivingMonitorStamped_desired_steering_angle lateral_jerk(::control_performance_analysis::msg::DrivingMonitorStamped::_lateral_jerk_type arg)
  {
    msg_.lateral_jerk = std::move(arg);
    return Init_DrivingMonitorStamped_desired_steering_angle(msg_);
  }

private:
  ::control_performance_analysis::msg::DrivingMonitorStamped msg_;
};

class Init_DrivingMonitorStamped_lateral_acceleration
{
public:
  explicit Init_DrivingMonitorStamped_lateral_acceleration(::control_performance_analysis::msg::DrivingMonitorStamped & msg)
  : msg_(msg)
  {}
  Init_DrivingMonitorStamped_lateral_jerk lateral_acceleration(::control_performance_analysis::msg::DrivingMonitorStamped::_lateral_acceleration_type arg)
  {
    msg_.lateral_acceleration = std::move(arg);
    return Init_DrivingMonitorStamped_lateral_jerk(msg_);
  }

private:
  ::control_performance_analysis::msg::DrivingMonitorStamped msg_;
};

class Init_DrivingMonitorStamped_longitudinal_jerk
{
public:
  explicit Init_DrivingMonitorStamped_longitudinal_jerk(::control_performance_analysis::msg::DrivingMonitorStamped & msg)
  : msg_(msg)
  {}
  Init_DrivingMonitorStamped_lateral_acceleration longitudinal_jerk(::control_performance_analysis::msg::DrivingMonitorStamped::_longitudinal_jerk_type arg)
  {
    msg_.longitudinal_jerk = std::move(arg);
    return Init_DrivingMonitorStamped_lateral_acceleration(msg_);
  }

private:
  ::control_performance_analysis::msg::DrivingMonitorStamped msg_;
};

class Init_DrivingMonitorStamped_longitudinal_acceleration
{
public:
  Init_DrivingMonitorStamped_longitudinal_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingMonitorStamped_longitudinal_jerk longitudinal_acceleration(::control_performance_analysis::msg::DrivingMonitorStamped::_longitudinal_acceleration_type arg)
  {
    msg_.longitudinal_acceleration = std::move(arg);
    return Init_DrivingMonitorStamped_longitudinal_jerk(msg_);
  }

private:
  ::control_performance_analysis::msg::DrivingMonitorStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_performance_analysis::msg::DrivingMonitorStamped>()
{
  return control_performance_analysis::msg::builder::Init_DrivingMonitorStamped_longitudinal_acceleration();
}

}  // namespace control_performance_analysis

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__BUILDER_HPP_
