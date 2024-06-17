// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/PathChangeModuleArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'modules'
#include "tier4_planning_msgs/msg/detail/path_change_module_id__struct.h"

/// Struct defined in msg/PathChangeModuleArray in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__PathChangeModuleArray
{
  std_msgs__msg__Header header;
  tier4_planning_msgs__msg__PathChangeModuleId__Sequence modules;
} tier4_planning_msgs__msg__PathChangeModuleArray;

// Struct for a sequence of tier4_planning_msgs__msg__PathChangeModuleArray.
typedef struct tier4_planning_msgs__msg__PathChangeModuleArray__Sequence
{
  tier4_planning_msgs__msg__PathChangeModuleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__PathChangeModuleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_H_
