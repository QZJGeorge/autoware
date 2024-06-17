// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dummy_perception_publisher:msg/InitialState.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__TRAITS_HPP_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dummy_perception_publisher/msg/detail/initial_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'accel_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace dummy_perception_publisher
{

namespace msg
{

inline void to_flow_style_yaml(
  const InitialState & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_covariance
  {
    out << "pose_covariance: ";
    to_flow_style_yaml(msg.pose_covariance, out);
    out << ", ";
  }

  // member: twist_covariance
  {
    out << "twist_covariance: ";
    to_flow_style_yaml(msg.twist_covariance, out);
    out << ", ";
  }

  // member: accel_covariance
  {
    out << "accel_covariance: ";
    to_flow_style_yaml(msg.accel_covariance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitialState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_covariance:\n";
    to_block_style_yaml(msg.pose_covariance, out, indentation + 2);
  }

  // member: twist_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_covariance:\n";
    to_block_style_yaml(msg.twist_covariance, out, indentation + 2);
  }

  // member: accel_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_covariance:\n";
    to_block_style_yaml(msg.accel_covariance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitialState & msg, bool use_flow_style = false)
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

}  // namespace dummy_perception_publisher

namespace rosidl_generator_traits
{

[[deprecated("use dummy_perception_publisher::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dummy_perception_publisher::msg::InitialState & msg,
  std::ostream & out, size_t indentation = 0)
{
  dummy_perception_publisher::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dummy_perception_publisher::msg::to_yaml() instead")]]
inline std::string to_yaml(const dummy_perception_publisher::msg::InitialState & msg)
{
  return dummy_perception_publisher::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dummy_perception_publisher::msg::InitialState>()
{
  return "dummy_perception_publisher::msg::InitialState";
}

template<>
inline const char * name<dummy_perception_publisher::msg::InitialState>()
{
  return "dummy_perception_publisher/msg/InitialState";
}

template<>
struct has_fixed_size<dummy_perception_publisher::msg::InitialState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::AccelWithCovariance>::value && has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<dummy_perception_publisher::msg::InitialState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<dummy_perception_publisher::msg::InitialState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__TRAITS_HPP_
