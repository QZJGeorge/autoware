// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_status'
#include "morai_msgs/msg/detail/ego_vehicle_status__struct.h"
// Member 'time'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WaitForTickResponse in the package morai_msgs.
typedef struct morai_msgs__msg__WaitForTickResponse
{
  bool tick_status;
  bool pause_status;
  uint64_t frame;
  morai_msgs__msg__EgoVehicleStatus vehicle_status;
  rosidl_runtime_c__String time;
} morai_msgs__msg__WaitForTickResponse;

// Struct for a sequence of morai_msgs__msg__WaitForTickResponse.
typedef struct morai_msgs__msg__WaitForTickResponse__Sequence
{
  morai_msgs__msg__WaitForTickResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__WaitForTickResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__STRUCT_H_
