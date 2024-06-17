// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__TRAITS_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'longitudinal_acceleration'
// Member 'longitudinal_jerk'
// Member 'lateral_acceleration'
// Member 'lateral_jerk'
// Member 'desired_steering_angle'
// Member 'controller_processing_time'
#include "control_performance_analysis/msg/detail/float_stamped__traits.hpp"

namespace control_performance_analysis
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrivingMonitorStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: longitudinal_acceleration
  {
    out << "longitudinal_acceleration: ";
    to_flow_style_yaml(msg.longitudinal_acceleration, out);
    out << ", ";
  }

  // member: longitudinal_jerk
  {
    out << "longitudinal_jerk: ";
    to_flow_style_yaml(msg.longitudinal_jerk, out);
    out << ", ";
  }

  // member: lateral_acceleration
  {
    out << "lateral_acceleration: ";
    to_flow_style_yaml(msg.lateral_acceleration, out);
    out << ", ";
  }

  // member: lateral_jerk
  {
    out << "lateral_jerk: ";
    to_flow_style_yaml(msg.lateral_jerk, out);
    out << ", ";
  }

  // member: desired_steering_angle
  {
    out << "desired_steering_angle: ";
    to_flow_style_yaml(msg.desired_steering_angle, out);
    out << ", ";
  }

  // member: controller_processing_time
  {
    out << "controller_processing_time: ";
    to_flow_style_yaml(msg.controller_processing_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivingMonitorStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: longitudinal_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_acceleration:\n";
    to_block_style_yaml(msg.longitudinal_acceleration, out, indentation + 2);
  }

  // member: longitudinal_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_jerk:\n";
    to_block_style_yaml(msg.longitudinal_jerk, out, indentation + 2);
  }

  // member: lateral_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_acceleration:\n";
    to_block_style_yaml(msg.lateral_acceleration, out, indentation + 2);
  }

  // member: lateral_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_jerk:\n";
    to_block_style_yaml(msg.lateral_jerk, out, indentation + 2);
  }

  // member: desired_steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_steering_angle:\n";
    to_block_style_yaml(msg.desired_steering_angle, out, indentation + 2);
  }

  // member: controller_processing_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_processing_time:\n";
    to_block_style_yaml(msg.controller_processing_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingMonitorStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace control_performance_analysis

namespace rosidl_generator_traits
{

[[deprecated("use control_performance_analysis::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_performance_analysis::msg::DrivingMonitorStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_performance_analysis::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_performance_analysis::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_performance_analysis::msg::DrivingMonitorStamped & msg)
{
  return control_performance_analysis::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_performance_analysis::msg::DrivingMonitorStamped>()
{
  return "control_performance_analysis::msg::DrivingMonitorStamped";
}

template<>
inline const char * name<control_performance_analysis::msg::DrivingMonitorStamped>()
{
  return "control_performance_analysis/msg/DrivingMonitorStamped";
}

template<>
struct has_fixed_size<control_performance_analysis::msg::DrivingMonitorStamped>
  : std::integral_constant<bool, has_fixed_size<control_performance_analysis::msg::FloatStamped>::value> {};

template<>
struct has_bounded_size<control_performance_analysis::msg::DrivingMonitorStamped>
  : std::integral_constant<bool, has_bounded_size<control_performance_analysis::msg::FloatStamped>::value> {};

template<>
struct is_message<control_performance_analysis::msg::DrivingMonitorStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__TRAITS_HPP_
