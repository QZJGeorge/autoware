// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_control_msgs:msg/GateMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__TRAITS_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_control_msgs/msg/detail/gate_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GateMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GateMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GateMode & msg, bool use_flow_style = false)
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

}  // namespace tier4_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_control_msgs::msg::GateMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_control_msgs::msg::GateMode & msg)
{
  return tier4_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_control_msgs::msg::GateMode>()
{
  return "tier4_control_msgs::msg::GateMode";
}

template<>
inline const char * name<tier4_control_msgs::msg::GateMode>()
{
  return "tier4_control_msgs/msg/GateMode";
}

template<>
struct has_fixed_size<tier4_control_msgs::msg::GateMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_control_msgs::msg::GateMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_control_msgs::msg::GateMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__TRAITS_HPP_
