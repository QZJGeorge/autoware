// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/MapHash.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__MAP_HASH__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__MAP_HASH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lanelet'
// Member 'pcd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MapHash in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__MapHash
{
  rosidl_runtime_c__String lanelet;
  rosidl_runtime_c__String pcd;
} tier4_external_api_msgs__msg__MapHash;

// Struct for a sequence of tier4_external_api_msgs__msg__MapHash.
typedef struct tier4_external_api_msgs__msg__MapHash__Sequence
{
  tier4_external_api_msgs__msg__MapHash * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__MapHash__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__MAP_HASH__STRUCT_H_
