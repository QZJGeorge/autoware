// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficLight & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: light
  {
    out << "light: ";
    rosidl_generator_traits::value_to_yaml(msg.light, out);
    out << ", ";
  }

  // member: num_of_light
  {
    out << "num_of_light: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_light, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficLight & msg,
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

  // member: light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light: ";
    rosidl_generator_traits::value_to_yaml(msg.light, out);
    out << "\n";
  }

  // member: num_of_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_light: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_light, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficLight & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::TrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::TrafficLight & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::TrafficLight>()
{
  return "morai_msgs::msg::TrafficLight";
}

template<>
inline const char * name<morai_msgs::msg::TrafficLight>()
{
  return "morai_msgs/msg/TrafficLight";
}

template<>
struct has_fixed_size<morai_msgs::msg::TrafficLight>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<morai_msgs::msg::TrafficLight>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<morai_msgs::msg::TrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
