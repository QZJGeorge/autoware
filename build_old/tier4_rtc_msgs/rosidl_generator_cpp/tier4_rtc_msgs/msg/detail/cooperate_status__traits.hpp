// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__TRAITS_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_rtc_msgs/msg/detail/cooperate_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__traits.hpp"
// Member 'command_status'
#include "tier4_rtc_msgs/msg/detail/command__traits.hpp"

namespace tier4_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CooperateStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: uuid
  {
    out << "uuid: ";
    to_flow_style_yaml(msg.uuid, out);
    out << ", ";
  }

  // member: module
  {
    out << "module: ";
    to_flow_style_yaml(msg.module, out);
    out << ", ";
  }

  // member: safe
  {
    out << "safe: ";
    rosidl_generator_traits::value_to_yaml(msg.safe, out);
    out << ", ";
  }

  // member: command_status
  {
    out << "command_status: ";
    to_flow_style_yaml(msg.command_status, out);
    out << ", ";
  }

  // member: auto_mode
  {
    out << "auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mode, out);
    out << ", ";
  }

  // member: start_distance
  {
    out << "start_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.start_distance, out);
    out << ", ";
  }

  // member: finish_distance
  {
    out << "finish_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.finish_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CooperateStatus & msg,
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

  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid:\n";
    to_block_style_yaml(msg.uuid, out, indentation + 2);
  }

  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module:\n";
    to_block_style_yaml(msg.module, out, indentation + 2);
  }

  // member: safe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe: ";
    rosidl_generator_traits::value_to_yaml(msg.safe, out);
    out << "\n";
  }

  // member: command_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_status:\n";
    to_block_style_yaml(msg.command_status, out, indentation + 2);
  }

  // member: auto_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mode, out);
    out << "\n";
  }

  // member: start_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.start_distance, out);
    out << "\n";
  }

  // member: finish_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finish_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.finish_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CooperateStatus & msg, bool use_flow_style = false)
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

}  // namespace tier4_rtc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_rtc_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_rtc_msgs::msg::CooperateStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_rtc_msgs::msg::CooperateStatus & msg)
{
  return tier4_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_rtc_msgs::msg::CooperateStatus>()
{
  return "tier4_rtc_msgs::msg::CooperateStatus";
}

template<>
inline const char * name<tier4_rtc_msgs::msg::CooperateStatus>()
{
  return "tier4_rtc_msgs/msg/CooperateStatus";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::msg::CooperateStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<tier4_rtc_msgs::msg::Command>::value && has_fixed_size<tier4_rtc_msgs::msg::Module>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::msg::CooperateStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<tier4_rtc_msgs::msg::Command>::value && has_bounded_size<tier4_rtc_msgs::msg::Module>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tier4_rtc_msgs::msg::CooperateStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS__TRAITS_HPP_
