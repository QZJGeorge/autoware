// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'steering'
#include "tier4_external_api_msgs/msg/detail/steering__struct.h"
// Member 'turn_signal'
#include "tier4_external_api_msgs/msg/detail/turn_signal__struct.h"
// Member 'gear_shift'
#include "tier4_external_api_msgs/msg/detail/gear_shift__struct.h"

/// Struct defined in msg/VehicleStatus in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__VehicleStatus
{
  geometry_msgs__msg__Twist twist;
  tier4_external_api_msgs__msg__Steering steering;
  tier4_external_api_msgs__msg__TurnSignal turn_signal;
  tier4_external_api_msgs__msg__GearShift gear_shift;
} tier4_external_api_msgs__msg__VehicleStatus;

// Struct for a sequence of tier4_external_api_msgs__msg__VehicleStatus.
typedef struct tier4_external_api_msgs__msg__VehicleStatus__Sequence
{
  tier4_external_api_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
