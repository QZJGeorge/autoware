// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from static_centerline_optimizer:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__STRUCT_H_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PlanRoute in the package static_centerline_optimizer.
typedef struct static_centerline_optimizer__srv__PlanRoute_Request
{
  uint32_t start_lane_id;
  uint32_t end_lane_id;
} static_centerline_optimizer__srv__PlanRoute_Request;

// Struct for a sequence of static_centerline_optimizer__srv__PlanRoute_Request.
typedef struct static_centerline_optimizer__srv__PlanRoute_Request__Sequence
{
  static_centerline_optimizer__srv__PlanRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} static_centerline_optimizer__srv__PlanRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'lane_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanRoute in the package static_centerline_optimizer.
typedef struct static_centerline_optimizer__srv__PlanRoute_Response
{
  rosidl_runtime_c__uint32__Sequence lane_ids;
  rosidl_runtime_c__String message;
} static_centerline_optimizer__srv__PlanRoute_Response;

// Struct for a sequence of static_centerline_optimizer__srv__PlanRoute_Response.
typedef struct static_centerline_optimizer__srv__PlanRoute_Response__Sequence
{
  static_centerline_optimizer__srv__PlanRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} static_centerline_optimizer__srv__PlanRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_ROUTE__STRUCT_H_
