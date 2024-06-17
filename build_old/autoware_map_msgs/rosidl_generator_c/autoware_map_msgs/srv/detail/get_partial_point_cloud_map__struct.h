// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:srv/GetPartialPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__STRUCT_H_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'area'
#include "autoware_map_msgs/msg/detail/area_info__struct.h"

/// Struct defined in srv/GetPartialPointCloudMap in the package autoware_map_msgs.
typedef struct autoware_map_msgs__srv__GetPartialPointCloudMap_Request
{
  autoware_map_msgs__msg__AreaInfo area;
} autoware_map_msgs__srv__GetPartialPointCloudMap_Request;

// Struct for a sequence of autoware_map_msgs__srv__GetPartialPointCloudMap_Request.
typedef struct autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence
{
  autoware_map_msgs__srv__GetPartialPointCloudMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__srv__GetPartialPointCloudMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'new_pointcloud_with_ids'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__struct.h"

/// Struct defined in srv/GetPartialPointCloudMap in the package autoware_map_msgs.
typedef struct autoware_map_msgs__srv__GetPartialPointCloudMap_Response
{
  std_msgs__msg__Header header;
  /// Newly loaded PCD maps with ID
  autoware_map_msgs__msg__PointCloudMapCellWithID__Sequence new_pointcloud_with_ids;
} autoware_map_msgs__srv__GetPartialPointCloudMap_Response;

// Struct for a sequence of autoware_map_msgs__srv__GetPartialPointCloudMap_Response.
typedef struct autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence
{
  autoware_map_msgs__srv__GetPartialPointCloudMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__srv__GetPartialPointCloudMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_PARTIAL_POINT_CLOUD_MAP__STRUCT_H_
