// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/StopFactor.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_planning_msgs/msg/detail/stop_factor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stop_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'stop_factor_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace tier4_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StopFactor & msg,
  std::ostream & out)
{
  out << "{";
  // member: stop_pose
  {
    out << "stop_pose: ";
    to_flow_style_yaml(msg.stop_pose, out);
    out << ", ";
  }

  // member: dist_to_stop_pose
  {
    out << "dist_to_stop_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_stop_pose, out);
    out << ", ";
  }

  // member: stop_factor_points
  {
    if (msg.stop_factor_points.size() == 0) {
      out << "stop_factor_points: []";
    } else {
      out << "stop_factor_points: [";
      size_t pending_items = msg.stop_factor_points.size();
      for (auto item : msg.stop_factor_points) {
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
  const StopFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_pose:\n";
    to_block_style_yaml(msg.stop_pose, out, indentation + 2);
  }

  // member: dist_to_stop_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_stop_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_stop_pose, out);
    out << "\n";
  }

  // member: stop_factor_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_factor_points.size() == 0) {
      out << "stop_factor_points: []\n";
    } else {
      out << "stop_factor_points:\n";
      for (auto item : msg.stop_factor_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopFactor & msg, bool use_flow_style = false)
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

}  // namespace tier4_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_planning_msgs::msg::StopFactor & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_planning_msgs::msg::StopFactor & msg)
{
  return tier4_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::StopFactor>()
{
  return "tier4_planning_msgs::msg::StopFactor";
}

template<>
inline const char * name<tier4_planning_msgs::msg::StopFactor>()
{
  return "tier4_planning_msgs/msg/StopFactor";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::StopFactor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::StopFactor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::StopFactor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__TRAITS_HPP_
