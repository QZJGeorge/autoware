// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/VehicleCollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/vehicle_collision_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'collisions'
#include "morai_msgs/msg/detail/vehicle_collision__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleCollisionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: collisions
  {
    if (msg.collisions.size() == 0) {
      out << "collisions: []";
    } else {
      out << "collisions: [";
      size_t pending_items = msg.collisions.size();
      for (auto item : msg.collisions) {
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
  const VehicleCollisionData & msg,
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

  // member: collisions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.collisions.size() == 0) {
      out << "collisions: []\n";
    } else {
      out << "collisions:\n";
      for (auto item : msg.collisions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleCollisionData & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::VehicleCollisionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::VehicleCollisionData & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::VehicleCollisionData>()
{
  return "morai_msgs::msg::VehicleCollisionData";
}

template<>
inline const char * name<morai_msgs::msg::VehicleCollisionData>()
{
  return "morai_msgs/msg/VehicleCollisionData";
}

template<>
struct has_fixed_size<morai_msgs::msg::VehicleCollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::VehicleCollisionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::VehicleCollisionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__TRAITS_HPP_
