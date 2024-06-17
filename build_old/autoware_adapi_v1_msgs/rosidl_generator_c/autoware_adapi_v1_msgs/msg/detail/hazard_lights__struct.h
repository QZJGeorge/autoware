// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/HazardLights.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__HAZARD_LIGHTS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__HAZARD_LIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_adapi_v1_msgs__msg__HazardLights__UNKNOWN = 0
};

/// Constant 'DISABLE'.
enum
{
  autoware_adapi_v1_msgs__msg__HazardLights__DISABLE = 1
};

/// Constant 'ENABLE'.
enum
{
  autoware_adapi_v1_msgs__msg__HazardLights__ENABLE = 2
};

/// Struct defined in msg/HazardLights in the package autoware_adapi_v1_msgs.
/**
  * constants
 */
typedef struct autoware_adapi_v1_msgs__msg__HazardLights
{
  uint8_t status;
} autoware_adapi_v1_msgs__msg__HazardLights;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__HazardLights.
typedef struct autoware_adapi_v1_msgs__msg__HazardLights__Sequence
{
  autoware_adapi_v1_msgs__msg__HazardLights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__HazardLights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__HAZARD_LIGHTS__STRUCT_H_
