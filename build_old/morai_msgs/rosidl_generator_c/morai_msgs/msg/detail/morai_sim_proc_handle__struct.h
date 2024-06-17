// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MoraiSimProcHandle.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rosbag_file_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MoraiSimProcHandle in the package morai_msgs.
typedef struct morai_msgs__msg__MoraiSimProcHandle
{
  uint8_t sim_process_status;
  int16_t replay_option;
  rosidl_runtime_c__String rosbag_file_name;
  int16_t replay_target_option;
  int32_t replay_speed;
  int32_t start_time;
} morai_msgs__msg__MoraiSimProcHandle;

// Struct for a sequence of morai_msgs__msg__MoraiSimProcHandle.
typedef struct morai_msgs__msg__MoraiSimProcHandle__Sequence
{
  morai_msgs__msg__MoraiSimProcHandle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MoraiSimProcHandle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__STRUCT_H_
