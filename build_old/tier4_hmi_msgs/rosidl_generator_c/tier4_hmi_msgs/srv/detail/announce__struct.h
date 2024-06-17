// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_hmi_msgs:srv/Announce.idl
// generated code does not contain a copyright notice

#ifndef TIER4_HMI_MSGS__SRV__DETAIL__ANNOUNCE__STRUCT_H_
#define TIER4_HMI_MSGS__SRV__DETAIL__ANNOUNCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ENGAGE'.
enum
{
  tier4_hmi_msgs__srv__Announce_Request__ENGAGE = 1ul
};

/// Constant 'RESTART_ENGAGE'.
enum
{
  tier4_hmi_msgs__srv__Announce_Request__RESTART_ENGAGE = 2ul
};

/// Struct defined in srv/Announce in the package tier4_hmi_msgs.
typedef struct tier4_hmi_msgs__srv__Announce_Request
{
  uint32_t kind;
} tier4_hmi_msgs__srv__Announce_Request;

// Struct for a sequence of tier4_hmi_msgs__srv__Announce_Request.
typedef struct tier4_hmi_msgs__srv__Announce_Request__Sequence
{
  tier4_hmi_msgs__srv__Announce_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_hmi_msgs__srv__Announce_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/Announce in the package tier4_hmi_msgs.
typedef struct tier4_hmi_msgs__srv__Announce_Response
{
  tier4_external_api_msgs__msg__ResponseStatus status;
} tier4_hmi_msgs__srv__Announce_Response;

// Struct for a sequence of tier4_hmi_msgs__srv__Announce_Response.
typedef struct tier4_hmi_msgs__srv__Announce_Response__Sequence
{
  tier4_hmi_msgs__srv__Announce_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_hmi_msgs__srv__Announce_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_HMI_MSGS__SRV__DETAIL__ANNOUNCE__STRUCT_H_
