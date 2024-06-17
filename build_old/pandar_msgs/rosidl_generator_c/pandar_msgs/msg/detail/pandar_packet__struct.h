// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pandar_msgs:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__STRUCT_H_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__STRUCT_H_

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

/// Struct defined in msg/PandarPacket in the package pandar_msgs.
typedef struct pandar_msgs__msg__PandarPacket
{
  builtin_interfaces__msg__Time stamp;
  uint8_t data[1500];
  uint32_t size;
} pandar_msgs__msg__PandarPacket;

// Struct for a sequence of pandar_msgs__msg__PandarPacket.
typedef struct pandar_msgs__msg__PandarPacket__Sequence
{
  pandar_msgs__msg__PandarPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pandar_msgs__msg__PandarPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__STRUCT_H_
