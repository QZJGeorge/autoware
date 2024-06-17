// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

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
// Member 'gear'
#include "autoware_adapi_v1_msgs/msg/detail/gear__struct.h"
// Member 'turn_indicators'
#include "autoware_adapi_v1_msgs/msg/detail/turn_indicators__struct.h"
// Member 'hazard_lights'
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__struct.h"

/// Struct defined in msg/VehicleStatus in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__VehicleStatus
{
  builtin_interfaces__msg__Time stamp;
  autoware_adapi_v1_msgs__msg__Gear gear;
  autoware_adapi_v1_msgs__msg__TurnIndicators turn_indicators;
  autoware_adapi_v1_msgs__msg__HazardLights hazard_lights;
  double steering_tire_angle;
  /// Battery percentage or fuel percentage, it will depends on the vehicle.
  float energy_percentage;
} autoware_adapi_v1_msgs__msg__VehicleStatus;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__VehicleStatus.
typedef struct autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence
{
  autoware_adapi_v1_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
