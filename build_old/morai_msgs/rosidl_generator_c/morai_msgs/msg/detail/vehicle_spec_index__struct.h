// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/VehicleSpecIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleSpecIndex in the package morai_msgs.
typedef struct morai_msgs__msg__VehicleSpecIndex
{
  int32_t unique_id;
} morai_msgs__msg__VehicleSpecIndex;

// Struct for a sequence of morai_msgs__msg__VehicleSpecIndex.
typedef struct morai_msgs__msg__VehicleSpecIndex__Sequence
{
  morai_msgs__msg__VehicleSpecIndex * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__VehicleSpecIndex__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__STRUCT_H_
