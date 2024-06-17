// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/VehicleCollisionData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/vehicle_collision_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace morai_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VehicleCollisionData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::VehicleCollisionData(_init);
}

void VehicleCollisionData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::VehicleCollisionData *>(message_memory);
  typed_message->~VehicleCollisionData();
}

size_t size_function__VehicleCollisionData__collisions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::VehicleCollision> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VehicleCollisionData__collisions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::VehicleCollision> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleCollisionData__collisions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::VehicleCollision> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleCollisionData__collisions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const morai_msgs::msg::VehicleCollision *>(
    get_const_function__VehicleCollisionData__collisions(untyped_member, index));
  auto & value = *reinterpret_cast<morai_msgs::msg::VehicleCollision *>(untyped_value);
  value = item;
}

void assign_function__VehicleCollisionData__collisions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<morai_msgs::msg::VehicleCollision *>(
    get_function__VehicleCollisionData__collisions(untyped_member, index));
  const auto & value = *reinterpret_cast<const morai_msgs::msg::VehicleCollision *>(untyped_value);
  item = value;
}

void resize_function__VehicleCollisionData__collisions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::VehicleCollision> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleCollisionData_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::VehicleCollisionData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "collisions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::VehicleCollision>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::VehicleCollisionData, collisions),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleCollisionData__collisions,  // size() function pointer
    get_const_function__VehicleCollisionData__collisions,  // get_const(index) function pointer
    get_function__VehicleCollisionData__collisions,  // get(index) function pointer
    fetch_function__VehicleCollisionData__collisions,  // fetch(index, &value) function pointer
    assign_function__VehicleCollisionData__collisions,  // assign(index, value) function pointer
    resize_function__VehicleCollisionData__collisions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleCollisionData_message_members = {
  "morai_msgs::msg",  // message namespace
  "VehicleCollisionData",  // message name
  2,  // number of fields
  sizeof(morai_msgs::msg::VehicleCollisionData),
  VehicleCollisionData_message_member_array,  // message members
  VehicleCollisionData_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleCollisionData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleCollisionData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleCollisionData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace morai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<morai_msgs::msg::VehicleCollisionData>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleCollisionData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, VehicleCollisionData)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleCollisionData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
