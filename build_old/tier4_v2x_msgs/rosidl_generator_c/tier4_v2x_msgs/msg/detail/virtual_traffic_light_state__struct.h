// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__STRUCT_H_
#define TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'type'
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VirtualTrafficLightState in the package tier4_v2x_msgs.
typedef struct tier4_v2x_msgs__msg__VirtualTrafficLightState
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String id;
  bool approval;
  /// if finalization isn't required, always set to true
  bool is_finalized;
} tier4_v2x_msgs__msg__VirtualTrafficLightState;

// Struct for a sequence of tier4_v2x_msgs__msg__VirtualTrafficLightState.
typedef struct tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence
{
  tier4_v2x_msgs__msg__VirtualTrafficLightState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__STRUCT_H_
