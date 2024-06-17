// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__STRUCT_H_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AreaInfo in the package autoware_map_msgs.
/**
  * Area info used as a query in map loading service
  * Note: this only supports cylindrical area message for now
 */
typedef struct autoware_map_msgs__msg__AreaInfo
{
  float center_x;
  float center_y;
  float radius;
} autoware_map_msgs__msg__AreaInfo;

// Struct for a sequence of autoware_map_msgs__msg__AreaInfo.
typedef struct autoware_map_msgs__msg__AreaInfo__Sequence
{
  autoware_map_msgs__msg__AreaInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__msg__AreaInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__STRUCT_H_
