// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaDataWithID.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'metadata'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__traits.hpp"

namespace autoware_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloudMapCellMetaDataWithID & msg,
  std::ostream & out)
{
  out << "{";
  // member: cell_id
  {
    out << "cell_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_id, out);
    out << ", ";
  }

  // member: metadata
  {
    out << "metadata: ";
    to_flow_style_yaml(msg.metadata, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointCloudMapCellMetaDataWithID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cell_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_id, out);
    out << "\n";
  }

  // member: metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata:\n";
    to_block_style_yaml(msg.metadata, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloudMapCellMetaDataWithID & msg, bool use_flow_style = false)
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
  const autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID & msg)
{
  return autoware_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID>()
{
  return "autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID";
}

template<>
inline const char * name<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID>()
{
  return "autoware_map_msgs/msg/PointCloudMapCellMetaDataWithID";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__TRAITS_HPP_
