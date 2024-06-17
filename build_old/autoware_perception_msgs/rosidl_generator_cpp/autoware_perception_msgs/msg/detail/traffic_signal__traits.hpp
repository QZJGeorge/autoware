// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__TRAITS_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_perception_msgs/msg/detail/traffic_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'elements'
#include "autoware_perception_msgs/msg/detail/traffic_signal_element__traits.hpp"

namespace autoware_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: traffic_signal_id
  {
    out << "traffic_signal_id: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_signal_id, out);
    out << ", ";
  }

  // member: elements
  {
    if (msg.elements.size() == 0) {
      out << "elements: []";
    } else {
      out << "elements: [";
      size_t pending_items = msg.elements.size();
      for (auto item : msg.elements) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: traffic_signal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_signal_id: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_signal_id, out);
    out << "\n";
  }

  // member: elements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elements.size() == 0) {
      out << "elements: []\n";
    } else {
      out << "elements:\n";
      for (auto item : msg.elements) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSignal & msg, bool use_flow_style = false)
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
  const autoware_perception_msgs::msg::TrafficSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_perception_msgs::msg::TrafficSignal & msg)
{
  return autoware_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_perception_msgs::msg::TrafficSignal>()
{
  return "autoware_perception_msgs::msg::TrafficSignal";
}

template<>
inline const char * name<autoware_perception_msgs::msg::TrafficSignal>()
{
  return "autoware_perception_msgs/msg/TrafficSignal";
}

template<>
struct has_fixed_size<autoware_perception_msgs::msg::TrafficSignal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_perception_msgs::msg::TrafficSignal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_perception_msgs::msg::TrafficSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__TRAITS_HPP_
