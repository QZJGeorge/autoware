// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_control_msgs:msg/ExternalCommandSelectorMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__STRUCT_H_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  tier4_control_msgs__msg__ExternalCommandSelectorMode__NONE = 0
};

/// Constant 'LOCAL'.
enum
{
  tier4_control_msgs__msg__ExternalCommandSelectorMode__LOCAL = 1
};

/// Constant 'REMOTE'.
enum
{
  tier4_control_msgs__msg__ExternalCommandSelectorMode__REMOTE = 2
};

/// Struct defined in msg/ExternalCommandSelectorMode in the package tier4_control_msgs.
typedef struct tier4_control_msgs__msg__ExternalCommandSelectorMode
{
  uint8_t data;
} tier4_control_msgs__msg__ExternalCommandSelectorMode;

// Struct for a sequence of tier4_control_msgs__msg__ExternalCommandSelectorMode.
typedef struct tier4_control_msgs__msg__ExternalCommandSelectorMode__Sequence
{
  tier4_control_msgs__msg__ExternalCommandSelectorMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_control_msgs__msg__ExternalCommandSelectorMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__STRUCT_H_
