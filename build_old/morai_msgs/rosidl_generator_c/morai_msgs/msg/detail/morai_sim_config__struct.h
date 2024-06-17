// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MoraiSimConfig.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_config_file_name'
// Member 'publisher_list'
// Member 'subscriber_list'
// Member 'service_list'
// Member 'camera_list'
// Member 'gps_list'
// Member 'imu_list'
// Member 'lidar_list'
// Member 'radar_list'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MoraiSimConfig in the package morai_msgs.
typedef struct morai_msgs__msg__MoraiSimConfig
{
  rosidl_runtime_c__String sensor_config_file_name;
  rosidl_runtime_c__String publisher_list;
  rosidl_runtime_c__String subscriber_list;
  rosidl_runtime_c__String service_list;
  rosidl_runtime_c__String camera_list;
  rosidl_runtime_c__String gps_list;
  rosidl_runtime_c__String imu_list;
  rosidl_runtime_c__String lidar_list;
  rosidl_runtime_c__String radar_list;
} morai_msgs__msg__MoraiSimConfig;

// Struct for a sequence of morai_msgs__msg__MoraiSimConfig.
typedef struct morai_msgs__msg__MoraiSimConfig__Sequence
{
  morai_msgs__msg__MoraiSimConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MoraiSimConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__STRUCT_H_
