// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_simulation_msgs:msg/SimulationEvents.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_simulation_msgs/msg/detail/simulation_events__rosidl_typesupport_introspection_c.h"
#include "tier4_simulation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_simulation_msgs/msg/detail/simulation_events__functions.h"
#include "tier4_simulation_msgs/msg/detail/simulation_events__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `fault_injection_events`
#include "tier4_simulation_msgs/msg/fault_injection_event.h"
// Member `fault_injection_events`
#include "tier4_simulation_msgs/msg/detail/fault_injection_event__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_simulation_msgs__msg__SimulationEvents__init(message_memory);
}

void tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_fini_function(void * message_memory)
{
  tier4_simulation_msgs__msg__SimulationEvents__fini(message_memory);
}

size_t tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__size_function__SimulationEvents__fault_injection_events(
  const void * untyped_member)
{
  const tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * member =
    (const tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__get_const_function__SimulationEvents__fault_injection_events(
  const void * untyped_member, size_t index)
{
  const tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * member =
    (const tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__get_function__SimulationEvents__fault_injection_events(
  void * untyped_member, size_t index)
{
  tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * member =
    (tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__fetch_function__SimulationEvents__fault_injection_events(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_simulation_msgs__msg__FaultInjectionEvent * item =
    ((const tier4_simulation_msgs__msg__FaultInjectionEvent *)
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__get_const_function__SimulationEvents__fault_injection_events(untyped_member, index));
  tier4_simulation_msgs__msg__FaultInjectionEvent * value =
    (tier4_simulation_msgs__msg__FaultInjectionEvent *)(untyped_value);
  *value = *item;
}

void tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__assign_function__SimulationEvents__fault_injection_events(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_simulation_msgs__msg__FaultInjectionEvent * item =
    ((tier4_simulation_msgs__msg__FaultInjectionEvent *)
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__get_function__SimulationEvents__fault_injection_events(untyped_member, index));
  const tier4_simulation_msgs__msg__FaultInjectionEvent * value =
    (const tier4_simulation_msgs__msg__FaultInjectionEvent *)(untyped_value);
  *item = *value;
}

bool tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__resize_function__SimulationEvents__fault_injection_events(
  void * untyped_member, size_t size)
{
  tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence * member =
    (tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence *)(untyped_member);
  tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__fini(member);
  return tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_simulation_msgs__msg__SimulationEvents, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_injection_events",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_simulation_msgs__msg__SimulationEvents, fault_injection_events),  // bytes offset in struct
    NULL,  // default value
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__size_function__SimulationEvents__fault_injection_events,  // size() function pointer
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__get_const_function__SimulationEvents__fault_injection_events,  // get_const(index) function pointer
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__get_function__SimulationEvents__fault_injection_events,  // get(index) function pointer
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__fetch_function__SimulationEvents__fault_injection_events,  // fetch(index, &value) function pointer
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__assign_function__SimulationEvents__fault_injection_events,  // assign(index, value) function pointer
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__resize_function__SimulationEvents__fault_injection_events  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_members = {
  "tier4_simulation_msgs__msg",  // message namespace
  "SimulationEvents",  // message name
  2,  // number of fields
  sizeof(tier4_simulation_msgs__msg__SimulationEvents),
  tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_member_array,  // message members
  tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_type_support_handle = {
  0,
  &tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_simulation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_simulation_msgs, msg, SimulationEvents)() {
  tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_simulation_msgs, msg, FaultInjectionEvent)();
  if (!tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_type_support_handle.typesupport_identifier) {
    tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_simulation_msgs__msg__SimulationEvents__rosidl_typesupport_introspection_c__SimulationEvents_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
