// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_external_api_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_
#define AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_external_api_msgs/msg/detail/response_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_external_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResponseStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResponseStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResponseStatus & msg, bool use_flow_style = false)
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

}  // namespace autoware_external_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_external_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_external_api_msgs::msg::ResponseStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_external_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_external_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_external_api_msgs::msg::ResponseStatus & msg)
{
  return autoware_external_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_external_api_msgs::msg::ResponseStatus>()
{
  return "autoware_external_api_msgs::msg::ResponseStatus";
}

template<>
inline const char * name<autoware_external_api_msgs::msg::ResponseStatus>()
{
  return "autoware_external_api_msgs/msg/ResponseStatus";
}

template<>
struct has_fixed_size<autoware_external_api_msgs::msg::ResponseStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_external_api_msgs::msg::ResponseStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_external_api_msgs::msg::ResponseStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_
