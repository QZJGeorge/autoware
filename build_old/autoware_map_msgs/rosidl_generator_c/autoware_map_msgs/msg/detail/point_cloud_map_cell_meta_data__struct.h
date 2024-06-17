// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__STRUCT_H_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PointCloudMapCellMetaData in the package autoware_map_msgs.
/**
  * Metadata of pointcloud map cell
 */
typedef struct autoware_map_msgs__msg__PointCloudMapCellMetaData
{
  float min_x;
  float min_y;
  float max_x;
  float max_y;
} autoware_map_msgs__msg__PointCloudMapCellMetaData;

// Struct for a sequence of autoware_map_msgs__msg__PointCloudMapCellMetaData.
typedef struct autoware_map_msgs__msg__PointCloudMapCellMetaData__Sequence
{
  autoware_map_msgs__msg__PointCloudMapCellMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__msg__PointCloudMapCellMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__STRUCT_H_
