// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_system_msgs:srv/OperateMrm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_system_msgs/srv/detail/operate_mrm__rosidl_typesupport_introspection_c.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_system_msgs/srv/detail/operate_mrm__functions.h"
#include "tier4_system_msgs/srv/detail/operate_mrm__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__srv__OperateMrm_Request__init(message_memory);
}

void tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_fini_function(void * message_memory)
{
  tier4_system_msgs__srv__OperateMrm_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__srv__OperateMrm_Request, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__srv__OperateMrm_Request, operate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_members = {
  "tier4_system_msgs__srv",  // message namespace
  "OperateMrm_Request",  // message name
  2,  // number of fields
  sizeof(tier4_system_msgs__srv__OperateMrm_Request),
  tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_member_array,  // message members
  tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_type_support_handle = {
  0,
  &tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, OperateMrm_Request)() {
  tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_type_support_handle.typesupport_identifier) {
    tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_system_msgs__srv__OperateMrm_Request__rosidl_typesupport_introspection_c__OperateMrm_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tier4_system_msgs/srv/detail/operate_mrm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tier4_system_msgs/srv/detail/operate_mrm__functions.h"
// already included above
// #include "tier4_system_msgs/srv/detail/operate_mrm__struct.h"


// Include directives for member types
// Member `response`
#include "autoware_common_msgs/msg/response_status.h"
// Member `response`
#include "autoware_common_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__srv__OperateMrm_Response__init(message_memory);
}

void tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_fini_function(void * message_memory)
{
  tier4_system_msgs__srv__OperateMrm_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__srv__OperateMrm_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_members = {
  "tier4_system_msgs__srv",  // message namespace
  "OperateMrm_Response",  // message name
  1,  // number of fields
  sizeof(tier4_system_msgs__srv__OperateMrm_Response),
  tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_member_array,  // message members
  tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_type_support_handle = {
  0,
  &tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, OperateMrm_Response)() {
  tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_common_msgs, msg, ResponseStatus)();
  if (!tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_type_support_handle.typesupport_identifier) {
    tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_system_msgs__srv__OperateMrm_Response__rosidl_typesupport_introspection_c__OperateMrm_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tier4_system_msgs/srv/detail/operate_mrm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_service_members = {
  "tier4_system_msgs__srv",  // service namespace
  "OperateMrm",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_Request_message_type_support_handle,
  NULL  // response message
  // tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_Response_message_type_support_handle
};

static rosidl_service_type_support_t tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_service_type_support_handle = {
  0,
  &tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, OperateMrm_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, OperateMrm_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, OperateMrm)() {
  if (!tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_service_type_support_handle.typesupport_identifier) {
    tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, OperateMrm_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, OperateMrm_Response)()->data;
  }

  return &tier4_system_msgs__srv__detail__operate_mrm__rosidl_typesupport_introspection_c__OperateMrm_service_type_support_handle;
}
