// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pandar_msgs:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__STRUCT_H_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__STRUCT_H_

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
// Member 'packets'
#include "pandar_msgs/msg/detail/pandar_packet__struct.h"

/// Struct defined in msg/PandarScan in the package pandar_msgs.
typedef struct pandar_msgs__msg__PandarScan
{
  std_msgs__msg__Header header;
  pandar_msgs__msg__PandarPacket__Sequence packets;
} pandar_msgs__msg__PandarScan;

// Struct for a sequence of pandar_msgs__msg__PandarScan.
typedef struct pandar_msgs__msg__PandarScan__Sequence
{
  pandar_msgs__msg__PandarScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pandar_msgs__msg__PandarScan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__STRUCT_H_
