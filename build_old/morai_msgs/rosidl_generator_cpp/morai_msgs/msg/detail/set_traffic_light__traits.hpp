// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/SetTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/set_traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetTrafficLight & msg,
  std::ostream & out)
{
  out << "{";
  // member: traffic_light_index
  {
    out << "traffic_light_index: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_index, out);
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
  const SetTrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: traffic_light_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_index: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_index, out);
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

inline std::string to_yaml(const SetTrafficLight & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::SetTrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::SetTrafficLight & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::SetTrafficLight>()
{
  return "morai_msgs::msg::SetTrafficLight";
}

template<>
inline const char * name<morai_msgs::msg::SetTrafficLight>()
{
  return "morai_msgs/msg/SetTrafficLight";
}

template<>
struct has_fixed_size<morai_msgs::msg::SetTrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::SetTrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::SetTrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__TRAITS_HPP_
