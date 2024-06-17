// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightStateArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__STRUCT_H_
#define TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__STRUCT_H_

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
// Member 'states'
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__struct.h"

/// Struct defined in msg/VirtualTrafficLightStateArray in the package tier4_v2x_msgs.
typedef struct tier4_v2x_msgs__msg__VirtualTrafficLightStateArray
{
  builtin_interfaces__msg__Time stamp;
  tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence states;
} tier4_v2x_msgs__msg__VirtualTrafficLightStateArray;

// Struct for a sequence of tier4_v2x_msgs__msg__VirtualTrafficLightStateArray.
typedef struct tier4_v2x_msgs__msg__VirtualTrafficLightStateArray__Sequence
{
  tier4_v2x_msgs__msg__VirtualTrafficLightStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_v2x_msgs__msg__VirtualTrafficLightStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__STRUCT_H_
