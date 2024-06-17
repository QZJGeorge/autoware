// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/RosbagLoggingMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_external_api_msgs/msg/detail/rosbag_logging_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_external_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosbagLoggingMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_operation_mode
  {
    out << "is_operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.is_operation_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosbagLoggingMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_operation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_operation_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.is_operation_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosbagLoggingMode & msg, bool use_flow_style = false)
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

}  // namespace tier4_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_external_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_external_api_msgs::msg::RosbagLoggingMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_external_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_external_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_external_api_msgs::msg::RosbagLoggingMode & msg)
{
  return tier4_external_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::RosbagLoggingMode>()
{
  return "tier4_external_api_msgs::msg::RosbagLoggingMode";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::RosbagLoggingMode>()
{
  return "tier4_external_api_msgs/msg/RosbagLoggingMode";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::RosbagLoggingMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::RosbagLoggingMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::msg::RosbagLoggingMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__TRAITS_HPP_
