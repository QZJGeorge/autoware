// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/DoorStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_

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
  autoware_adapi_v1_msgs__msg__DoorStatus__UNKNOWN = 0
};

/// Constant 'NOT_AVAILABLE'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorStatus__NOT_AVAILABLE = 1
};

/// Constant 'OPENED'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorStatus__OPENED = 2
};

/// Constant 'CLOSED'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorStatus__CLOSED = 3
};

/// Constant 'OPENING'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorStatus__OPENING = 4
};

/// Constant 'CLOSING'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorStatus__CLOSING = 5
};

/// Struct defined in msg/DoorStatus in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__DoorStatus
{
  uint8_t status;
} autoware_adapi_v1_msgs__msg__DoorStatus;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__DoorStatus.
typedef struct autoware_adapi_v1_msgs__msg__DoorStatus__Sequence
{
  autoware_adapi_v1_msgs__msg__DoorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__DoorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_STATUS__STRUCT_H_
