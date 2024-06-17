// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/GetTrafficLightStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/get_traffic_light_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetTrafficLightStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: traffic_light_index
  {
    out << "traffic_light_index: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_index, out);
    out << ", ";
  }

  // member: traffic_light_type
  {
    out << "traffic_light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_type, out);
    out << ", ";
  }

  // member: traffic_light_status
  {
    out << "traffic_light_status: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTrafficLightStatus & msg,
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

  // member: traffic_light_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_index: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_index, out);
    out << "\n";
  }

  // member: traffic_light_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_type, out);
    out << "\n";
  }

  // member: traffic_light_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_status: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTrafficLightStatus & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::GetTrafficLightStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::GetTrafficLightStatus & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::GetTrafficLightStatus>()
{
  return "morai_msgs::msg::GetTrafficLightStatus";
}

template<>
inline const char * name<morai_msgs::msg::GetTrafficLightStatus>()
{
  return "morai_msgs/msg/GetTrafficLightStatus";
}

template<>
struct has_fixed_size<morai_msgs::msg::GetTrafficLightStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::GetTrafficLightStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::GetTrafficLightStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__TRAITS_HPP_
