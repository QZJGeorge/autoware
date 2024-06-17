// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/PRCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/pr_ctrl_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PRCtrlCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: longitudinal_velocity
  {
    out << "longitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity, out);
    out << ", ";
  }

  // member: latitudinal_velocity
  {
    out << "latitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.latitudinal_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PRCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: longitudinal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity, out);
    out << "\n";
  }

  // member: latitudinal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.latitudinal_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PRCtrlCmd & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::PRCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::PRCtrlCmd & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::PRCtrlCmd>()
{
  return "morai_msgs::msg::PRCtrlCmd";
}

template<>
inline const char * name<morai_msgs::msg::PRCtrlCmd>()
{
  return "morai_msgs/msg/PRCtrlCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::PRCtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::PRCtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::PRCtrlCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__PR_CTRL_CMD__TRAITS_HPP_
