// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_rtc_msgs:msg/CooperateStatusArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__TRAITS_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'statuses'
#include "tier4_rtc_msgs/msg/detail/cooperate_status__traits.hpp"

namespace tier4_rtc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CooperateStatusArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: statuses
  {
    if (msg.statuses.size() == 0) {
      out << "statuses: []";
    } else {
      out << "statuses: [";
      size_t pending_items = msg.statuses.size();
      for (auto item : msg.statuses) {
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
  const CooperateStatusArray & msg,
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

  // member: statuses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.statuses.size() == 0) {
      out << "statuses: []\n";
    } else {
      out << "statuses:\n";
      for (auto item : msg.statuses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CooperateStatusArray & msg, bool use_flow_style = false)
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
  const tier4_rtc_msgs::msg::CooperateStatusArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_rtc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_rtc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_rtc_msgs::msg::CooperateStatusArray & msg)
{
  return tier4_rtc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_rtc_msgs::msg::CooperateStatusArray>()
{
  return "tier4_rtc_msgs::msg::CooperateStatusArray";
}

template<>
inline const char * name<tier4_rtc_msgs::msg::CooperateStatusArray>()
{
  return "tier4_rtc_msgs/msg/CooperateStatusArray";
}

template<>
struct has_fixed_size<tier4_rtc_msgs::msg::CooperateStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_rtc_msgs::msg::CooperateStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_rtc_msgs::msg::CooperateStatusArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__COOPERATE_STATUS_ARRAY__TRAITS_HPP_
