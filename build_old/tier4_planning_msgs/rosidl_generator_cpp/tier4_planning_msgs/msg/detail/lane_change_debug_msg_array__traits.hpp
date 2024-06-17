// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsgArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'lane_change_info'
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__traits.hpp"

namespace tier4_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneChangeDebugMsgArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lane_change_info
  {
    if (msg.lane_change_info.size() == 0) {
      out << "lane_change_info: []";
    } else {
      out << "lane_change_info: [";
      size_t pending_items = msg.lane_change_info.size();
      for (auto item : msg.lane_change_info) {
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
  const LaneChangeDebugMsgArray & msg,
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

  // member: lane_change_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_change_info.size() == 0) {
      out << "lane_change_info: []\n";
    } else {
      out << "lane_change_info:\n";
      for (auto item : msg.lane_change_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneChangeDebugMsgArray & msg, bool use_flow_style = false)
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
  const tier4_planning_msgs::msg::LaneChangeDebugMsgArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_planning_msgs::msg::LaneChangeDebugMsgArray & msg)
{
  return tier4_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_planning_msgs::msg::LaneChangeDebugMsgArray>()
{
  return "tier4_planning_msgs::msg::LaneChangeDebugMsgArray";
}

template<>
inline const char * name<tier4_planning_msgs::msg::LaneChangeDebugMsgArray>()
{
  return "tier4_planning_msgs/msg/LaneChangeDebugMsgArray";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::LaneChangeDebugMsgArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::LaneChangeDebugMsgArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::LaneChangeDebugMsgArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__TRAITS_HPP_
