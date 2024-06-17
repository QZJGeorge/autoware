// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/Scenario.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/scenario__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/scenario__functions.h"
#include "tier4_planning_msgs/msg/detail/scenario__struct.h"


// Include directives for member types
// Member `current_scenario`
// Member `activating_scenarios`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__Scenario__init(message_memory);
}

void tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__Scenario__fini(message_memory);
}

size_t tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__size_function__Scenario__activating_scenarios(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__get_const_function__Scenario__activating_scenarios(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__get_function__Scenario__activating_scenarios(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__fetch_function__Scenario__activating_scenarios(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__get_const_function__Scenario__activating_scenarios(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__assign_function__Scenario__activating_scenarios(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__get_function__Scenario__activating_scenarios(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__resize_function__Scenario__activating_scenarios(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_member_array[2] = {
  {
    "current_scenario",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__Scenario, current_scenario),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "activating_scenarios",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__Scenario, activating_scenarios),  // bytes offset in struct
    NULL,  // default value
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__size_function__Scenario__activating_scenarios,  // size() function pointer
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__get_const_function__Scenario__activating_scenarios,  // get_const(index) function pointer
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__get_function__Scenario__activating_scenarios,  // get(index) function pointer
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__fetch_function__Scenario__activating_scenarios,  // fetch(index, &value) function pointer
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__assign_function__Scenario__activating_scenarios,  // assign(index, value) function pointer
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__resize_function__Scenario__activating_scenarios  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "Scenario",  // message name
  2,  // number of fields
  sizeof(tier4_planning_msgs__msg__Scenario),
  tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_member_array,  // message members
  tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_type_support_handle = {
  0,
  &tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, Scenario)() {
  if (!tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_type_support_handle.typesupport_identifier) {
    tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_planning_msgs__msg__Scenario__rosidl_typesupport_introspection_c__Scenario_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
