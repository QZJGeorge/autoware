// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yabloc_particle_filter:msg/Particle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yabloc_particle_filter/msg/detail/particle__rosidl_typesupport_introspection_c.h"
#include "yabloc_particle_filter/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yabloc_particle_filter/msg/detail/particle__functions.h"
#include "yabloc_particle_filter/msg/detail/particle__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yabloc_particle_filter__msg__Particle__init(message_memory);
}

void yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_fini_function(void * message_memory)
{
  yabloc_particle_filter__msg__Particle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_member_array[2] = {
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter__msg__Particle, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter__msg__Particle, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_members = {
  "yabloc_particle_filter__msg",  // message namespace
  "Particle",  // message name
  2,  // number of fields
  sizeof(yabloc_particle_filter__msg__Particle),
  yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_member_array,  // message members
  yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_init_function,  // function to initialize message memory (memory has to be allocated)
  yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_type_support_handle = {
  0,
  &yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yabloc_particle_filter
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yabloc_particle_filter, msg, Particle)() {
  yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_type_support_handle.typesupport_identifier) {
    yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yabloc_particle_filter__msg__Particle__rosidl_typesupport_introspection_c__Particle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
