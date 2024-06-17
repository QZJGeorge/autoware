// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_perception_msgs/msg/detail/traffic_signal__rosidl_typesupport_introspection_c.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_perception_msgs/msg/detail/traffic_signal__functions.h"
#include "tier4_perception_msgs/msg/detail/traffic_signal__struct.h"


// Include directives for member types
// Member `elements`
#include "tier4_perception_msgs/msg/traffic_light_element.h"
// Member `elements`
#include "tier4_perception_msgs/msg/detail/traffic_light_element__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_perception_msgs__msg__TrafficSignal__init(message_memory);
}

void tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_fini_function(void * message_memory)
{
  tier4_perception_msgs__msg__TrafficSignal__fini(message_memory);
}

size_t tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__size_function__TrafficSignal__elements(
  const void * untyped_member)
{
  const tier4_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (const tier4_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__get_const_function__TrafficSignal__elements(
  const void * untyped_member, size_t index)
{
  const tier4_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (const tier4_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__get_function__TrafficSignal__elements(
  void * untyped_member, size_t index)
{
  tier4_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (tier4_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__fetch_function__TrafficSignal__elements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_perception_msgs__msg__TrafficLightElement * item =
    ((const tier4_perception_msgs__msg__TrafficLightElement *)
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__get_const_function__TrafficSignal__elements(untyped_member, index));
  tier4_perception_msgs__msg__TrafficLightElement * value =
    (tier4_perception_msgs__msg__TrafficLightElement *)(untyped_value);
  *value = *item;
}

void tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__assign_function__TrafficSignal__elements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_perception_msgs__msg__TrafficLightElement * item =
    ((tier4_perception_msgs__msg__TrafficLightElement *)
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__get_function__TrafficSignal__elements(untyped_member, index));
  const tier4_perception_msgs__msg__TrafficLightElement * value =
    (const tier4_perception_msgs__msg__TrafficLightElement *)(untyped_value);
  *item = *value;
}

bool tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__resize_function__TrafficSignal__elements(
  void * untyped_member, size_t size)
{
  tier4_perception_msgs__msg__TrafficLightElement__Sequence * member =
    (tier4_perception_msgs__msg__TrafficLightElement__Sequence *)(untyped_member);
  tier4_perception_msgs__msg__TrafficLightElement__Sequence__fini(member);
  return tier4_perception_msgs__msg__TrafficLightElement__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_member_array[2] = {
  {
    "traffic_light_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__TrafficSignal, traffic_light_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__TrafficSignal, elements),  // bytes offset in struct
    NULL,  // default value
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__size_function__TrafficSignal__elements,  // size() function pointer
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__get_const_function__TrafficSignal__elements,  // get_const(index) function pointer
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__get_function__TrafficSignal__elements,  // get(index) function pointer
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__fetch_function__TrafficSignal__elements,  // fetch(index, &value) function pointer
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__assign_function__TrafficSignal__elements,  // assign(index, value) function pointer
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__resize_function__TrafficSignal__elements  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_members = {
  "tier4_perception_msgs__msg",  // message namespace
  "TrafficSignal",  // message name
  2,  // number of fields
  sizeof(tier4_perception_msgs__msg__TrafficSignal),
  tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_member_array,  // message members
  tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_type_support_handle = {
  0,
  &tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, TrafficSignal)() {
  tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, TrafficLightElement)();
  if (!tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_type_support_handle.typesupport_identifier) {
    tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_perception_msgs__msg__TrafficSignal__rosidl_typesupport_introspection_c__TrafficSignal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
