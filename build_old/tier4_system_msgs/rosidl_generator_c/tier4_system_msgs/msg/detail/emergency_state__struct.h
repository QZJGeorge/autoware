// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  tier4_system_msgs__msg__EmergencyState__NORMAL = 1
};

/// Constant 'OVERRIDE_REQUESTING'.
enum
{
  tier4_system_msgs__msg__EmergencyState__OVERRIDE_REQUESTING = 2
};

/// Constant 'MRM_OPERATING'.
enum
{
  tier4_system_msgs__msg__EmergencyState__MRM_OPERATING = 3
};

/// Constant 'MRM_SUCCEEDED'.
enum
{
  tier4_system_msgs__msg__EmergencyState__MRM_SUCCEEDED = 4
};

/// Constant 'MRM_FAILED'.
enum
{
  tier4_system_msgs__msg__EmergencyState__MRM_FAILED = 5
};

/// Struct defined in msg/EmergencyState in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__EmergencyState
{
  uint8_t state;
} tier4_system_msgs__msg__EmergencyState;

// Struct for a sequence of tier4_system_msgs__msg__EmergencyState.
typedef struct tier4_system_msgs__msg__EmergencyState__Sequence
{
  tier4_system_msgs__msg__EmergencyState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__EmergencyState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_H_
