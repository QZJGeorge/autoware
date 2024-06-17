// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:srv/ChangeOperationMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__STRUCT_H_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP'.
enum
{
  tier4_system_msgs__srv__ChangeOperationMode_Request__STOP = 1
};

/// Constant 'AUTONOMOUS'.
enum
{
  tier4_system_msgs__srv__ChangeOperationMode_Request__AUTONOMOUS = 2
};

/// Constant 'LOCAL'.
enum
{
  tier4_system_msgs__srv__ChangeOperationMode_Request__LOCAL = 3
};

/// Constant 'REMOTE'.
enum
{
  tier4_system_msgs__srv__ChangeOperationMode_Request__REMOTE = 4
};

/// Struct defined in srv/ChangeOperationMode in the package tier4_system_msgs.
typedef struct tier4_system_msgs__srv__ChangeOperationMode_Request
{
  uint16_t mode;
} tier4_system_msgs__srv__ChangeOperationMode_Request;

// Struct for a sequence of tier4_system_msgs__srv__ChangeOperationMode_Request.
typedef struct tier4_system_msgs__srv__ChangeOperationMode_Request__Sequence
{
  tier4_system_msgs__srv__ChangeOperationMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__srv__ChangeOperationMode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/ChangeOperationMode in the package tier4_system_msgs.
typedef struct tier4_system_msgs__srv__ChangeOperationMode_Response
{
  autoware_common_msgs__msg__ResponseStatus status;
} tier4_system_msgs__srv__ChangeOperationMode_Response;

// Struct for a sequence of tier4_system_msgs__srv__ChangeOperationMode_Response.
typedef struct tier4_system_msgs__srv__ChangeOperationMode_Response__Sequence
{
  tier4_system_msgs__srv__ChangeOperationMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__srv__ChangeOperationMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__STRUCT_H_
