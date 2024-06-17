// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yabloc_particle_filter/msg/detail/particle_array__rosidl_typesupport_introspection_c.h"
#include "yabloc_particle_filter/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yabloc_particle_filter/msg/detail/particle_array__functions.h"
#include "yabloc_particle_filter/msg/detail/particle_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `particles`
#include "yabloc_particle_filter/msg/particle.h"
// Member `particles`
#include "yabloc_particle_filter/msg/detail/particle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yabloc_particle_filter__msg__ParticleArray__init(message_memory);
}

void yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_fini_function(void * message_memory)
{
  yabloc_particle_filter__msg__ParticleArray__fini(message_memory);
}

size_t yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__size_function__ParticleArray__particles(
  const void * untyped_member)
{
  const yabloc_particle_filter__msg__Particle__Sequence * member =
    (const yabloc_particle_filter__msg__Particle__Sequence *)(untyped_member);
  return member->size;
}

const void * yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__get_const_function__ParticleArray__particles(
  const void * untyped_member, size_t index)
{
  const yabloc_particle_filter__msg__Particle__Sequence * member =
    (const yabloc_particle_filter__msg__Particle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__get_function__ParticleArray__particles(
  void * untyped_member, size_t index)
{
  yabloc_particle_filter__msg__Particle__Sequence * member =
    (yabloc_particle_filter__msg__Particle__Sequence *)(untyped_member);
  return &member->data[index];
}

void yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__fetch_function__ParticleArray__particles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const yabloc_particle_filter__msg__Particle * item =
    ((const yabloc_particle_filter__msg__Particle *)
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__get_const_function__ParticleArray__particles(untyped_member, index));
  yabloc_particle_filter__msg__Particle * value =
    (yabloc_particle_filter__msg__Particle *)(untyped_value);
  *value = *item;
}

void yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__assign_function__ParticleArray__particles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  yabloc_particle_filter__msg__Particle * item =
    ((yabloc_particle_filter__msg__Particle *)
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__get_function__ParticleArray__particles(untyped_member, index));
  const yabloc_particle_filter__msg__Particle * value =
    (const yabloc_particle_filter__msg__Particle *)(untyped_value);
  *item = *value;
}

bool yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__resize_function__ParticleArray__particles(
  void * untyped_member, size_t size)
{
  yabloc_particle_filter__msg__Particle__Sequence * member =
    (yabloc_particle_filter__msg__Particle__Sequence *)(untyped_member);
  yabloc_particle_filter__msg__Particle__Sequence__fini(member);
  return yabloc_particle_filter__msg__Particle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter__msg__ParticleArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter__msg__ParticleArray, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "particles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter__msg__ParticleArray, particles),  // bytes offset in struct
    NULL,  // default value
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__size_function__ParticleArray__particles,  // size() function pointer
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__get_const_function__ParticleArray__particles,  // get_const(index) function pointer
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__get_function__ParticleArray__particles,  // get(index) function pointer
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__fetch_function__ParticleArray__particles,  // fetch(index, &value) function pointer
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__assign_function__ParticleArray__particles,  // assign(index, value) function pointer
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__resize_function__ParticleArray__particles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_members = {
  "yabloc_particle_filter__msg",  // message namespace
  "ParticleArray",  // message name
  3,  // number of fields
  sizeof(yabloc_particle_filter__msg__ParticleArray),
  yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_member_array,  // message members
  yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_type_support_handle = {
  0,
  &yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yabloc_particle_filter
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yabloc_particle_filter, msg, ParticleArray)() {
  yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yabloc_particle_filter, msg, Particle)();
  if (!yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_type_support_handle.typesupport_identifier) {
    yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yabloc_particle_filter__msg__ParticleArray__rosidl_typesupport_introspection_c__ParticleArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
