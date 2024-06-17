// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaDataWithID.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__STRUCT_H_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cell_id'
#include "rosidl_runtime_c/string.h"
// Member 'metadata'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__struct.h"

/// Struct defined in msg/PointCloudMapCellMetaDataWithID in the package autoware_map_msgs.
/**
  * Pointcloud metadata with ID
 */
typedef struct autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID
{
  rosidl_runtime_c__String cell_id;
  autoware_map_msgs__msg__PointCloudMapCellMetaData metadata;
} autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID;

// Struct for a sequence of autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID.
typedef struct autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence
{
  autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA_WITH_ID__STRUCT_H_
