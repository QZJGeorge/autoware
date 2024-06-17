// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_api_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__TRAITS_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_api_msgs/msg/detail/lane_change_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'candidate_path'
#include "tier4_planning_msgs/msg/detail/path__traits.hpp"

namespace tier4_api_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneChangeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: force_lane_change_available
  {
    out << "force_lane_change_available: ";
    rosidl_generator_traits::value_to_yaml(msg.force_lane_change_available, out);
    out << ", ";
  }

  // member: lane_change_ready
  {
    out << "lane_change_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_change_ready, out);
    out << ", ";
  }

  // member: candidate_path
  {
    out << "candidate_path: ";
    to_flow_style_yaml(msg.candidate_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneChangeStatus & msg,
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

  // member: force_lane_change_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_lane_change_available: ";
    rosidl_generator_traits::value_to_yaml(msg.force_lane_change_available, out);
    out << "\n";
  }

  // member: lane_change_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_change_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_change_ready, out);
    out << "\n";
  }

  // member: candidate_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "candidate_path:\n";
    to_block_style_yaml(msg.candidate_path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneChangeStatus & msg, bool use_flow_style = false)
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

}  // namespace tier4_api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_api_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_api_msgs::msg::LaneChangeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_api_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_api_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_api_msgs::msg::LaneChangeStatus & msg)
{
  return tier4_api_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_api_msgs::msg::LaneChangeStatus>()
{
  return "tier4_api_msgs::msg::LaneChangeStatus";
}

template<>
inline const char * name<tier4_api_msgs::msg::LaneChangeStatus>()
{
  return "tier4_api_msgs/msg/LaneChangeStatus";
}

template<>
struct has_fixed_size<tier4_api_msgs::msg::LaneChangeStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<tier4_planning_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<tier4_api_msgs::msg::LaneChangeStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<tier4_planning_msgs::msg::Path>::value> {};

template<>
struct is_message<tier4_api_msgs::msg::LaneChangeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__TRAITS_HPP_
