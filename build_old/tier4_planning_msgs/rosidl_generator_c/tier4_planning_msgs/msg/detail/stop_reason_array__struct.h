// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/StopReasonArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__STRUCT_H_

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
// Member 'stop_reasons'
#include "tier4_planning_msgs/msg/detail/stop_reason__struct.h"

/// Struct defined in msg/StopReasonArray in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__StopReasonArray
{
  std_msgs__msg__Header header;
  tier4_planning_msgs__msg__StopReason__Sequence stop_reasons;
} tier4_planning_msgs__msg__StopReasonArray;

// Struct for a sequence of tier4_planning_msgs__msg__StopReasonArray.
typedef struct tier4_planning_msgs__msg__StopReasonArray__Sequence
{
  tier4_planning_msgs__msg__StopReasonArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__StopReasonArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON_ARRAY__STRUCT_H_
