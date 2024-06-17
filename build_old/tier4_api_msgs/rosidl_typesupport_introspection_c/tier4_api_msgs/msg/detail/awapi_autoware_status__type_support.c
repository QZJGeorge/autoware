// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__rosidl_typesupport_introspection_c.h"
#include "tier4_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__functions.h"
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `autoware_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `hazard_status`
#include "tier4_system_msgs/msg/hazard_status_stamped.h"
// Member `hazard_status`
#include "tier4_system_msgs/msg/detail/hazard_status_stamped__rosidl_typesupport_introspection_c.h"
// Member `stop_reason`
#include "tier4_planning_msgs/msg/stop_reason_array.h"
// Member `stop_reason`
#include "tier4_planning_msgs/msg/detail/stop_reason_array__rosidl_typesupport_introspection_c.h"
// Member `diagnostics`
// Member `error_diagnostics`
#include "diagnostic_msgs/msg/diagnostic_status.h"
// Member `diagnostics`
// Member `error_diagnostics`
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_api_msgs__msg__AwapiAutowareStatus__init(message_memory);
}

void tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_fini_function(void * message_memory)
{
  tier4_api_msgs__msg__AwapiAutowareStatus__fini(message_memory);
}

size_t tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__size_function__AwapiAutowareStatus__diagnostics(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_const_function__AwapiAutowareStatus__diagnostics(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_function__AwapiAutowareStatus__diagnostics(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__fetch_function__AwapiAutowareStatus__diagnostics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_const_function__AwapiAutowareStatus__diagnostics(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__assign_function__AwapiAutowareStatus__diagnostics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_function__AwapiAutowareStatus__diagnostics(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__resize_function__AwapiAutowareStatus__diagnostics(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

size_t tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__size_function__AwapiAutowareStatus__error_diagnostics(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_const_function__AwapiAutowareStatus__error_diagnostics(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_function__AwapiAutowareStatus__error_diagnostics(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__fetch_function__AwapiAutowareStatus__error_diagnostics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_const_function__AwapiAutowareStatus__error_diagnostics(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__assign_function__AwapiAutowareStatus__error_diagnostics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_function__AwapiAutowareStatus__error_diagnostics(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__resize_function__AwapiAutowareStatus__error_diagnostics(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "autoware_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, autoware_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gate_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, gate_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stopped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, emergency_stopped),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, current_max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hazard_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, hazard_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, stop_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diagnostics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, diagnostics),  // bytes offset in struct
    NULL,  // default value
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__size_function__AwapiAutowareStatus__diagnostics,  // size() function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_const_function__AwapiAutowareStatus__diagnostics,  // get_const(index) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_function__AwapiAutowareStatus__diagnostics,  // get(index) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__fetch_function__AwapiAutowareStatus__diagnostics,  // fetch(index, &value) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__assign_function__AwapiAutowareStatus__diagnostics,  // assign(index, value) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__resize_function__AwapiAutowareStatus__diagnostics  // resize(index) function pointer
  },
  {
    "error_diagnostics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, error_diagnostics),  // bytes offset in struct
    NULL,  // default value
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__size_function__AwapiAutowareStatus__error_diagnostics,  // size() function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_const_function__AwapiAutowareStatus__error_diagnostics,  // get_const(index) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__get_function__AwapiAutowareStatus__error_diagnostics,  // get(index) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__fetch_function__AwapiAutowareStatus__error_diagnostics,  // fetch(index, &value) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__assign_function__AwapiAutowareStatus__error_diagnostics,  // assign(index, value) function pointer
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__resize_function__AwapiAutowareStatus__error_diagnostics  // resize(index) function pointer
  },
  {
    "autonomous_overridden",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, autonomous_overridden),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arrived_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__AwapiAutowareStatus, arrived_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_members = {
  "tier4_api_msgs__msg",  // message namespace
  "AwapiAutowareStatus",  // message name
  12,  // number of fields
  sizeof(tier4_api_msgs__msg__AwapiAutowareStatus),
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_member_array,  // message members
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_type_support_handle = {
  0,
  &tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_api_msgs, msg, AwapiAutowareStatus)() {
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, HazardStatusStamped)();
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, StopReasonArray)();
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  if (!tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_type_support_handle.typesupport_identifier) {
    tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_api_msgs__msg__AwapiAutowareStatus__rosidl_typesupport_introspection_c__AwapiAutowareStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
