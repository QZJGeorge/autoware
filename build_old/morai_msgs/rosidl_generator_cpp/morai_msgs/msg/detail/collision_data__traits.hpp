// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/collision_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'collision_object'
#include "morai_msgs/msg/detail/object_status__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: global_offset_x
  {
    out << "global_offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.global_offset_x, out);
    out << ", ";
  }

  // member: global_offset_y
  {
    out << "global_offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.global_offset_y, out);
    out << ", ";
  }

  // member: global_offset_z
  {
    out << "global_offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.global_offset_z, out);
    out << ", ";
  }

  // member: collision_object
  {
    if (msg.collision_object.size() == 0) {
      out << "collision_object: []";
    } else {
      out << "collision_object: [";
      size_t pending_items = msg.collision_object.size();
      for (auto item : msg.collision_object) {
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
  const CollisionData & msg,
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

  // member: global_offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.global_offset_x, out);
    out << "\n";
  }

  // member: global_offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.global_offset_y, out);
    out << "\n";
  }

  // member: global_offset_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.global_offset_z, out);
    out << "\n";
  }

  // member: collision_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.collision_object.size() == 0) {
      out << "collision_object: []\n";
    } else {
      out << "collision_object:\n";
      for (auto item : msg.collision_object) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionData & msg, bool use_flow_style = false)
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

}  // namespace morai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use morai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const morai_msgs::msg::CollisionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::CollisionData & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::CollisionData>()
{
  return "morai_msgs::msg::CollisionData";
}

template<>
inline const char * name<morai_msgs::msg::CollisionData>()
{
  return "morai_msgs/msg/CollisionData";
}

template<>
struct has_fixed_size<morai_msgs::msg::CollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::CollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::CollisionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__TRAITS_HPP_
