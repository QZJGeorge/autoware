// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/SaveSensorData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'custom_file_name'
// Member 'file_dir'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SaveSensorData in the package morai_msgs.
typedef struct morai_msgs__msg__SaveSensorData
{
  bool is_custom_file_name;
  rosidl_runtime_c__String custom_file_name;
  rosidl_runtime_c__String file_dir;
} morai_msgs__msg__SaveSensorData;

// Struct for a sequence of morai_msgs__msg__SaveSensorData.
typedef struct morai_msgs__msg__SaveSensorData__Sequence
{
  morai_msgs__msg__SaveSensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__SaveSensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__STRUCT_H_
