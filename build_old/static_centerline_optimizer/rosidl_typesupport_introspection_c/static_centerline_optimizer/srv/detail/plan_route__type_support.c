// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from static_centerline_optimizer:srv/PlanRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "static_centerline_optimizer/srv/detail/plan_route__rosidl_typesupport_introspection_c.h"
#include "static_centerline_optimizer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "static_centerline_optimizer/srv/detail/plan_route__functions.h"
#include "static_centerline_optimizer/srv/detail/plan_route__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  static_centerline_optimizer__srv__PlanRoute_Request__init(message_memory);
}

void static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_fini_function(void * message_memory)
{
  static_centerline_optimizer__srv__PlanRoute_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_member_array[2] = {
  {
    "start_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanRoute_Request, start_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanRoute_Request, end_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_members = {
  "static_centerline_optimizer__srv",  // message namespace
  "PlanRoute_Request",  // message name
  2,  // number of fields
  sizeof(static_centerline_optimizer__srv__PlanRoute_Request),
  static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_member_array,  // message members
  static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_type_support_handle = {
  0,
  &static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_static_centerline_optimizer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanRoute_Request)() {
  if (!static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_type_support_handle.typesupport_identifier) {
    static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &static_centerline_optimizer__srv__PlanRoute_Request__rosidl_typesupport_introspection_c__PlanRoute_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "static_centerline_optimizer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_route__functions.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_route__struct.h"


// Include directives for member types
// Member `lane_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  static_centerline_optimizer__srv__PlanRoute_Response__init(message_memory);
}

void static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_fini_function(void * message_memory)
{
  static_centerline_optimizer__srv__PlanRoute_Response__fini(message_memory);
}

size_t static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__size_function__PlanRoute_Response__lane_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__get_const_function__PlanRoute_Response__lane_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__get_function__PlanRoute_Response__lane_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__fetch_function__PlanRoute_Response__lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__get_const_function__PlanRoute_Response__lane_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__assign_function__PlanRoute_Response__lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__get_function__PlanRoute_Response__lane_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__resize_function__PlanRoute_Response__lane_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_member_array[2] = {
  {
    "lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanRoute_Response, lane_ids),  // bytes offset in struct
    NULL,  // default value
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__size_function__PlanRoute_Response__lane_ids,  // size() function pointer
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__get_const_function__PlanRoute_Response__lane_ids,  // get_const(index) function pointer
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__get_function__PlanRoute_Response__lane_ids,  // get(index) function pointer
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__fetch_function__PlanRoute_Response__lane_ids,  // fetch(index, &value) function pointer
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__assign_function__PlanRoute_Response__lane_ids,  // assign(index, value) function pointer
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__resize_function__PlanRoute_Response__lane_ids  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer__srv__PlanRoute_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_members = {
  "static_centerline_optimizer__srv",  // message namespace
  "PlanRoute_Response",  // message name
  2,  // number of fields
  sizeof(static_centerline_optimizer__srv__PlanRoute_Response),
  static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_member_array,  // message members
  static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_type_support_handle = {
  0,
  &static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_static_centerline_optimizer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanRoute_Response)() {
  if (!static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_type_support_handle.typesupport_identifier) {
    static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &static_centerline_optimizer__srv__PlanRoute_Response__rosidl_typesupport_introspection_c__PlanRoute_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "static_centerline_optimizer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "static_centerline_optimizer/srv/detail/plan_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_service_members = {
  "static_centerline_optimizer__srv",  // service namespace
  "PlanRoute",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_Request_message_type_support_handle,
  NULL  // response message
  // static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_Response_message_type_support_handle
};

static rosidl_service_type_support_t static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_service_type_support_handle = {
  0,
  &static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanRoute_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanRoute_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_static_centerline_optimizer
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanRoute)() {
  if (!static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_service_type_support_handle.typesupport_identifier) {
    static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanRoute_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, static_centerline_optimizer, srv, PlanRoute_Response)()->data;
  }

  return &static_centerline_optimizer__srv__detail__plan_route__rosidl_typesupport_introspection_c__PlanRoute_service_type_support_handle;
}
