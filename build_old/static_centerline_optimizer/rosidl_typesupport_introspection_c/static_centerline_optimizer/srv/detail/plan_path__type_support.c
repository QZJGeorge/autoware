// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "static_centerline_optimizer/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"
#include "static_centerline_optimizer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "static_centerline_optimizer/srv/detail/plan_path__functions.h"
#include "static_centerline_optimizer/srv/detail/plan_path__struct.h"


// Include directives for member types
// Member `route`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  static_centerline_optimizer__srv__PlanPath_Request__init(message_memory);
}

void static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_fini_function(void * message_memory)
{
  static_centerline_optimizer__srv__PlanPath_Request__fini(message_memory);
}

size_t static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__size_function__PlanPath_Request__route(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Request__route(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__get_function__PlanPath_Request__route(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Request__route(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Request__route(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__assign_function__PlanPath_Request__route(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__get_function__PlanPath_Request__route(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__resize_function__PlanPath_Request__route(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_member_array[2] = {
  {
    "map_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanPath_Request, map_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanPath_Request, route),  // bytes offset in struct
    NULL,  // default value
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__size_function__PlanPath_Request__route,  // size() function pointer
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Request__route,  // get_const(index) function pointer
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__get_function__PlanPath_Request__route,  // get(index) function pointer
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Request__route,  // fetch(index, &value) function pointer
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__assign_function__PlanPath_Request__route,  // assign(index, value) function pointer
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__resize_function__PlanPath_Request__route  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_members = {
  "static_centerline_optimizer__srv",  // message namespace
  "PlanPath_Request",  // message name
  2,  // number of fields
  sizeof(static_centerline_optimizer__srv__PlanPath_Request),
  static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_member_array,  // message members
  static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle = {
  0,
  &static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_static_centerline_optimizer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanPath_Request)() {
  if (!static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle.typesupport_identifier) {
    static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &static_centerline_optimizer__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "static_centerline_optimizer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_path__functions.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_path__struct.h"


// Include directives for member types
// Member `points_with_lane_ids`
#include "static_centerline_optimizer/msg/points_with_lane_id.h"
// Member `points_with_lane_ids`
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `unconnected_lane_ids`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  static_centerline_optimizer__srv__PlanPath_Response__init(message_memory);
}

void static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_fini_function(void * message_memory)
{
  static_centerline_optimizer__srv__PlanPath_Response__fini(message_memory);
}

size_t static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__size_function__PlanPath_Response__points_with_lane_ids(
  const void * untyped_member)
{
  const static_centerline_optimizer__msg__PointsWithLaneId__Sequence * member =
    (const static_centerline_optimizer__msg__PointsWithLaneId__Sequence *)(untyped_member);
  return member->size;
}

const void * static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Response__points_with_lane_ids(
  const void * untyped_member, size_t index)
{
  const static_centerline_optimizer__msg__PointsWithLaneId__Sequence * member =
    (const static_centerline_optimizer__msg__PointsWithLaneId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_function__PlanPath_Response__points_with_lane_ids(
  void * untyped_member, size_t index)
{
  static_centerline_optimizer__msg__PointsWithLaneId__Sequence * member =
    (static_centerline_optimizer__msg__PointsWithLaneId__Sequence *)(untyped_member);
  return &member->data[index];
}

void static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Response__points_with_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const static_centerline_optimizer__msg__PointsWithLaneId * item =
    ((const static_centerline_optimizer__msg__PointsWithLaneId *)
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Response__points_with_lane_ids(untyped_member, index));
  static_centerline_optimizer__msg__PointsWithLaneId * value =
    (static_centerline_optimizer__msg__PointsWithLaneId *)(untyped_value);
  *value = *item;
}

void static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__assign_function__PlanPath_Response__points_with_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  static_centerline_optimizer__msg__PointsWithLaneId * item =
    ((static_centerline_optimizer__msg__PointsWithLaneId *)
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_function__PlanPath_Response__points_with_lane_ids(untyped_member, index));
  const static_centerline_optimizer__msg__PointsWithLaneId * value =
    (const static_centerline_optimizer__msg__PointsWithLaneId *)(untyped_value);
  *item = *value;
}

bool static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__resize_function__PlanPath_Response__points_with_lane_ids(
  void * untyped_member, size_t size)
{
  static_centerline_optimizer__msg__PointsWithLaneId__Sequence * member =
    (static_centerline_optimizer__msg__PointsWithLaneId__Sequence *)(untyped_member);
  static_centerline_optimizer__msg__PointsWithLaneId__Sequence__fini(member);
  return static_centerline_optimizer__msg__PointsWithLaneId__Sequence__init(member, size);
}

size_t static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__size_function__PlanPath_Response__unconnected_lane_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Response__unconnected_lane_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_function__PlanPath_Response__unconnected_lane_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Response__unconnected_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Response__unconnected_lane_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__assign_function__PlanPath_Response__unconnected_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_function__PlanPath_Response__unconnected_lane_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__resize_function__PlanPath_Response__unconnected_lane_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_member_array[3] = {
  {
    "points_with_lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanPath_Response, points_with_lane_ids),  // bytes offset in struct
    NULL,  // default value
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__size_function__PlanPath_Response__points_with_lane_ids,  // size() function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Response__points_with_lane_ids,  // get_const(index) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_function__PlanPath_Response__points_with_lane_ids,  // get(index) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Response__points_with_lane_ids,  // fetch(index, &value) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__assign_function__PlanPath_Response__points_with_lane_ids,  // assign(index, value) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__resize_function__PlanPath_Response__points_with_lane_ids  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanPath_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unconnected_lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanPath_Response, unconnected_lane_ids),  // bytes offset in struct
    NULL,  // default value
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__size_function__PlanPath_Response__unconnected_lane_ids,  // size() function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Response__unconnected_lane_ids,  // get_const(index) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__get_function__PlanPath_Response__unconnected_lane_ids,  // get(index) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Response__unconnected_lane_ids,  // fetch(index, &value) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__assign_function__PlanPath_Response__unconnected_lane_ids,  // assign(index, value) function pointer
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__resize_function__PlanPath_Response__unconnected_lane_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_members = {
  "static_centerline_optimizer__srv",  // message namespace
  "PlanPath_Response",  // message name
  3,  // number of fields
  sizeof(static_centerline_optimizer__srv__PlanPath_Response),
  static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_member_array,  // message members
  static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle = {
  0,
  &static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_static_centerline_optimizer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanPath_Response)() {
  static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, msg, PointsWithLaneId)();
  if (!static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle.typesupport_identifier) {
    static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &static_centerline_optimizer__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "static_centerline_optimizer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_members = {
  "static_centerline_optimizer__srv",  // service namespace
  "PlanPath",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle,
  NULL  // response message
  // static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle
};

static rosidl_service_type_support_t static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle = {
  0,
  &static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanPath_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanPath_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_static_centerline_optimizer
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanPath)() {
  if (!static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle.typesupport_identifier) {
    static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanPath_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanPath_Response)()->data;
  }

  return &static_centerline_optimizer__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle;
}
