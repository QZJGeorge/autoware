// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/sensor_pos_control__struct.hpp"
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

void SensorPosControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::SensorPosControl(_init);
}

void SensorPosControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::SensorPosControl *>(message_memory);
  typed_message->~SensorPosControl();
}

size_t size_function__SensorPosControl__sensor_index(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorPosControl__sensor_index(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorPosControl__sensor_index(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorPosControl__sensor_index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__SensorPosControl__sensor_index(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__SensorPosControl__sensor_index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__SensorPosControl__sensor_index(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__SensorPosControl__sensor_index(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorPosControl__pose_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorPosControl__pose_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorPosControl__pose_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorPosControl__pose_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorPosControl__pose_x(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorPosControl__pose_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorPosControl__pose_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SensorPosControl__pose_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorPosControl__pose_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorPosControl__pose_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorPosControl__pose_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorPosControl__pose_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorPosControl__pose_y(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorPosControl__pose_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorPosControl__pose_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SensorPosControl__pose_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorPosControl__pose_z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorPosControl__pose_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorPosControl__pose_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorPosControl__pose_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorPosControl__pose_z(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorPosControl__pose_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorPosControl__pose_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SensorPosControl__pose_z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorPosControl__roll(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorPosControl__roll(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorPosControl__roll(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorPosControl__roll(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorPosControl__roll(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorPosControl__roll(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorPosControl__roll(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SensorPosControl__roll(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorPosControl__pitch(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorPosControl__pitch(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorPosControl__pitch(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorPosControl__pitch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorPosControl__pitch(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorPosControl__pitch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorPosControl__pitch(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SensorPosControl__pitch(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorPosControl__yaw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorPosControl__yaw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorPosControl__yaw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorPosControl__yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorPosControl__yaw(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorPosControl__yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorPosControl__yaw(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SensorPosControl__yaw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorPosControl_message_member_array[7] = {
  {
    "sensor_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SensorPosControl, sensor_index),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorPosControl__sensor_index,  // size() function pointer
    get_const_function__SensorPosControl__sensor_index,  // get_const(index) function pointer
    get_function__SensorPosControl__sensor_index,  // get(index) function pointer
    fetch_function__SensorPosControl__sensor_index,  // fetch(index, &value) function pointer
    assign_function__SensorPosControl__sensor_index,  // assign(index, value) function pointer
    resize_function__SensorPosControl__sensor_index  // resize(index) function pointer
  },
  {
    "pose_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SensorPosControl, pose_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorPosControl__pose_x,  // size() function pointer
    get_const_function__SensorPosControl__pose_x,  // get_const(index) function pointer
    get_function__SensorPosControl__pose_x,  // get(index) function pointer
    fetch_function__SensorPosControl__pose_x,  // fetch(index, &value) function pointer
    assign_function__SensorPosControl__pose_x,  // assign(index, value) function pointer
    resize_function__SensorPosControl__pose_x  // resize(index) function pointer
  },
  {
    "pose_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SensorPosControl, pose_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorPosControl__pose_y,  // size() function pointer
    get_const_function__SensorPosControl__pose_y,  // get_const(index) function pointer
    get_function__SensorPosControl__pose_y,  // get(index) function pointer
    fetch_function__SensorPosControl__pose_y,  // fetch(index, &value) function pointer
    assign_function__SensorPosControl__pose_y,  // assign(index, value) function pointer
    resize_function__SensorPosControl__pose_y  // resize(index) function pointer
  },
  {
    "pose_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SensorPosControl, pose_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorPosControl__pose_z,  // size() function pointer
    get_const_function__SensorPosControl__pose_z,  // get_const(index) function pointer
    get_function__SensorPosControl__pose_z,  // get(index) function pointer
    fetch_function__SensorPosControl__pose_z,  // fetch(index, &value) function pointer
    assign_function__SensorPosControl__pose_z,  // assign(index, value) function pointer
    resize_function__SensorPosControl__pose_z  // resize(index) function pointer
  },
  {
    "roll",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SensorPosControl, roll),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorPosControl__roll,  // size() function pointer
    get_const_function__SensorPosControl__roll,  // get_const(index) function pointer
    get_function__SensorPosControl__roll,  // get(index) function pointer
    fetch_function__SensorPosControl__roll,  // fetch(index, &value) function pointer
    assign_function__SensorPosControl__roll,  // assign(index, value) function pointer
    resize_function__SensorPosControl__roll  // resize(index) function pointer
  },
  {
    "pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SensorPosControl, pitch),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorPosControl__pitch,  // size() function pointer
    get_const_function__SensorPosControl__pitch,  // get_const(index) function pointer
    get_function__SensorPosControl__pitch,  // get(index) function pointer
    fetch_function__SensorPosControl__pitch,  // fetch(index, &value) function pointer
    assign_function__SensorPosControl__pitch,  // assign(index, value) function pointer
    resize_function__SensorPosControl__pitch  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::SensorPosControl, yaw),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorPosControl__yaw,  // size() function pointer
    get_const_function__SensorPosControl__yaw,  // get_const(index) function pointer
    get_function__SensorPosControl__yaw,  // get(index) function pointer
    fetch_function__SensorPosControl__yaw,  // fetch(index, &value) function pointer
    assign_function__SensorPosControl__yaw,  // assign(index, value) function pointer
    resize_function__SensorPosControl__yaw  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorPosControl_message_members = {
  "morai_msgs::msg",  // message namespace
  "SensorPosControl",  // message name
  7,  // number of fields
  sizeof(morai_msgs::msg::SensorPosControl),
  SensorPosControl_message_member_array,  // message members
  SensorPosControl_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorPosControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorPosControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorPosControl_message_members,
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
get_message_type_support_handle<morai_msgs::msg::SensorPosControl>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::SensorPosControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, SensorPosControl)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::SensorPosControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
