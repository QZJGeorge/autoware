// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/DoorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  tier4_api_msgs__msg__DoorStatus__UNKNOWN = 0l
};

/// Constant 'DOOR_OPENED'.
enum
{
  tier4_api_msgs__msg__DoorStatus__DOOR_OPENED = 1l
};

/// Constant 'DOOR_CLOSED'.
enum
{
  tier4_api_msgs__msg__DoorStatus__DOOR_CLOSED = 2l
};

/// Constant 'DOOR_OPENING'.
enum
{
  tier4_api_msgs__msg__DoorStatus__DOOR_OPENING = 3l
};

/// Constant 'DOOR_CLOSING'.
enum
{
  tier4_api_msgs__msg__DoorStatus__DOOR_CLOSING = 4l
};

/// Constant 'NOT_APPLICABLE'.
enum
{
  tier4_api_msgs__msg__DoorStatus__NOT_APPLICABLE = 5l
};

/// Struct defined in msg/DoorStatus in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__DoorStatus
{
  int32_t status;
} tier4_api_msgs__msg__DoorStatus;

// Struct for a sequence of tier4_api_msgs__msg__DoorStatus.
typedef struct tier4_api_msgs__msg__DoorStatus__Sequence
{
  tier4_api_msgs__msg__DoorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__DoorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_
