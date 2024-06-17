// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_perception_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_perception_msgs/msg/detail/dynamic_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'semantic'
#include "tier4_perception_msgs/msg/detail/semantic__traits.hpp"
// Member 'state'
#include "tier4_perception_msgs/msg/detail/state__traits.hpp"
// Member 'shape'
#include "tier4_perception_msgs/msg/detail/shape__traits.hpp"

namespace tier4_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamicObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: semantic
  {
    out << "semantic: ";
    to_flow_style_yaml(msg.semantic, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: shape
  {
    out << "shape: ";
    to_flow_style_yaml(msg.shape, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: semantic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semantic:\n";
    to_block_style_yaml(msg.semantic, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape:\n";
    to_block_style_yaml(msg.shape, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicObject & msg, bool use_flow_style = false)
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
  const tier4_perception_msgs::msg::DynamicObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_perception_msgs::msg::DynamicObject & msg)
{
  return tier4_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_perception_msgs::msg::DynamicObject>()
{
  return "tier4_perception_msgs::msg::DynamicObject";
}

template<>
inline const char * name<tier4_perception_msgs::msg::DynamicObject>()
{
  return "tier4_perception_msgs/msg/DynamicObject";
}

template<>
struct has_fixed_size<tier4_perception_msgs::msg::DynamicObject>
  : std::integral_constant<bool, has_fixed_size<tier4_perception_msgs::msg::Semantic>::value && has_fixed_size<tier4_perception_msgs::msg::Shape>::value && has_fixed_size<tier4_perception_msgs::msg::State>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tier4_perception_msgs::msg::DynamicObject>
  : std::integral_constant<bool, has_bounded_size<tier4_perception_msgs::msg::Semantic>::value && has_bounded_size<tier4_perception_msgs::msg::Shape>::value && has_bounded_size<tier4_perception_msgs::msg::State>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tier4_perception_msgs::msg::DynamicObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__TRAITS_HPP_
