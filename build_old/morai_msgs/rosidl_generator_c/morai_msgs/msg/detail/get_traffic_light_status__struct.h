// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/GetTrafficLightStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'traffic_light_index'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GetTrafficLightStatus in the package morai_msgs.
typedef struct morai_msgs__msg__GetTrafficLightStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String traffic_light_index;
  int16_t traffic_light_type;
  int16_t traffic_light_status;
} morai_msgs__msg__GetTrafficLightStatus;

// Struct for a sequence of morai_msgs__msg__GetTrafficLightStatus.
typedef struct morai_msgs__msg__GetTrafficLightStatus__Sequence
{
  morai_msgs__msg__GetTrafficLightStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__GetTrafficLightStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__GET_TRAFFIC_LIGHT_STATUS__STRUCT_H_
