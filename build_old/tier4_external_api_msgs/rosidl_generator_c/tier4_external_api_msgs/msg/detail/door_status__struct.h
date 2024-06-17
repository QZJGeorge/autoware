// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/DoorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_SUPPORTED'.
enum
{
  tier4_external_api_msgs__msg__DoorStatus__NOT_SUPPORTED = -1
};

/// Constant 'UNKNOWN'.
enum
{
  tier4_external_api_msgs__msg__DoorStatus__UNKNOWN = 0
};

/// Constant 'OPENED'.
enum
{
  tier4_external_api_msgs__msg__DoorStatus__OPENED = 1
};

/// Constant 'CLOSED'.
enum
{
  tier4_external_api_msgs__msg__DoorStatus__CLOSED = 2
};

/// Constant 'OPENING'.
enum
{
  tier4_external_api_msgs__msg__DoorStatus__OPENING = 3
};

/// Constant 'CLOSING'.
enum
{
  tier4_external_api_msgs__msg__DoorStatus__CLOSING = 4
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/DoorStatus in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__DoorStatus
{
  /// fields
  builtin_interfaces__msg__Time stamp;
  int8_t status;
} tier4_external_api_msgs__msg__DoorStatus;

// Struct for a sequence of tier4_external_api_msgs__msg__DoorStatus.
typedef struct tier4_external_api_msgs__msg__DoorStatus__Sequence
{
  tier4_external_api_msgs__msg__DoorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__DoorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_
