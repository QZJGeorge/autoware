// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/PathChangeModule.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__STRUCT_H_

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
// Member 'module'
#include "tier4_planning_msgs/msg/detail/path_change_module_id__struct.h"

/// Struct defined in msg/PathChangeModule in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__PathChangeModule
{
  std_msgs__msg__Header header;
  tier4_planning_msgs__msg__PathChangeModuleId module;
} tier4_planning_msgs__msg__PathChangeModule;

// Struct for a sequence of tier4_planning_msgs__msg__PathChangeModule.
typedef struct tier4_planning_msgs__msg__PathChangeModule__Sequence
{
  tier4_planning_msgs__msg__PathChangeModule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__PathChangeModule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__STRUCT_H_
