// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeSetGear.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SET_GEAR__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SET_GEAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/sync_mode_set_gear__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SyncModeSetGear & msg,
  std::ostream & out)
{
  out << "{";
  // member: gear
  {
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SyncModeSetGear & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear: ";
    rosidl_generator_traits::value_to_yaml(msg.gear, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SyncModeSetGear & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::SyncModeSetGear & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SyncModeSetGear & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeSetGear>()
{
  return "morai_msgs::msg::SyncModeSetGear";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeSetGear>()
{
  return "morai_msgs/msg/SyncModeSetGear";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeSetGear>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeSetGear>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<morai_msgs::msg::SyncModeSetGear>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SET_GEAR__TRAITS_HPP_
