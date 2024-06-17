// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/VehicleCollision.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/vehicle_collision__struct.hpp"
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

void VehicleCollision_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::VehicleCollision(_init);
}

void VehicleCollision_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::VehicleCollision *>(message_memory);
  typed_message->~VehicleCollision();
}

size_t size_function__VehicleCollision__crashed_vehicles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VehicleCollision__crashed_vehicles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleCollision__crashed_vehicles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleCollision__crashed_vehicles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(
    get_const_function__VehicleCollision__crashed_vehicles(untyped_member, index));
  auto & value = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(untyped_value);
  value = item;
}

void assign_function__VehicleCollision__crashed_vehicles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<morai_msgs::msg::ObjectStatus *>(
    get_function__VehicleCollision__crashed_vehicles(untyped_member, index));
  const auto & value = *reinterpret_cast<const morai_msgs::msg::ObjectStatus *>(untyped_value);
  item = value;
}

void resize_function__VehicleCollision__crashed_vehicles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<morai_msgs::msg::ObjectStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleCollision_message_member_array[1] = {
  {
    "crashed_vehicles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<morai_msgs::msg::ObjectStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::VehicleCollision, crashed_vehicles),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleCollision__crashed_vehicles,  // size() function pointer
    get_const_function__VehicleCollision__crashed_vehicles,  // get_const(index) function pointer
    get_function__VehicleCollision__crashed_vehicles,  // get(index) function pointer
    fetch_function__VehicleCollision__crashed_vehicles,  // fetch(index, &value) function pointer
    assign_function__VehicleCollision__crashed_vehicles,  // assign(index, value) function pointer
    resize_function__VehicleCollision__crashed_vehicles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleCollision_message_members = {
  "morai_msgs::msg",  // message namespace
  "VehicleCollision",  // message name
  1,  // number of fields
  sizeof(morai_msgs::msg::VehicleCollision),
  VehicleCollision_message_member_array,  // message members
  VehicleCollision_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleCollision_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleCollision_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleCollision_message_members,
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
get_message_type_support_handle<morai_msgs::msg::VehicleCollision>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleCollision_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, VehicleCollision)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleCollision_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
