// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignalElement.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__TRAITS_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_perception_msgs/msg/detail/traffic_signal_element__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignalElement & msg,
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
  const TrafficSignalElement & msg,
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

inline std::string to_yaml(const TrafficSignalElement & msg, bool use_flow_style = false)
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

}  // namespace autoware_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_perception_msgs::msg::TrafficSignalElement & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_perception_msgs::msg::TrafficSignalElement & msg)
{
  return autoware_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_perception_msgs::msg::TrafficSignalElement>()
{
  return "autoware_perception_msgs::msg::TrafficSignalElement";
}

template<>
inline const char * name<autoware_perception_msgs::msg::TrafficSignalElement>()
{
  return "autoware_perception_msgs/msg/TrafficSignalElement";
}

template<>
struct has_fixed_size<autoware_perception_msgs::msg::TrafficSignalElement>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_perception_msgs::msg::TrafficSignalElement>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_perception_msgs::msg::TrafficSignalElement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__TRAITS_HPP_
