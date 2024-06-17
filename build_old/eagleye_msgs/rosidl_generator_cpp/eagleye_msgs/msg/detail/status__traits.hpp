// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eagleye_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eagleye_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eagleye_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: enabled_status
  {
    out << "enabled_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled_status, out);
    out << ", ";
  }

  // member: estimate_status
  {
    out << "estimate_status: ";
    rosidl_generator_traits::value_to_yaml(msg.estimate_status, out);
    out << ", ";
  }

  // member: is_abnormal
  {
    out << "is_abnormal: ";
    rosidl_generator_traits::value_to_yaml(msg.is_abnormal, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled_status, out);
    out << "\n";
  }

  // member: estimate_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimate_status: ";
    rosidl_generator_traits::value_to_yaml(msg.estimate_status, out);
    out << "\n";
  }

  // member: is_abnormal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_abnormal: ";
    rosidl_generator_traits::value_to_yaml(msg.is_abnormal, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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

}  // namespace eagleye_msgs

namespace rosidl_generator_traits
{

[[deprecated("use eagleye_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eagleye_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  eagleye_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eagleye_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eagleye_msgs::msg::Status & msg)
{
  return eagleye_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eagleye_msgs::msg::Status>()
{
  return "eagleye_msgs::msg::Status";
}

template<>
inline const char * name<eagleye_msgs::msg::Status>()
{
  return "eagleye_msgs/msg/Status";
}

template<>
struct has_fixed_size<eagleye_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eagleye_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eagleye_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EAGLEYE_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
