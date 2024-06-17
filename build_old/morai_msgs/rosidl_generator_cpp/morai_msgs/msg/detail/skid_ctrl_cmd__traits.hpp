// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SkidCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/skid_ctrl_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'skid_model_ctrl'
#include "morai_msgs/msg/detail/skid_model__traits.hpp"
// Member 'velocity_ctrl'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkidCtrlCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_type
  {
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << ", ";
  }

  // member: skid_model_ctrl
  {
    out << "skid_model_ctrl: ";
    to_flow_style_yaml(msg.skid_model_ctrl, out);
    out << ", ";
  }

  // member: velocity_ctrl
  {
    out << "velocity_ctrl: ";
    to_flow_style_yaml(msg.velocity_ctrl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkidCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: skid_model_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skid_model_ctrl:\n";
    to_block_style_yaml(msg.skid_model_ctrl, out, indentation + 2);
  }

  // member: velocity_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ctrl:\n";
    to_block_style_yaml(msg.velocity_ctrl, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkidCtrlCmd & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::msg::SkidCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SkidCtrlCmd & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SkidCtrlCmd>()
{
  return "morai_msgs::msg::SkidCtrlCmd";
}

template<>
inline const char * name<morai_msgs::msg::SkidCtrlCmd>()
{
  return "morai_msgs/msg/SkidCtrlCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::SkidCtrlCmd>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<morai_msgs::msg::SkidModel>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::SkidCtrlCmd>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<morai_msgs::msg::SkidModel>::value> {};

template<>
struct is_message<morai_msgs::msg::SkidCtrlCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__TRAITS_HPP_
