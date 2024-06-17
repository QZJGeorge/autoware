// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:srv/MoraiTLInfoSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/srv/detail/morai_tl_info_srv__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/srv/detail/morai_tl_info_srv__functions.h"
#include "morai_msgs/srv/detail/morai_tl_info_srv__struct.h"


// Include directives for member types
// Member `request`
#include "morai_msgs/msg/morai_tl_index.h"
// Member `request`
#include "morai_msgs/msg/detail/morai_tl_index__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__srv__MoraiTLInfoSrv_Request__init(message_memory);
}

void morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_fini_function(void * message_memory)
{
  morai_msgs__srv__MoraiTLInfoSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__srv__MoraiTLInfoSrv_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_members = {
  "morai_msgs__srv",  // message namespace
  "MoraiTLInfoSrv_Request",  // message name
  1,  // number of fields
  sizeof(morai_msgs__srv__MoraiTLInfoSrv_Request),
  morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_member_array,  // message members
  morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_type_support_handle = {
  0,
  &morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiTLInfoSrv_Request)() {
  morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, MoraiTLIndex)();
  if (!morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_type_support_handle.typesupport_identifier) {
    morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__srv__MoraiTLInfoSrv_Request__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "morai_msgs/srv/detail/morai_tl_info_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "morai_msgs/srv/detail/morai_tl_info_srv__functions.h"
// already included above
// #include "morai_msgs/srv/detail/morai_tl_info_srv__struct.h"


// Include directives for member types
// Member `response`
#include "morai_msgs/msg/morai_tl_info.h"
// Member `response`
#include "morai_msgs/msg/detail/morai_tl_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__srv__MoraiTLInfoSrv_Response__init(message_memory);
}

void morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_fini_function(void * message_memory)
{
  morai_msgs__srv__MoraiTLInfoSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__srv__MoraiTLInfoSrv_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_members = {
  "morai_msgs__srv",  // message namespace
  "MoraiTLInfoSrv_Response",  // message name
  1,  // number of fields
  sizeof(morai_msgs__srv__MoraiTLInfoSrv_Response),
  morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_member_array,  // message members
  morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_type_support_handle = {
  0,
  &morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiTLInfoSrv_Response)() {
  morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, MoraiTLInfo)();
  if (!morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_type_support_handle.typesupport_identifier) {
    morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__srv__MoraiTLInfoSrv_Response__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "morai_msgs/srv/detail/morai_tl_info_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_service_members = {
  "morai_msgs__srv",  // service namespace
  "MoraiTLInfoSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Request_message_type_support_handle,
  NULL  // response message
  // morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_service_type_support_handle = {
  0,
  &morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiTLInfoSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiTLInfoSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiTLInfoSrv)() {
  if (!morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_service_type_support_handle.typesupport_identifier) {
    morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiTLInfoSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiTLInfoSrv_Response)()->data;
  }

  return &morai_msgs__srv__detail__morai_tl_info_srv__rosidl_typesupport_introspection_c__MoraiTLInfoSrv_service_type_support_handle;
}
