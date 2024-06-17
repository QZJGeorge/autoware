// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from morai_msgs:msg/VehicleCollision.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__TRAITS_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "morai_msgs/msg/detail/vehicle_collision__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'crashed_vehicles'
#include "morai_msgs/msg/detail/object_status__traits.hpp"

namespace morai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleCollision & msg,
  std::ostream & out)
{
  out << "{";
  // member: crashed_vehicles
  {
    if (msg.crashed_vehicles.size() == 0) {
      out << "crashed_vehicles: []";
    } else {
      out << "crashed_vehicles: [";
      size_t pending_items = msg.crashed_vehicles.size();
      for (auto item : msg.crashed_vehicles) {
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
  const VehicleCollision & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: crashed_vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crashed_vehicles.size() == 0) {
      out << "crashed_vehicles: []\n";
    } else {
      out << "crashed_vehicles:\n";
      for (auto item : msg.crashed_vehicles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleCollision & msg, bool use_flow_style = false)
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
  const morai_msgs::msg::VehicleCollision & msg,
  std::ostream & out, size_t indentation = 0)
{
  morai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use morai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const morai_msgs::msg::VehicleCollision & msg)
{
  return morai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<morai_msgs::msg::VehicleCollision>()
{
  return "morai_msgs::msg::VehicleCollision";
}

template<>
inline const char * name<morai_msgs::msg::VehicleCollision>()
{
  return "morai_msgs/msg/VehicleCollision";
}

template<>
struct has_fixed_size<morai_msgs::msg::VehicleCollision>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<morai_msgs::msg::VehicleCollision>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<morai_msgs::msg::VehicleCollision>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__TRAITS_HPP_
