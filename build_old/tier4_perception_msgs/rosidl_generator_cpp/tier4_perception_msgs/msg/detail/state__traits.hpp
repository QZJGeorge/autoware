// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_perception_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'acceleration_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"
// Member 'predicted_paths'
#include "tier4_perception_msgs/msg/detail/predicted_path__traits.hpp"

namespace tier4_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_covariance
  {
    out << "pose_covariance: ";
    to_flow_style_yaml(msg.pose_covariance, out);
    out << ", ";
  }

  // member: orientation_reliable
  {
    out << "orientation_reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_reliable, out);
    out << ", ";
  }

  // member: twist_covariance
  {
    out << "twist_covariance: ";
    to_flow_style_yaml(msg.twist_covariance, out);
    out << ", ";
  }

  // member: twist_reliable
  {
    out << "twist_reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.twist_reliable, out);
    out << ", ";
  }

  // member: acceleration_covariance
  {
    out << "acceleration_covariance: ";
    to_flow_style_yaml(msg.acceleration_covariance, out);
    out << ", ";
  }

  // member: acceleration_reliable
  {
    out << "acceleration_reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_reliable, out);
    out << ", ";
  }

  // member: predicted_paths
  {
    if (msg.predicted_paths.size() == 0) {
      out << "predicted_paths: []";
    } else {
      out << "predicted_paths: [";
      size_t pending_items = msg.predicted_paths.size();
      for (auto item : msg.predicted_paths) {
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
  const State & msg,
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

  // member: orientation_reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_reliable, out);
    out << "\n";
  }

  // member: twist_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_covariance:\n";
    to_block_style_yaml(msg.twist_covariance, out, indentation + 2);
  }

  // member: twist_reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.twist_reliable, out);
    out << "\n";
  }

  // member: acceleration_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_covariance:\n";
    to_block_style_yaml(msg.acceleration_covariance, out, indentation + 2);
  }

  // member: acceleration_reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_reliable, out);
    out << "\n";
  }

  // member: predicted_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_paths.size() == 0) {
      out << "predicted_paths: []\n";
    } else {
      out << "predicted_paths:\n";
      for (auto item : msg.predicted_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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
  const tier4_perception_msgs::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_perception_msgs::msg::State & msg)
{
  return tier4_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::State>()
{
  return "tier4_perception_msgs::msg::State";
}

template<>
inline const char * name<tier4_perception_msgs::msg::State>()
{
  return "tier4_perception_msgs/msg/State";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_perception_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
