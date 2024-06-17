// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsgArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__STRUCT_H_

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
// Member 'avoidance_info'
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__struct.h"

/// Struct defined in msg/AvoidanceDebugMsgArray in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__AvoidanceDebugMsgArray
{
  std_msgs__msg__Header header;
  tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence avoidance_info;
} tier4_planning_msgs__msg__AvoidanceDebugMsgArray;

// Struct for a sequence of tier4_planning_msgs__msg__AvoidanceDebugMsgArray.
typedef struct tier4_planning_msgs__msg__AvoidanceDebugMsgArray__Sequence
{
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__AvoidanceDebugMsgArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__STRUCT_H_
