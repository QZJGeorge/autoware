// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_rtc_msgs:msg/CooperateStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_rtc_msgs/msg/detail/cooperate_status__rosidl_typesupport_introspection_c.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status__functions.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `module`
#include "tier4_rtc_msgs/msg/module.h"
// Member `module`
#include "tier4_rtc_msgs/msg/detail/module__rosidl_typesupport_introspection_c.h"
// Member `command_status`
#include "tier4_rtc_msgs/msg/command.h"
// Member `command_status`
#include "tier4_rtc_msgs/msg/detail/command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_rtc_msgs__msg__CooperateStatus__init(message_memory);
}

void tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_fini_function(void * message_memory)
{
  tier4_rtc_msgs__msg__CooperateStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_member_array[8] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "module",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, module),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, safe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, command_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, auto_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, start_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finish_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatus, finish_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_members = {
  "tier4_rtc_msgs__msg",  // message namespace
  "CooperateStatus",  // message name
  8,  // number of fields
  sizeof(tier4_rtc_msgs__msg__CooperateStatus),
  tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_member_array,  // message members
  tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_type_support_handle = {
  0,
  &tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, CooperateStatus)() {
  tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, Module)();
  tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, Command)();
  if (!tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_type_support_handle.typesupport_identifier) {
    tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_rtc_msgs__msg__CooperateStatus__rosidl_typesupport_introspection_c__CooperateStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
