// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'relative_distance'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace tier4_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneChangeDebugMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: allow_lane_change
  {
    out << "allow_lane_change: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_lane_change, out);
    out << ", ";
  }

  // member: is_front
  {
    out << "is_front: ";
    rosidl_generator_traits::value_to_yaml(msg.is_front, out);
    out << ", ";
  }

  // member: relative_distance
  {
    out << "relative_distance: ";
    to_flow_style_yaml(msg.relative_distance, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: failed_reason
  {
    out << "failed_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneChangeDebugMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: allow_lane_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_lane_change: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_lane_change, out);
    out << "\n";
  }

  // member: is_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_front: ";
    rosidl_generator_traits::value_to_yaml(msg.is_front, out);
    out << "\n";
  }

  // member: relative_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_distance:\n";
    to_block_style_yaml(msg.relative_distance, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: failed_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failed_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneChangeDebugMsg & msg, bool use_flow_style = false)
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
  const tier4_planning_msgs::msg::LaneChangeDebugMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_planning_msgs::msg::LaneChangeDebugMsg & msg)
{
  return tier4_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::LaneChangeDebugMsg>()
{
  return "tier4_planning_msgs::msg::LaneChangeDebugMsg";
}

template<>
inline const char * name<tier4_planning_msgs::msg::LaneChangeDebugMsg>()
{
  return "tier4_planning_msgs/msg/LaneChangeDebugMsg";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::LaneChangeDebugMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::LaneChangeDebugMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::LaneChangeDebugMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__TRAITS_HPP_
