// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__STRUCT_H_
#define STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/PlanPath in the package static_centerline_optimizer.
typedef struct static_centerline_optimizer__srv__PlanPath_Request
{
  uint32_t map_id;
  rosidl_runtime_c__uint32__Sequence route;
} static_centerline_optimizer__srv__PlanPath_Request;

// Struct for a sequence of static_centerline_optimizer__srv__PlanPath_Request.
typedef struct static_centerline_optimizer__srv__PlanPath_Request__Sequence
{
  static_centerline_optimizer__srv__PlanPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} static_centerline_optimizer__srv__PlanPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'points_with_lane_ids'
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'unconnected_lane_ids'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/PlanPath in the package static_centerline_optimizer.
typedef struct static_centerline_optimizer__srv__PlanPath_Response
{
  static_centerline_optimizer__msg__PointsWithLaneId__Sequence points_with_lane_ids;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__uint32__Sequence unconnected_lane_ids;
} static_centerline_optimizer__srv__PlanPath_Response;

// Struct for a sequence of static_centerline_optimizer__srv__PlanPath_Response.
typedef struct static_centerline_optimizer__srv__PlanPath_Response__Sequence
{
  static_centerline_optimizer__srv__PlanPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} static_centerline_optimizer__srv__PlanPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATIC_CENTERLINE_OPTIMIZER__SRV__DETAIL__PLAN_PATH__STRUCT_H_
