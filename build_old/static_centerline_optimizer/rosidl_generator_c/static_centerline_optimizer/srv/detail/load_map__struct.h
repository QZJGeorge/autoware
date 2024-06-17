// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from static_centerline_optimizer:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__STRUCT_H_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMap in the package static_centerline_optimizer.
typedef struct static_centerline_optimizer__srv__LoadMap_Request
{
  rosidl_runtime_c__String map;
} static_centerline_optimizer__srv__LoadMap_Request;

// Struct for a sequence of static_centerline_optimizer__srv__LoadMap_Request.
typedef struct static_centerline_optimizer__srv__LoadMap_Request__Sequence
{
  static_centerline_optimizer__srv__LoadMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} static_centerline_optimizer__srv__LoadMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMap in the package static_centerline_optimizer.
typedef struct static_centerline_optimizer__srv__LoadMap_Response
{
  rosidl_runtime_c__String message;
} static_centerline_optimizer__srv__LoadMap_Response;

// Struct for a sequence of static_centerline_optimizer__srv__LoadMap_Response.
typedef struct static_centerline_optimizer__srv__LoadMap_Response__Sequence
{
  static_centerline_optimizer__srv__LoadMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} static_centerline_optimizer__srv__LoadMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__LOAD_MAP__STRUCT_H_
