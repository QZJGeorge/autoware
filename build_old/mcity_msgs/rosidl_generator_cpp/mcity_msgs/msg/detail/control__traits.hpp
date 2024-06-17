// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mcity_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define MCITY_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mcity_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mcity_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Control & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: brake_cmd
  {
    out << "brake_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd, out);
    out << ", ";
  }

  // member: throttle_cmd
  {
    out << "throttle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd, out);
    out << ", ";
  }

  // member: steering_cmd
  {
    out << "steering_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_cmd, out);
    out << ", ";
  }

  // member: gear_cmd
  {
    out << "gear_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_cmd, out);
    out << ", ";
  }

  // member: turn_signal_cmd
  {
    out << "turn_signal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: brake_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_cmd, out);
    out << "\n";
  }

  // member: throttle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_cmd, out);
    out << "\n";
  }

  // member: steering_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_cmd, out);
    out << "\n";
  }

  // member: gear_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_cmd, out);
    out << "\n";
  }

  // member: turn_signal_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_signal_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Control & msg, bool use_flow_style = false)
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

}  // namespace mcity_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mcity_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mcity_msgs::msg::Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  mcity_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mcity_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mcity_msgs::msg::Control & msg)
{
  return mcity_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mcity_msgs::msg::Control>()
{
  return "mcity_msgs::msg::Control";
}

template<>
inline const char * name<mcity_msgs::msg::Control>()
{
  return "mcity_msgs/msg/Control";
}

template<>
struct has_fixed_size<mcity_msgs::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mcity_msgs::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mcity_msgs::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MCITY_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
