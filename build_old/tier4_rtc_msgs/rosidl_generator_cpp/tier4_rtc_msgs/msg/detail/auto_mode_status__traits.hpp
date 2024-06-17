// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:msg/AutoModeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__TRAITS_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_rtc_msgs/msg/detail/auto_mode_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'module'
#include "tier4_rtc_msgs/msg/detail/module__traits.hpp"

namespace tier4_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AutoModeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: module
  {
    out << "module: ";
    to_flow_style_yaml(msg.module, out);
    out << ", ";
  }

  // member: is_auto_mode
  {
    out << "is_auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.is_auto_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutoModeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module:\n";
    to_block_style_yaml(msg.module, out, indentation + 2);
  }

  // member: is_auto_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_auto_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.is_auto_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutoModeStatus & msg, bool use_flow_style = false)
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
  const tier4_rtc_msgs::msg::AutoModeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_rtc_msgs::msg::AutoModeStatus & msg)
{
  return tier4_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_rtc_msgs::msg::AutoModeStatus>()
{
  return "tier4_rtc_msgs::msg::AutoModeStatus";
}

template<>
inline const char * name<tier4_rtc_msgs::msg::AutoModeStatus>()
{
  return "tier4_rtc_msgs/msg/AutoModeStatus";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::msg::AutoModeStatus>
  : std::integral_constant<bool, has_fixed_size<tier4_rtc_msgs::msg::Module>::value> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::msg::AutoModeStatus>
  : std::integral_constant<bool, has_bounded_size<tier4_rtc_msgs::msg::Module>::value> {};

template<>
struct is_message<tier4_rtc_msgs::msg::AutoModeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__AUTO_MODE_STATUS__TRAITS_HPP_
