// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yabloc_particle_filter/msg/detail/particle_array__struct.hpp"
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

void ParticleArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yabloc_particle_filter::msg::ParticleArray(_init);
}

void ParticleArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yabloc_particle_filter::msg::ParticleArray *>(message_memory);
  typed_message->~ParticleArray();
}

size_t size_function__ParticleArray__particles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<yabloc_particle_filter::msg::Particle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ParticleArray__particles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<yabloc_particle_filter::msg::Particle> *>(untyped_member);
  return &member[index];
}

void * get_function__ParticleArray__particles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<yabloc_particle_filter::msg::Particle> *>(untyped_member);
  return &member[index];
}

void fetch_function__ParticleArray__particles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const yabloc_particle_filter::msg::Particle *>(
    get_const_function__ParticleArray__particles(untyped_member, index));
  auto & value = *reinterpret_cast<yabloc_particle_filter::msg::Particle *>(untyped_value);
  value = item;
}

void assign_function__ParticleArray__particles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<yabloc_particle_filter::msg::Particle *>(
    get_function__ParticleArray__particles(untyped_member, index));
  const auto & value = *reinterpret_cast<const yabloc_particle_filter::msg::Particle *>(untyped_value);
  item = value;
}

void resize_function__ParticleArray__particles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<yabloc_particle_filter::msg::Particle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ParticleArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter::msg::ParticleArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter::msg::ParticleArray, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "particles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<yabloc_particle_filter::msg::Particle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yabloc_particle_filter::msg::ParticleArray, particles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ParticleArray__particles,  // size() function pointer
    get_const_function__ParticleArray__particles,  // get_const(index) function pointer
    get_function__ParticleArray__particles,  // get(index) function pointer
    fetch_function__ParticleArray__particles,  // fetch(index, &value) function pointer
    assign_function__ParticleArray__particles,  // assign(index, value) function pointer
    resize_function__ParticleArray__particles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ParticleArray_message_members = {
  "yabloc_particle_filter::msg",  // message namespace
  "ParticleArray",  // message name
  3,  // number of fields
  sizeof(yabloc_particle_filter::msg::ParticleArray),
  ParticleArray_message_member_array,  // message members
  ParticleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ParticleArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ParticleArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ParticleArray_message_members,
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
get_message_type_support_handle<yabloc_particle_filter::msg::ParticleArray>()
{
  return &::yabloc_particle_filter::msg::rosidl_typesupport_introspection_cpp::ParticleArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yabloc_particle_filter, msg, ParticleArray)() {
  return &::yabloc_particle_filter::msg::rosidl_typesupport_introspection_cpp::ParticleArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
