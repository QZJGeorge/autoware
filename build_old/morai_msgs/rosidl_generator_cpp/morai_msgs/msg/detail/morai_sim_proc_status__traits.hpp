// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/MoraiSimProcStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/morai_sim_proc_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'latest_command_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoraiSimProcStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: latest_command_time
  {
    out << "latest_command_time: ";
    to_flow_style_yaml(msg.latest_command_time, out);
    out << ", ";
  }

  // member: command_result
  {
    out << "command_result: ";
    rosidl_generator_traits::value_to_yaml(msg.command_result, out);
    out << ", ";
  }

  // member: current_mode
  {
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << ", ";
  }

  // member: current_status
  {
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoraiSimProcStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: latest_command_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_command_time:\n";
    to_block_style_yaml(msg.latest_command_time, out, indentation + 2);
  }

  // member: command_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_result: ";
    rosidl_generator_traits::value_to_yaml(msg.command_result, out);
    out << "\n";
  }

  // member: current_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << "\n";
  }

  // member: current_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoraiSimProcStatus & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::MoraiSimProcStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::MoraiSimProcStatus & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::MoraiSimProcStatus>()
{
  return "morai_msgs::msg::MoraiSimProcStatus";
}

template<>
inline const char * name<morai_msgs::msg::MoraiSimProcStatus>()
{
  return "morai_msgs/msg/MoraiSimProcStatus";
}

template<>
struct has_fixed_size<morai_msgs::msg::MoraiSimProcStatus>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::MoraiSimProcStatus>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::MoraiSimProcStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__TRAITS_HPP_
