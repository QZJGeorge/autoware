// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yabloc_particle_filter:msg/Particle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yabloc_particle_filter/msg/detail/particle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace yabloc_particle_filter
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Particle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yabloc_particle_filter::msg::Particle(_init);
}

void Particle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yabloc_particle_filter::msg::Particle *>(message_memory);
  typed_message->~Particle();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Particle_message_member_array[2] = {
  {
    "weight",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter::msg::Particle, weight),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter::msg::Particle, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Particle_message_members = {
  "yabloc_particle_filter::msg",  // message namespace
  "Particle",  // message name
  2,  // number of fields
  sizeof(yabloc_particle_filter::msg::Particle),
  Particle_message_member_array,  // message members
  Particle_init_function,  // function to initialize message memory (memory has to be allocated)
  Particle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Particle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Particle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yabloc_particle_filter


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yabloc_particle_filter::msg::Particle>()
{
  return &::yabloc_particle_filter::msg::rosidl_typesupport_introspection_cpp::Particle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yabloc_particle_filter, msg, Particle)() {
  return &::yabloc_particle_filter::msg::rosidl_typesupport_introspection_cpp::Particle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
