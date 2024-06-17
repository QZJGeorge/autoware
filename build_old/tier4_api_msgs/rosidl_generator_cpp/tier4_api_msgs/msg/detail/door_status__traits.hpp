// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/DoorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_api_msgs/msg/detail/door_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoorStatus & msg, bool use_flow_style = false)
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

}  // namespace tier4_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_api_msgs::msg::DoorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_api_msgs::msg::DoorStatus & msg)
{
  return tier4_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_api_msgs::msg::DoorStatus>()
{
  return "tier4_api_msgs::msg::DoorStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::DoorStatus>()
{
  return "tier4_api_msgs/msg/DoorStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::DoorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::DoorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_api_msgs::msg::DoorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__TRAITS_HPP_
