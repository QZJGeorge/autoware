// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MoraiSimProcStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__STRUCT_H_

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
// Member 'latest_command_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MoraiSimProcStatus in the package morai_msgs.
typedef struct morai_msgs__msg__MoraiSimProcStatus
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Time latest_command_time;
  uint8_t command_result;
  uint8_t current_mode;
  uint8_t current_status;
} morai_msgs__msg__MoraiSimProcStatus;

// Struct for a sequence of morai_msgs__msg__MoraiSimProcStatus.
typedef struct morai_msgs__msg__MoraiSimProcStatus__Sequence
{
  morai_msgs__msg__MoraiSimProcStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MoraiSimProcStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__STRUCT_H_
