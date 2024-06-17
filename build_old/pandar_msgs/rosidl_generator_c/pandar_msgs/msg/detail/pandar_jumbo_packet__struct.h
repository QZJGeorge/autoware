// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pandar_msgs:msg/PandarJumboPacket.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_JUMBO_PACKET__STRUCT_H_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_JUMBO_PACKET__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PandarJumboPacket in the package pandar_msgs.
typedef struct pandar_msgs__msg__PandarJumboPacket
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__uint8__Sequence data;
  uint32_t size;
} pandar_msgs__msg__PandarJumboPacket;

// Struct for a sequence of pandar_msgs__msg__PandarJumboPacket.
typedef struct pandar_msgs__msg__PandarJumboPacket__Sequence
{
  pandar_msgs__msg__PandarJumboPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pandar_msgs__msg__PandarJumboPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_JUMBO_PACKET__STRUCT_H_
