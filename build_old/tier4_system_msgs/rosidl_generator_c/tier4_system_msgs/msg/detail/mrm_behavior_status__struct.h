// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/MrmBehaviorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__MRM_BEHAVIOR_STATUS__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__MRM_BEHAVIOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_AVAILABLE'.
/**
  * For state
 */
enum
{
  tier4_system_msgs__msg__MrmBehaviorStatus__NOT_AVAILABLE = 0
};

/// Constant 'AVAILABLE'.
enum
{
  tier4_system_msgs__msg__MrmBehaviorStatus__AVAILABLE = 1
};

/// Constant 'OPERATING'.
enum
{
  tier4_system_msgs__msg__MrmBehaviorStatus__OPERATING = 2
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MrmBehaviorStatus in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__MrmBehaviorStatus
{
  builtin_interfaces__msg__Time stamp;
  uint8_t state;
} tier4_system_msgs__msg__MrmBehaviorStatus;

// Struct for a sequence of tier4_system_msgs__msg__MrmBehaviorStatus.
typedef struct tier4_system_msgs__msg__MrmBehaviorStatus__Sequence
{
  tier4_system_msgs__msg__MrmBehaviorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__MrmBehaviorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__MRM_BEHAVIOR_STATUS__STRUCT_H_
