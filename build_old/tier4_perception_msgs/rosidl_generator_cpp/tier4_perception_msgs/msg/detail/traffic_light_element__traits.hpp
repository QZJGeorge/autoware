// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/TrafficLightElement.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_perception_msgs/msg/detail/traffic_light_element__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tier4_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficLightElement & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: shape
  {
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficLightElement & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
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

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficLightElement & msg, bool use_flow_style = false)
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

}  // namespace tier4_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_perception_msgs::msg::TrafficLightElement & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_perception_msgs::msg::TrafficLightElement & msg)
{
  return tier4_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::TrafficLightElement>()
{
  return "tier4_perception_msgs::msg::TrafficLightElement";
}

template<>
inline const char * name<tier4_perception_msgs::msg::TrafficLightElement>()
{
  return "tier4_perception_msgs/msg/TrafficLightElement";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::TrafficLightElement>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::TrafficLightElement>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_perception_msgs::msg::TrafficLightElement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__TRAITS_HPP_
