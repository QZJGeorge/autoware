// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dummy_perception_publisher:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dummy_perception_publisher/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'initial_state'
#include "dummy_perception_publisher/msg/detail/initial_state__traits.hpp"
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__traits.hpp"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__traits.hpp"

namespace dummy_perception_publisher
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: initial_state
  {
    out << "initial_state: ";
    to_flow_style_yaml(msg.initial_state, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    to_flow_style_yaml(msg.classification, out);
    out << ", ";
  }

  // member: shape
  {
    out << "shape: ";
    to_flow_style_yaml(msg.shape, out);
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << ", ";
  }

  // member: min_velocity
  {
    out << "min_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.min_velocity, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: initial_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state:\n";
    to_block_style_yaml(msg.initial_state, out, indentation + 2);
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification:\n";
    to_block_style_yaml(msg.classification, out, indentation + 2);
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape:\n";
    to_block_style_yaml(msg.shape, out, indentation + 2);
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: min_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.min_velocity, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const dummy_perception_publisher::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  dummy_perception_publisher::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dummy_perception_publisher::msg::to_yaml() instead")]]
inline std::string to_yaml(const dummy_perception_publisher::msg::Object & msg)
{
  return dummy_perception_publisher::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dummy_perception_publisher::msg::Object>()
{
  return "dummy_perception_publisher::msg::Object";
}

template<>
inline const char * name<dummy_perception_publisher::msg::Object>()
{
  return "dummy_perception_publisher/msg/Object";
}

template<>
struct has_fixed_size<dummy_perception_publisher::msg::Object>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_perception_msgs::msg::ObjectClassification>::value && has_fixed_size<autoware_auto_perception_msgs::msg::Shape>::value && has_fixed_size<dummy_perception_publisher::msg::InitialState>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dummy_perception_publisher::msg::Object>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::ObjectClassification>::value && has_bounded_size<autoware_auto_perception_msgs::msg::Shape>::value && has_bounded_size<dummy_perception_publisher::msg::InitialState>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dummy_perception_publisher::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__OBJECT__TRAITS_HPP_
