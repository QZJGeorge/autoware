// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_control_msgs/msg/detail/control_horizon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'controls'
#include "autoware_control_msgs/msg/detail/control__traits.hpp"

namespace autoware_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlHorizon & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: control_time
  {
    out << "control_time: ";
    to_flow_style_yaml(msg.control_time, out);
    out << ", ";
  }

  // member: time_step_ms
  {
    out << "time_step_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step_ms, out);
    out << ", ";
  }

  // member: controls
  {
    if (msg.controls.size() == 0) {
      out << "controls: []";
    } else {
      out << "controls: [";
      size_t pending_items = msg.controls.size();
      for (auto item : msg.controls) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlHorizon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: control_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_time:\n";
    to_block_style_yaml(msg.control_time, out, indentation + 2);
  }

  // member: time_step_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step_ms, out);
    out << "\n";
  }

  // member: controls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.controls.size() == 0) {
      out << "controls: []\n";
    } else {
      out << "controls:\n";
      for (auto item : msg.controls) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlHorizon & msg, bool use_flow_style = false)
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

}  // namespace autoware_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_control_msgs::msg::ControlHorizon & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_control_msgs::msg::ControlHorizon & msg)
{
  return autoware_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_control_msgs::msg::ControlHorizon>()
{
  return "autoware_control_msgs::msg::ControlHorizon";
}

template<>
inline const char * name<autoware_control_msgs::msg::ControlHorizon>()
{
  return "autoware_control_msgs/msg/ControlHorizon";
}

template<>
struct has_fixed_size<autoware_control_msgs::msg::ControlHorizon>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_control_msgs::msg::ControlHorizon>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_control_msgs::msg::ControlHorizon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_
