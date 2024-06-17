// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_perception_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_perception_msgs/msg/detail/dynamic_object__rosidl_typesupport_introspection_c.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_perception_msgs/msg/detail/dynamic_object__functions.h"
#include "tier4_perception_msgs/msg/detail/dynamic_object__struct.h"


// Include directives for member types
// Member `id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `semantic`
#include "tier4_perception_msgs/msg/semantic.h"
// Member `semantic`
#include "tier4_perception_msgs/msg/detail/semantic__rosidl_typesupport_introspection_c.h"
// Member `state`
#include "tier4_perception_msgs/msg/state.h"
// Member `state`
#include "tier4_perception_msgs/msg/detail/state__rosidl_typesupport_introspection_c.h"
// Member `shape`
#include "tier4_perception_msgs/msg/shape.h"
// Member `shape`
#include "tier4_perception_msgs/msg/detail/shape__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_perception_msgs__msg__DynamicObject__init(message_memory);
}

void tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_fini_function(void * message_memory)
{
  tier4_perception_msgs__msg__DynamicObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DynamicObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "semantic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DynamicObject, semantic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DynamicObject, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__DynamicObject, shape),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_members = {
  "tier4_perception_msgs__msg",  // message namespace
  "DynamicObject",  // message name
  4,  // number of fields
  sizeof(tier4_perception_msgs__msg__DynamicObject),
  tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_member_array,  // message members
  tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_type_support_handle = {
  0,
  &tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, DynamicObject)() {
  tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, Semantic)();
  tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, State)();
  tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, Shape)();
  if (!tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_type_support_handle.typesupport_identifier) {
    tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_perception_msgs__msg__DynamicObject__rosidl_typesupport_introspection_c__DynamicObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
