// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloudMapCellMetaData & msg,
  std::ostream & out)
{
  out << "{";
  // member: min_x
  {
    out << "min_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_x, out);
    out << ", ";
  }

  // member: min_y
  {
    out << "min_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_y, out);
    out << ", ";
  }

  // member: max_x
  {
    out << "max_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_x, out);
    out << ", ";
  }

  // member: max_y
  {
    out << "max_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointCloudMapCellMetaData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_x, out);
    out << "\n";
  }

  // member: min_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_y, out);
    out << "\n";
  }

  // member: max_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_x, out);
    out << "\n";
  }

  // member: max_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloudMapCellMetaData & msg, bool use_flow_style = false)
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

}  // namespace autoware_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_map_msgs::msg::PointCloudMapCellMetaData & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_map_msgs::msg::PointCloudMapCellMetaData & msg)
{
  return autoware_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_map_msgs::msg::PointCloudMapCellMetaData>()
{
  return "autoware_map_msgs::msg::PointCloudMapCellMetaData";
}

template<>
inline const char * name<autoware_map_msgs::msg::PointCloudMapCellMetaData>()
{
  return "autoware_map_msgs/msg/PointCloudMapCellMetaData";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::PointCloudMapCellMetaData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::PointCloudMapCellMetaData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_map_msgs::msg::PointCloudMapCellMetaData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__TRAITS_HPP_
