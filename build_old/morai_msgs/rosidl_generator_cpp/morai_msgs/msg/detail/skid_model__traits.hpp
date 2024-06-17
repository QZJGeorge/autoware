// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_MODEL__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/skid_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rpm'
#include "morai_msgs/msg/detail/wheel_rpm__traits.hpp"
// Member 'torque'
#include "morai_msgs/msg/detail/wheel_torque__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SkidModel & msg,
  std::ostream & out)
{
  out << "{";
  // member: rpm
  {
    out << "rpm: ";
    to_flow_style_yaml(msg.rpm, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    to_flow_style_yaml(msg.torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SkidModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm:\n";
    to_block_style_yaml(msg.rpm, out, indentation + 2);
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque:\n";
    to_block_style_yaml(msg.torque, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SkidModel & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::SkidModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SkidModel & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SkidModel>()
{
  return "morai_msgs::msg::SkidModel";
}

template<>
inline const char * name<morai_msgs::msg::SkidModel>()
{
  return "morai_msgs/msg/SkidModel";
}

template<>
struct has_fixed_size<morai_msgs::msg::SkidModel>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::WheelRpm>::value && has_fixed_size<morai_msgs::msg::WheelTorque>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::SkidModel>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::WheelRpm>::value && has_bounded_size<morai_msgs::msg::WheelTorque>::value> {};

template<>
struct is_message<morai_msgs::msg::SkidModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_MODEL__TRAITS_HPP_
