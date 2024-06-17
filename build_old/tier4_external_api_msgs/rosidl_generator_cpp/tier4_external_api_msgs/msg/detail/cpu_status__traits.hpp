// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_external_api_msgs/msg/detail/cpu_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_external_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CpuStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: total
  {
    out << "total: ";
    rosidl_generator_traits::value_to_yaml(msg.total, out);
    out << ", ";
  }

  // member: usr
  {
    out << "usr: ";
    rosidl_generator_traits::value_to_yaml(msg.usr, out);
    out << ", ";
  }

  // member: nice
  {
    out << "nice: ";
    rosidl_generator_traits::value_to_yaml(msg.nice, out);
    out << ", ";
  }

  // member: sys
  {
    out << "sys: ";
    rosidl_generator_traits::value_to_yaml(msg.sys, out);
    out << ", ";
  }

  // member: idle
  {
    out << "idle: ";
    rosidl_generator_traits::value_to_yaml(msg.idle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CpuStatus & msg,
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

  // member: total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total: ";
    rosidl_generator_traits::value_to_yaml(msg.total, out);
    out << "\n";
  }

  // member: usr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usr: ";
    rosidl_generator_traits::value_to_yaml(msg.usr, out);
    out << "\n";
  }

  // member: nice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nice: ";
    rosidl_generator_traits::value_to_yaml(msg.nice, out);
    out << "\n";
  }

  // member: sys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sys: ";
    rosidl_generator_traits::value_to_yaml(msg.sys, out);
    out << "\n";
  }

  // member: idle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idle: ";
    rosidl_generator_traits::value_to_yaml(msg.idle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CpuStatus & msg, bool use_flow_style = false)
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

}  // namespace tier4_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_external_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_external_api_msgs::msg::CpuStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_external_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_external_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_external_api_msgs::msg::CpuStatus & msg)
{
  return tier4_external_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_external_api_msgs::msg::CpuStatus>()
{
  return "tier4_external_api_msgs::msg::CpuStatus";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::CpuStatus>()
{
  return "tier4_external_api_msgs/msg/CpuStatus";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::CpuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::CpuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::msg::CpuStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_
