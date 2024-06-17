// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/HazardStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__STRUCT_H_

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
// Member 'status'
#include "tier4_system_msgs/msg/detail/hazard_status__struct.h"

/// Struct defined in msg/HazardStatusStamped in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__HazardStatusStamped
{
  std_msgs__msg__Header header;
  tier4_system_msgs__msg__HazardStatus status;
} tier4_system_msgs__msg__HazardStatusStamped;

// Struct for a sequence of tier4_system_msgs__msg__HazardStatusStamped.
typedef struct tier4_system_msgs__msg__HazardStatusStamped__Sequence
{
  tier4_system_msgs__msg__HazardStatusStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__HazardStatusStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__STRUCT_H_
