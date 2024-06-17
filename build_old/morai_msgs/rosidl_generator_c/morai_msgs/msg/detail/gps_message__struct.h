// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/GPSMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/GPSMessage in the package morai_msgs.
typedef struct morai_msgs__msg__GPSMessage
{
  std_msgs__msg__Header header;
  double latitude;
  double longitude;
  double altitude;
  double east_offset;
  double north_offset;
  int16_t status;
} morai_msgs__msg__GPSMessage;

// Struct for a sequence of morai_msgs__msg__GPSMessage.
typedef struct morai_msgs__msg__GPSMessage__Sequence
{
  morai_msgs__msg__GPSMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__GPSMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__GPS_MESSAGE__STRUCT_H_
