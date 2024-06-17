// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/SyncModeCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "morai_msgs/msg/detail/ctrl_cmd__struct.h"

/// Struct defined in msg/SyncModeCtrlCmd in the package morai_msgs.
typedef struct morai_msgs__msg__SyncModeCtrlCmd
{
  uint64_t frame;
  morai_msgs__msg__CtrlCmd command;
  bool sensor_capture;
} morai_msgs__msg__SyncModeCtrlCmd;

// Struct for a sequence of morai_msgs__msg__SyncModeCtrlCmd.
typedef struct morai_msgs__msg__SyncModeCtrlCmd__Sequence
{
  morai_msgs__msg__SyncModeCtrlCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__SyncModeCtrlCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CTRL_CMD__STRUCT_H_
