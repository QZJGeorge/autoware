// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/DoorCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_COMMAND__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OPEN'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorCommand__OPEN = 1
};

/// Constant 'CLOSE'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorCommand__CLOSE = 2
};

/// Struct defined in msg/DoorCommand in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__DoorCommand
{
  uint32_t index;
  uint8_t command;
} autoware_adapi_v1_msgs__msg__DoorCommand;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__DoorCommand.
typedef struct autoware_adapi_v1_msgs__msg__DoorCommand__Sequence
{
  autoware_adapi_v1_msgs__msg__DoorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__DoorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_COMMAND__STRUCT_H_
