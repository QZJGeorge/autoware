// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'geographic_pose'
#include "geographic_msgs/msg/detail/geo_point_stamped__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__traits.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__traits.hpp"

namespace autoware_adapi_v1_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleKinematics & msg,
  std::ostream & out)
{
  out << "{";
  // member: geographic_pose
  {
    out << "geographic_pose: ";
    to_flow_style_yaml(msg.geographic_pose, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: accel
  {
    out << "accel: ";
    to_flow_style_yaml(msg.accel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: geographic_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geographic_pose:\n";
    to_block_style_yaml(msg.geographic_pose, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel:\n";
    to_block_style_yaml(msg.accel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleKinematics & msg, bool use_flow_style = false)
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

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_adapi_v1_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_adapi_v1_msgs::msg::VehicleKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_adapi_v1_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_adapi_v1_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_adapi_v1_msgs::msg::VehicleKinematics & msg)
{
  return autoware_adapi_v1_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::VehicleKinematics>()
{
  return "autoware_adapi_v1_msgs::msg::VehicleKinematics";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::VehicleKinematics>()
{
  return "autoware_adapi_v1_msgs/msg/VehicleKinematics";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::VehicleKinematics>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPointStamped>::value && has_fixed_size<geometry_msgs::msg::AccelWithCovarianceStamped>::value && has_fixed_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovarianceStamped>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::VehicleKinematics>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPointStamped>::value && has_bounded_size<geometry_msgs::msg::AccelWithCovarianceStamped>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovarianceStamped>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::VehicleKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__TRAITS_HPP_
