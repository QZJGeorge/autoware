// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/ClassifiedDiagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/classified_diagnostics__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/classified_diagnostics__functions.h"
#include "tier4_external_api_msgs/msg/detail/classified_diagnostics__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `diagnostics_notice`
#include "diagnostic_msgs/msg/diagnostic_status.h"
// Member `diagnostics_notice`
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__ClassifiedDiagnostics__init(message_memory);
}

void tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__ClassifiedDiagnostics__fini(message_memory);
}

size_t tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__size_function__ClassifiedDiagnostics__diagnostics_notice(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ClassifiedDiagnostics__diagnostics_notice(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__get_function__ClassifiedDiagnostics__diagnostics_notice(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ClassifiedDiagnostics__diagnostics_notice(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ClassifiedDiagnostics__diagnostics_notice(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__assign_function__ClassifiedDiagnostics__diagnostics_notice(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__get_function__ClassifiedDiagnostics__diagnostics_notice(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__resize_function__ClassifiedDiagnostics__diagnostics_notice(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__ClassifiedDiagnostics, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diagnostics_notice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__ClassifiedDiagnostics, diagnostics_notice),  // bytes offset in struct
    NULL,  // default value
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__size_function__ClassifiedDiagnostics__diagnostics_notice,  // size() function pointer
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__get_const_function__ClassifiedDiagnostics__diagnostics_notice,  // get_const(index) function pointer
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__get_function__ClassifiedDiagnostics__diagnostics_notice,  // get(index) function pointer
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__fetch_function__ClassifiedDiagnostics__diagnostics_notice,  // fetch(index, &value) function pointer
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__assign_function__ClassifiedDiagnostics__diagnostics_notice,  // assign(index, value) function pointer
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__resize_function__ClassifiedDiagnostics__diagnostics_notice  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "ClassifiedDiagnostics",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs__msg__ClassifiedDiagnostics),
  tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_member_array,  // message members
  tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_type_support_handle = {
  0,
  &tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, ClassifiedDiagnostics)() {
  tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  if (!tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_type_support_handle.typesupport_identifier) {
    tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_external_api_msgs__msg__ClassifiedDiagnostics__rosidl_typesupport_introspection_c__ClassifiedDiagnostics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
