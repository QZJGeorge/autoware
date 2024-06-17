// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/Euler.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__EULER__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__EULER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_api_msgs/msg/detail/euler__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Euler & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Euler & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Euler & msg, bool use_flow_style = false)
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
  const tier4_api_msgs::msg::Euler & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_api_msgs::msg::Euler & msg)
{
  return tier4_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_api_msgs::msg::Euler>()
{
  return "tier4_api_msgs::msg::Euler";
}

template<>
inline const char * name<tier4_api_msgs::msg::Euler>()
{
  return "tier4_api_msgs/msg/Euler";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::Euler>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::Euler>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_api_msgs::msg::Euler>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__EULER__TRAITS_HPP_
