// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/ServiceLog.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLIENT_REQUEST'.
enum
{
  tier4_system_msgs__msg__ServiceLog__CLIENT_REQUEST = 1
};

/// Constant 'SERVER_REQUEST'.
enum
{
  tier4_system_msgs__msg__ServiceLog__SERVER_REQUEST = 2
};

/// Constant 'SERVER_RESPONSE'.
enum
{
  tier4_system_msgs__msg__ServiceLog__SERVER_RESPONSE = 3
};

/// Constant 'CLIENT_RESPONSE'.
enum
{
  tier4_system_msgs__msg__ServiceLog__CLIENT_RESPONSE = 4
};

/// Constant 'ERROR_UNREADY'.
enum
{
  tier4_system_msgs__msg__ServiceLog__ERROR_UNREADY = 5
};

/// Constant 'ERROR_TIMEOUT'.
enum
{
  tier4_system_msgs__msg__ServiceLog__ERROR_TIMEOUT = 6
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'name'
// Member 'node'
// Member 'yaml'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ServiceLog in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__ServiceLog
{
  builtin_interfaces__msg__Time stamp;
  uint8_t type;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String node;
  rosidl_runtime_c__String yaml;
} tier4_system_msgs__msg__ServiceLog;

// Struct for a sequence of tier4_system_msgs__msg__ServiceLog.
typedef struct tier4_system_msgs__msg__ServiceLog__Sequence
{
  tier4_system_msgs__msg__ServiceLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__ServiceLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__SERVICE_LOG__STRUCT_H_
