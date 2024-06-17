// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/sync_mode_ctrl_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'command'
#include "morai_msgs/msg/detail/ctrl_cmd__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SyncModeCtrlCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
    out << ", ";
  }

  // member: sensor_capture
  {
    out << "sensor_capture: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_capture, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SyncModeCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }

  // member: sensor_capture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_capture: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_capture, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SyncModeCtrlCmd & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::SyncModeCtrlCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SyncModeCtrlCmd & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeCtrlCmd>()
{
  return "morai_msgs::msg::SyncModeCtrlCmd";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeCtrlCmd>()
{
  return "morai_msgs/msg/SyncModeCtrlCmd";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeCtrlCmd>
  : std::integral_constant<bool, has_fixed_size<morai_msgs::msg::CtrlCmd>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeCtrlCmd>
  : std::integral_constant<bool, has_bounded_size<morai_msgs::msg::CtrlCmd>::value> {};

template<>
struct is_message<morai_msgs::msg::SyncModeCtrlCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__TRAITS_HPP_
