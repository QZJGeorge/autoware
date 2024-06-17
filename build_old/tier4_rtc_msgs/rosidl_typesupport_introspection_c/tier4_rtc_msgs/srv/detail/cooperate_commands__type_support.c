// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_rtc_msgs:srv/CooperateCommands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_rtc_msgs/srv/detail/cooperate_commands__rosidl_typesupport_introspection_c.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_rtc_msgs/srv/detail/cooperate_commands__functions.h"
#include "tier4_rtc_msgs/srv/detail/cooperate_commands__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `commands`
#include "tier4_rtc_msgs/msg/cooperate_command.h"
// Member `commands`
#include "tier4_rtc_msgs/msg/detail/cooperate_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_rtc_msgs__srv__CooperateCommands_Request__init(message_memory);
}

void tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_fini_function(void * message_memory)
{
  tier4_rtc_msgs__srv__CooperateCommands_Request__fini(message_memory);
}

size_t tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__size_function__CooperateCommands_Request__commands(
  const void * untyped_member)
{
  const tier4_rtc_msgs__msg__CooperateCommand__Sequence * member =
    (const tier4_rtc_msgs__msg__CooperateCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__get_const_function__CooperateCommands_Request__commands(
  const void * untyped_member, size_t index)
{
  const tier4_rtc_msgs__msg__CooperateCommand__Sequence * member =
    (const tier4_rtc_msgs__msg__CooperateCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__get_function__CooperateCommands_Request__commands(
  void * untyped_member, size_t index)
{
  tier4_rtc_msgs__msg__CooperateCommand__Sequence * member =
    (tier4_rtc_msgs__msg__CooperateCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__fetch_function__CooperateCommands_Request__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_rtc_msgs__msg__CooperateCommand * item =
    ((const tier4_rtc_msgs__msg__CooperateCommand *)
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__get_const_function__CooperateCommands_Request__commands(untyped_member, index));
  tier4_rtc_msgs__msg__CooperateCommand * value =
    (tier4_rtc_msgs__msg__CooperateCommand *)(untyped_value);
  *value = *item;
}

void tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__assign_function__CooperateCommands_Request__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_rtc_msgs__msg__CooperateCommand * item =
    ((tier4_rtc_msgs__msg__CooperateCommand *)
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__get_function__CooperateCommands_Request__commands(untyped_member, index));
  const tier4_rtc_msgs__msg__CooperateCommand * value =
    (const tier4_rtc_msgs__msg__CooperateCommand *)(untyped_value);
  *item = *value;
}

bool tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__resize_function__CooperateCommands_Request__commands(
  void * untyped_member, size_t size)
{
  tier4_rtc_msgs__msg__CooperateCommand__Sequence * member =
    (tier4_rtc_msgs__msg__CooperateCommand__Sequence *)(untyped_member);
  tier4_rtc_msgs__msg__CooperateCommand__Sequence__fini(member);
  return tier4_rtc_msgs__msg__CooperateCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__srv__CooperateCommands_Request, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__srv__CooperateCommands_Request, commands),  // bytes offset in struct
    NULL,  // default value
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__size_function__CooperateCommands_Request__commands,  // size() function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__get_const_function__CooperateCommands_Request__commands,  // get_const(index) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__get_function__CooperateCommands_Request__commands,  // get(index) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__fetch_function__CooperateCommands_Request__commands,  // fetch(index, &value) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__assign_function__CooperateCommands_Request__commands,  // assign(index, value) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__resize_function__CooperateCommands_Request__commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_members = {
  "tier4_rtc_msgs__srv",  // message namespace
  "CooperateCommands_Request",  // message name
  2,  // number of fields
  sizeof(tier4_rtc_msgs__srv__CooperateCommands_Request),
  tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_member_array,  // message members
  tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_type_support_handle = {
  0,
  &tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, srv, CooperateCommands_Request)() {
  tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, CooperateCommand)();
  if (!tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_type_support_handle.typesupport_identifier) {
    tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_rtc_msgs__srv__CooperateCommands_Request__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tier4_rtc_msgs/srv/detail/cooperate_commands__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tier4_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tier4_rtc_msgs/srv/detail/cooperate_commands__functions.h"
// already included above
// #include "tier4_rtc_msgs/srv/detail/cooperate_commands__struct.h"


// Include directives for member types
// Member `responses`
#include "tier4_rtc_msgs/msg/cooperate_response.h"
// Member `responses`
#include "tier4_rtc_msgs/msg/detail/cooperate_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_rtc_msgs__srv__CooperateCommands_Response__init(message_memory);
}

void tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_fini_function(void * message_memory)
{
  tier4_rtc_msgs__srv__CooperateCommands_Response__fini(message_memory);
}

size_t tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__size_function__CooperateCommands_Response__responses(
  const void * untyped_member)
{
  const tier4_rtc_msgs__msg__CooperateResponse__Sequence * member =
    (const tier4_rtc_msgs__msg__CooperateResponse__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__get_const_function__CooperateCommands_Response__responses(
  const void * untyped_member, size_t index)
{
  const tier4_rtc_msgs__msg__CooperateResponse__Sequence * member =
    (const tier4_rtc_msgs__msg__CooperateResponse__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__get_function__CooperateCommands_Response__responses(
  void * untyped_member, size_t index)
{
  tier4_rtc_msgs__msg__CooperateResponse__Sequence * member =
    (tier4_rtc_msgs__msg__CooperateResponse__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__fetch_function__CooperateCommands_Response__responses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_rtc_msgs__msg__CooperateResponse * item =
    ((const tier4_rtc_msgs__msg__CooperateResponse *)
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__get_const_function__CooperateCommands_Response__responses(untyped_member, index));
  tier4_rtc_msgs__msg__CooperateResponse * value =
    (tier4_rtc_msgs__msg__CooperateResponse *)(untyped_value);
  *value = *item;
}

void tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__assign_function__CooperateCommands_Response__responses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_rtc_msgs__msg__CooperateResponse * item =
    ((tier4_rtc_msgs__msg__CooperateResponse *)
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__get_function__CooperateCommands_Response__responses(untyped_member, index));
  const tier4_rtc_msgs__msg__CooperateResponse * value =
    (const tier4_rtc_msgs__msg__CooperateResponse *)(untyped_value);
  *item = *value;
}

bool tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__resize_function__CooperateCommands_Response__responses(
  void * untyped_member, size_t size)
{
  tier4_rtc_msgs__msg__CooperateResponse__Sequence * member =
    (tier4_rtc_msgs__msg__CooperateResponse__Sequence *)(untyped_member);
  tier4_rtc_msgs__msg__CooperateResponse__Sequence__fini(member);
  return tier4_rtc_msgs__msg__CooperateResponse__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_member_array[1] = {
  {
    "responses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__srv__CooperateCommands_Response, responses),  // bytes offset in struct
    NULL,  // default value
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__size_function__CooperateCommands_Response__responses,  // size() function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__get_const_function__CooperateCommands_Response__responses,  // get_const(index) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__get_function__CooperateCommands_Response__responses,  // get(index) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__fetch_function__CooperateCommands_Response__responses,  // fetch(index, &value) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__assign_function__CooperateCommands_Response__responses,  // assign(index, value) function pointer
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__resize_function__CooperateCommands_Response__responses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_members = {
  "tier4_rtc_msgs__srv",  // message namespace
  "CooperateCommands_Response",  // message name
  1,  // number of fields
  sizeof(tier4_rtc_msgs__srv__CooperateCommands_Response),
  tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_member_array,  // message members
  tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_type_support_handle = {
  0,
  &tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, srv, CooperateCommands_Response)() {
  tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, CooperateResponse)();
  if (!tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_type_support_handle.typesupport_identifier) {
    tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_rtc_msgs__srv__CooperateCommands_Response__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tier4_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tier4_rtc_msgs/srv/detail/cooperate_commands__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_service_members = {
  "tier4_rtc_msgs__srv",  // service namespace
  "CooperateCommands",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_Request_message_type_support_handle,
  NULL  // response message
  // tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_Response_message_type_support_handle
};

static rosidl_service_type_support_t tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_service_type_support_handle = {
  0,
  &tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, srv, CooperateCommands_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, srv, CooperateCommands_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_rtc_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, srv, CooperateCommands)() {
  if (!tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_service_type_support_handle.typesupport_identifier) {
    tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, srv, CooperateCommands_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, srv, CooperateCommands_Response)()->data;
  }

  return &tier4_rtc_msgs__srv__detail__cooperate_commands__rosidl_typesupport_introspection_c__CooperateCommands_service_type_support_handle;
}
