// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__STRUCT_H_
#define TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__STRUCT_H_

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
  tier4_v2x_msgs__msg__InfrastructureCommand__NONE = 0
};

/// Constant 'REQUESTING'.
enum
{
  tier4_v2x_msgs__msg__InfrastructureCommand__REQUESTING = 1
};

/// Constant 'PASSING'.
enum
{
  tier4_v2x_msgs__msg__InfrastructureCommand__PASSING = 2
};

/// Constant 'FINALIZING'.
enum
{
  tier4_v2x_msgs__msg__InfrastructureCommand__FINALIZING = 3
};

/// Constant 'FINALIZED'.
enum
{
  tier4_v2x_msgs__msg__InfrastructureCommand__FINALIZED = 4
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'type'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'custom_tags'
#include "tier4_v2x_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/InfrastructureCommand in the package tier4_v2x_msgs.
/**
  * constants
 */
typedef struct tier4_v2x_msgs__msg__InfrastructureCommand
{
  /// fields
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String id;
  /// custom tags are set based on the 'type'
  tier4_v2x_msgs__msg__KeyValue__Sequence custom_tags;
  uint8_t state;
} tier4_v2x_msgs__msg__InfrastructureCommand;

// Struct for a sequence of tier4_v2x_msgs__msg__InfrastructureCommand.
typedef struct tier4_v2x_msgs__msg__InfrastructureCommand__Sequence
{
  tier4_v2x_msgs__msg__InfrastructureCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_v2x_msgs__msg__InfrastructureCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__INFRASTRUCTURE_COMMAND__STRUCT_H_
