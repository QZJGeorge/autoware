// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:srv/GetPartialPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_map_msgs/srv/detail/get_partial_point_cloud_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'area'
#include "autoware_map_msgs/msg/detail/area_info__traits.hpp"

namespace autoware_map_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPartialPointCloudMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: area
  {
    out << "area: ";
    to_flow_style_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPartialPointCloudMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area:\n";
    to_block_style_yaml(msg.area, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPartialPointCloudMap_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autoware_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_map_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_map_msgs::srv::GetPartialPointCloudMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_map_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_map_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_map_msgs::srv::GetPartialPointCloudMap_Request & msg)
{
  return autoware_map_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>()
{
  return "autoware_map_msgs::srv::GetPartialPointCloudMap_Request";
}

template<>
inline const char * name<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>()
{
  return "autoware_map_msgs/srv/GetPartialPointCloudMap_Request";
}

template<>
struct has_fixed_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>
  : std::integral_constant<bool, has_fixed_size<autoware_map_msgs::msg::AreaInfo>::value> {};

template<>
struct has_bounded_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>
  : std::integral_constant<bool, has_bounded_size<autoware_map_msgs::msg::AreaInfo>::value> {};

template<>
struct is_message<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'new_pointcloud_with_ids'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__traits.hpp"

namespace autoware_map_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPartialPointCloudMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: new_pointcloud_with_ids
  {
    if (msg.new_pointcloud_with_ids.size() == 0) {
      out << "new_pointcloud_with_ids: []";
    } else {
      out << "new_pointcloud_with_ids: [";
      size_t pending_items = msg.new_pointcloud_with_ids.size();
      for (auto item : msg.new_pointcloud_with_ids) {
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
  const GetPartialPointCloudMap_Response & msg,
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

  // member: new_pointcloud_with_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.new_pointcloud_with_ids.size() == 0) {
      out << "new_pointcloud_with_ids: []\n";
    } else {
      out << "new_pointcloud_with_ids:\n";
      for (auto item : msg.new_pointcloud_with_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPartialPointCloudMap_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autoware_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_map_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_map_msgs::srv::GetPartialPointCloudMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_map_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_map_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autoware_map_msgs::srv::GetPartialPointCloudMap_Response & msg)
{
  return autoware_map_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>()
{
  return "autoware_map_msgs::srv::GetPartialPointCloudMap_Response";
}

template<>
inline const char * name<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>()
{
  return "autoware_map_msgs/srv/GetPartialPointCloudMap_Response";
}

template<>
struct has_fixed_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::srv::GetPartialPointCloudMap>()
{
  return "autoware_map_msgs::srv::GetPartialPointCloudMap";
}

template<>
inline const char * name<autoware_map_msgs::srv::GetPartialPointCloudMap>()
{
  return "autoware_map_msgs/srv/GetPartialPointCloudMap";
}

template<>
struct has_fixed_size<autoware_map_msgs::srv::GetPartialPointCloudMap>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>::value &&
    has_fixed_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_map_msgs::srv::GetPartialPointCloudMap>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>::value &&
    has_bounded_size<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>::value
  >
{
};

template<>
struct is_service<autoware_map_msgs::srv::GetPartialPointCloudMap>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_map_msgs::srv::GetPartialPointCloudMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_map_msgs::srv::GetPartialPointCloudMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__TRAITS_HPP_
