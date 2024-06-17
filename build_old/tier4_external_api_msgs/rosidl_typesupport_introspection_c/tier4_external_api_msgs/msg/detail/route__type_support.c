// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/route__functions.h"
#include "tier4_external_api_msgs/msg/detail/route__struct.h"


// Include directives for member types
// Member `goal_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `route_sections`
#include "tier4_external_api_msgs/msg/route_section.h"
// Member `route_sections`
#include "tier4_external_api_msgs/msg/detail/route_section__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__Route__init(message_memory);
}

void tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__Route__fini(message_memory);
}

size_t tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__route_sections(
  const void * untyped_member)
{
  const tier4_external_api_msgs__msg__RouteSection__Sequence * member =
    (const tier4_external_api_msgs__msg__RouteSection__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_sections(
  const void * untyped_member, size_t index)
{
  const tier4_external_api_msgs__msg__RouteSection__Sequence * member =
    (const tier4_external_api_msgs__msg__RouteSection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_sections(
  void * untyped_member, size_t index)
{
  tier4_external_api_msgs__msg__RouteSection__Sequence * member =
    (tier4_external_api_msgs__msg__RouteSection__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__route_sections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_external_api_msgs__msg__RouteSection * item =
    ((const tier4_external_api_msgs__msg__RouteSection *)
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_sections(untyped_member, index));
  tier4_external_api_msgs__msg__RouteSection * value =
    (tier4_external_api_msgs__msg__RouteSection *)(untyped_value);
  *value = *item;
}

void tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__route_sections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_external_api_msgs__msg__RouteSection * item =
    ((tier4_external_api_msgs__msg__RouteSection *)
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_sections(untyped_member, index));
  const tier4_external_api_msgs__msg__RouteSection * value =
    (const tier4_external_api_msgs__msg__RouteSection *)(untyped_value);
  *item = *value;
}

bool tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__route_sections(
  void * untyped_member, size_t size)
{
  tier4_external_api_msgs__msg__RouteSection__Sequence * member =
    (tier4_external_api_msgs__msg__RouteSection__Sequence *)(untyped_member);
  tier4_external_api_msgs__msg__RouteSection__Sequence__fini(member);
  return tier4_external_api_msgs__msg__RouteSection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[2] = {
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__Route, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_sections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__Route, route_sections),  // bytes offset in struct
    NULL,  // default value
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__route_sections,  // size() function pointer
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_sections,  // get_const(index) function pointer
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_sections,  // get(index) function pointer
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__route_sections,  // fetch(index, &value) function pointer
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__route_sections,  // assign(index, value) function pointer
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__route_sections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "Route",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs__msg__Route),
  tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array,  // message members
  tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle = {
  0,
  &tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, Route)() {
  tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, RouteSection)();
  if (!tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier) {
    tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_external_api_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
