// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_system_msgs/msg/detail/hazard_status__rosidl_typesupport_introspection_c.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_system_msgs/msg/detail/hazard_status__functions.h"
#include "tier4_system_msgs/msg/detail/hazard_status__struct.h"


// Include directives for member types
// Member `diagnostics_nf`
// Member `diagnostics_sf`
// Member `diagnostics_lf`
// Member `diagnostics_spf`
#include "diagnostic_msgs/msg/diagnostic_status.h"
// Member `diagnostics_nf`
// Member `diagnostics_sf`
// Member `diagnostics_lf`
// Member `diagnostics_spf`
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__msg__HazardStatus__init(message_memory);
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_fini_function(void * message_memory)
{
  tier4_system_msgs__msg__HazardStatus__fini(message_memory);
}

size_t tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_nf(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_nf(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_nf(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_nf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_nf(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_nf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_nf(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_nf(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

size_t tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_sf(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_sf(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_sf(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_sf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_sf(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_sf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_sf(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_sf(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

size_t tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_lf(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_lf(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_lf(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_lf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_lf(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_lf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_lf(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_lf(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

size_t tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_spf(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_spf(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_spf(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_spf(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_spf(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_spf(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_spf(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_spf(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[7] = {
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__HazardStatus, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__HazardStatus, emergency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_holding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__HazardStatus, emergency_holding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diagnostics_nf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__HazardStatus, diagnostics_nf),  // bytes offset in struct
    NULL,  // default value
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_nf,  // size() function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_nf,  // get_const(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_nf,  // get(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_nf,  // fetch(index, &value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_nf,  // assign(index, value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_nf  // resize(index) function pointer
  },
  {
    "diagnostics_sf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__HazardStatus, diagnostics_sf),  // bytes offset in struct
    NULL,  // default value
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_sf,  // size() function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_sf,  // get_const(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_sf,  // get(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_sf,  // fetch(index, &value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_sf,  // assign(index, value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_sf  // resize(index) function pointer
  },
  {
    "diagnostics_lf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__HazardStatus, diagnostics_lf),  // bytes offset in struct
    NULL,  // default value
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_lf,  // size() function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_lf,  // get_const(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_lf,  // get(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_lf,  // fetch(index, &value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_lf,  // assign(index, value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_lf  // resize(index) function pointer
  },
  {
    "diagnostics_spf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__HazardStatus, diagnostics_spf),  // bytes offset in struct
    NULL,  // default value
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diagnostics_spf,  // size() function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diagnostics_spf,  // get_const(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diagnostics_spf,  // get(index) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diagnostics_spf,  // fetch(index, &value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diagnostics_spf,  // assign(index, value) function pointer
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diagnostics_spf  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_members = {
  "tier4_system_msgs__msg",  // message namespace
  "HazardStatus",  // message name
  7,  // number of fields
  sizeof(tier4_system_msgs__msg__HazardStatus),
  tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array,  // message members
  tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle = {
  0,
  &tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, HazardStatus)() {
  tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  if (!tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle.typesupport_identifier) {
    tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
