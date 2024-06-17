// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_map_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#ifndef TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__TRAITS_HPP_
#define TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tier4_map_msgs/msg/detail/map_projector_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'map_origin'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace tier4_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapProjectorInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: projector_type
  {
    out << "projector_type: ";
    rosidl_generator_traits::value_to_yaml(msg.projector_type, out);
    out << ", ";
  }

  // member: vertical_datum
  {
    out << "vertical_datum: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_datum, out);
    out << ", ";
  }

  // member: mgrs_grid
  {
    out << "mgrs_grid: ";
    rosidl_generator_traits::value_to_yaml(msg.mgrs_grid, out);
    out << ", ";
  }

  // member: map_origin
  {
    out << "map_origin: ";
    to_flow_style_yaml(msg.map_origin, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapProjectorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: projector_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "projector_type: ";
    rosidl_generator_traits::value_to_yaml(msg.projector_type, out);
    out << "\n";
  }

  // member: vertical_datum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_datum: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_datum, out);
    out << "\n";
  }

  // member: mgrs_grid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mgrs_grid: ";
    rosidl_generator_traits::value_to_yaml(msg.mgrs_grid, out);
    out << "\n";
  }

  // member: map_origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_origin:\n";
    to_block_style_yaml(msg.map_origin, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapProjectorInfo & msg, bool use_flow_style = false)
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

}  // namespace tier4_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tier4_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tier4_map_msgs::msg::MapProjectorInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  tier4_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tier4_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tier4_map_msgs::msg::MapProjectorInfo & msg)
{
  return tier4_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tier4_map_msgs::msg::MapProjectorInfo>()
{
  return "tier4_map_msgs::msg::MapProjectorInfo";
}

template<>
inline const char * name<tier4_map_msgs::msg::MapProjectorInfo>()
{
  return "tier4_map_msgs/msg/MapProjectorInfo";
}

template<>
struct has_fixed_size<tier4_map_msgs::msg::MapProjectorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_map_msgs::msg::MapProjectorInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_map_msgs::msg::MapProjectorInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_MAP_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__TRAITS_HPP_
