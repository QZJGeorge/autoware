// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object'
#include "autoware_auto_perception_msgs/msg/detail/detected_object__traits.hpp"
// Member 'feature'
#include "tier4_perception_msgs/msg/detail/feature__traits.hpp"

namespace tier4_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedObjectWithFeature & msg,
  std::ostream & out)
{
  out << "{";
  // member: object
  {
    out << "object: ";
    to_flow_style_yaml(msg.object, out);
    out << ", ";
  }

  // member: feature
  {
    out << "feature: ";
    to_flow_style_yaml(msg.feature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectedObjectWithFeature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object:\n";
    to_block_style_yaml(msg.object, out, indentation + 2);
  }

  // member: feature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature:\n";
    to_block_style_yaml(msg.feature, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedObjectWithFeature & msg, bool use_flow_style = false)
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
  const tier4_perception_msgs::msg::DetectedObjectWithFeature & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_perception_msgs::msg::DetectedObjectWithFeature & msg)
{
  return tier4_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::DetectedObjectWithFeature>()
{
  return "tier4_perception_msgs::msg::DetectedObjectWithFeature";
}

template<>
inline const char * name<tier4_perception_msgs::msg::DetectedObjectWithFeature>()
{
  return "tier4_perception_msgs/msg/DetectedObjectWithFeature";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::DetectedObjectWithFeature>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_perception_msgs::msg::DetectedObject>::value && has_fixed_size<tier4_perception_msgs::msg::Feature>::value> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::DetectedObjectWithFeature>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::DetectedObject>::value && has_bounded_size<tier4_perception_msgs::msg::Feature>::value> {};

template<>
struct is_message<tier4_perception_msgs::msg::DetectedObjectWithFeature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__TRAITS_HPP_
