// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SyncModeInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/sync_mode_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SyncModeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: master_id
  {
    out << "master_id: ";
    rosidl_generator_traits::value_to_yaml(msg.master_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << ", ";
  }

  // member: can_send_tick
  {
    out << "can_send_tick: ";
    rosidl_generator_traits::value_to_yaml(msg.can_send_tick, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SyncModeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: master_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master_id: ";
    rosidl_generator_traits::value_to_yaml(msg.master_id, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
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

  // member: can_send_tick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_send_tick: ";
    rosidl_generator_traits::value_to_yaml(msg.can_send_tick, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SyncModeInfo & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::SyncModeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SyncModeInfo & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SyncModeInfo>()
{
  return "morai_msgs::msg::SyncModeInfo";
}

template<>
inline const char * name<morai_msgs::msg::SyncModeInfo>()
{
  return "morai_msgs/msg/SyncModeInfo";
}

template<>
struct has_fixed_size<morai_msgs::msg::SyncModeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SyncModeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SyncModeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_INFO__TRAITS_HPP_
