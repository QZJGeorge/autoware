// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_debug_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MultiArrayDimension in the package tier4_debug_msgs.
/**
  * This is from ros2 common_interfaces.
  * https://github.com/ros2/common_interfaces/blob/master/std_msgs/msg/MultiArrayDimension.msg
 */
typedef struct tier4_debug_msgs__msg__MultiArrayDimension
{
  /// This was originally provided as an example message.
  /// It is deprecated as of Foxy
  /// It is recommended to create your own semantically meaningful message.
  /// However if you would like to continue using this please use the equivalent in example_msgs.
  /// label of given dimension
  rosidl_runtime_c__String label;
  /// size of given dimension (in type units)
  uint32_t size;
  /// stride of given dimension
  uint32_t stride;
} tier4_debug_msgs__msg__MultiArrayDimension;

// Struct for a sequence of tier4_debug_msgs__msg__MultiArrayDimension.
typedef struct tier4_debug_msgs__msg__MultiArrayDimension__Sequence
{
  tier4_debug_msgs__msg__MultiArrayDimension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_debug_msgs__msg__MultiArrayDimension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
