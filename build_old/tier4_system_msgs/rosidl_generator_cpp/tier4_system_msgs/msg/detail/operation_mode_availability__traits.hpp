// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/OperationModeAvailability.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_system_msgs/msg/detail/operation_mode_availability__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tier4_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OperationModeAvailability & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: stop
  {
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
    out << ", ";
  }

  // member: autonomous
  {
    out << "autonomous: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous, out);
    out << ", ";
  }

  // member: local
  {
    out << "local: ";
    rosidl_generator_traits::value_to_yaml(msg.local, out);
    out << ", ";
  }

  // member: remote
  {
    out << "remote: ";
    rosidl_generator_traits::value_to_yaml(msg.remote, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << ", ";
  }

  // member: comfortable_stop
  {
    out << "comfortable_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.comfortable_stop, out);
    out << ", ";
  }

  // member: pull_over
  {
    out << "pull_over: ";
    rosidl_generator_traits::value_to_yaml(msg.pull_over, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OperationModeAvailability & msg,
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

  // member: stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop: ";
    rosidl_generator_traits::value_to_yaml(msg.stop, out);
    out << "\n";
  }

  // member: autonomous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous, out);
    out << "\n";
  }

  // member: local
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local: ";
    rosidl_generator_traits::value_to_yaml(msg.local, out);
    out << "\n";
  }

  // member: remote
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote: ";
    rosidl_generator_traits::value_to_yaml(msg.remote, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: comfortable_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comfortable_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.comfortable_stop, out);
    out << "\n";
  }

  // member: pull_over
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pull_over: ";
    rosidl_generator_traits::value_to_yaml(msg.pull_over, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OperationModeAvailability & msg, bool use_flow_style = false)
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

}  // namespace tier4_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_system_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_system_msgs::msg::OperationModeAvailability & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_system_msgs::msg::OperationModeAvailability & msg)
{
  return tier4_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_system_msgs::msg::OperationModeAvailability>()
{
  return "tier4_system_msgs::msg::OperationModeAvailability";
}

template<>
inline const char * name<tier4_system_msgs::msg::OperationModeAvailability>()
{
  return "tier4_system_msgs/msg/OperationModeAvailability";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::OperationModeAvailability>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::OperationModeAvailability>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tier4_system_msgs::msg::OperationModeAvailability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__TRAITS_HPP_
