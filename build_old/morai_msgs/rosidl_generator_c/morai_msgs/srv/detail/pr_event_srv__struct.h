// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:srv/PREventSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__PR_EVENT_SRV__STRUCT_H_
#define MORAI_MSGS__SRV__DETAIL__PR_EVENT_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/pr_event__struct.h"

/// Struct defined in srv/PREventSrv in the package morai_msgs.
typedef struct morai_msgs__srv__PREventSrv_Request
{
  morai_msgs__msg__PREvent request;
} morai_msgs__srv__PREventSrv_Request;

// Struct for a sequence of morai_msgs__srv__PREventSrv_Request.
typedef struct morai_msgs__srv__PREventSrv_Request__Sequence
{
  morai_msgs__srv__PREventSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__srv__PREventSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "morai_msgs/msg/detail/pr_event__struct.h"

/// Struct defined in srv/PREventSrv in the package morai_msgs.
typedef struct morai_msgs__srv__PREventSrv_Response
{
  morai_msgs__msg__PREvent response;
} morai_msgs__srv__PREventSrv_Response;

// Struct for a sequence of morai_msgs__srv__PREventSrv_Response.
typedef struct morai_msgs__srv__PREventSrv_Response__Sequence
{
  morai_msgs__srv__PREventSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__srv__PREventSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__SRV__DETAIL__PR_EVENT_SRV__STRUCT_H_
