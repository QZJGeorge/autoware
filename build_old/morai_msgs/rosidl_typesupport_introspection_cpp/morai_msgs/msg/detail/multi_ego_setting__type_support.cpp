// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "morai_msgs/msg/detail/multi_ego_setting__struct.hpp"
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

void MultiEgoSetting_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) morai_msgs::msg::MultiEgoSetting(_init);
}

void MultiEgoSetting_fini_function(void * message_memory)
{
  auto typed_message = static_cast<morai_msgs::msg::MultiEgoSetting *>(message_memory);
  typed_message->~MultiEgoSetting();
}

size_t size_function__MultiEgoSetting__ego_index(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__ego_index(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__ego_index(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__ego_index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MultiEgoSetting__ego_index(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__ego_index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MultiEgoSetting__ego_index(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__ego_index(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__global_position_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__global_position_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__global_position_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__global_position_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MultiEgoSetting__global_position_x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__global_position_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MultiEgoSetting__global_position_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__global_position_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__global_position_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__global_position_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__global_position_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__global_position_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MultiEgoSetting__global_position_y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__global_position_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MultiEgoSetting__global_position_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__global_position_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__global_position_z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__global_position_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__global_position_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__global_position_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MultiEgoSetting__global_position_z(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__global_position_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MultiEgoSetting__global_position_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__global_position_z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__global_roll(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__global_roll(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__global_roll(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__global_roll(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MultiEgoSetting__global_roll(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__global_roll(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MultiEgoSetting__global_roll(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__global_roll(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__global_pitch(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__global_pitch(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__global_pitch(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__global_pitch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MultiEgoSetting__global_pitch(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__global_pitch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MultiEgoSetting__global_pitch(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__global_pitch(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__global_yaw(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__global_yaw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__global_yaw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__global_yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MultiEgoSetting__global_yaw(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__global_yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MultiEgoSetting__global_yaw(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__global_yaw(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MultiEgoSetting__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MultiEgoSetting__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__gear(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__gear(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__gear(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__gear(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__MultiEgoSetting__gear(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__gear(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__MultiEgoSetting__gear(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__gear(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEgoSetting__ctrl_mode(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEgoSetting__ctrl_mode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEgoSetting__ctrl_mode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiEgoSetting__ctrl_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__MultiEgoSetting__ctrl_mode(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__MultiEgoSetting__ctrl_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__MultiEgoSetting__ctrl_mode(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__MultiEgoSetting__ctrl_mode(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiEgoSetting_message_member_array[12] = {
  {
    "number_of_ego_vehicle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, number_of_ego_vehicle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, camera_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, ego_index),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__ego_index,  // size() function pointer
    get_const_function__MultiEgoSetting__ego_index,  // get_const(index) function pointer
    get_function__MultiEgoSetting__ego_index,  // get(index) function pointer
    fetch_function__MultiEgoSetting__ego_index,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__ego_index,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__ego_index  // resize(index) function pointer
  },
  {
    "global_position_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, global_position_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__global_position_x,  // size() function pointer
    get_const_function__MultiEgoSetting__global_position_x,  // get_const(index) function pointer
    get_function__MultiEgoSetting__global_position_x,  // get(index) function pointer
    fetch_function__MultiEgoSetting__global_position_x,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__global_position_x,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__global_position_x  // resize(index) function pointer
  },
  {
    "global_position_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, global_position_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__global_position_y,  // size() function pointer
    get_const_function__MultiEgoSetting__global_position_y,  // get_const(index) function pointer
    get_function__MultiEgoSetting__global_position_y,  // get(index) function pointer
    fetch_function__MultiEgoSetting__global_position_y,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__global_position_y,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__global_position_y  // resize(index) function pointer
  },
  {
    "global_position_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, global_position_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__global_position_z,  // size() function pointer
    get_const_function__MultiEgoSetting__global_position_z,  // get_const(index) function pointer
    get_function__MultiEgoSetting__global_position_z,  // get(index) function pointer
    fetch_function__MultiEgoSetting__global_position_z,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__global_position_z,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__global_position_z  // resize(index) function pointer
  },
  {
    "global_roll",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, global_roll),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__global_roll,  // size() function pointer
    get_const_function__MultiEgoSetting__global_roll,  // get_const(index) function pointer
    get_function__MultiEgoSetting__global_roll,  // get(index) function pointer
    fetch_function__MultiEgoSetting__global_roll,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__global_roll,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__global_roll  // resize(index) function pointer
  },
  {
    "global_pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, global_pitch),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__global_pitch,  // size() function pointer
    get_const_function__MultiEgoSetting__global_pitch,  // get_const(index) function pointer
    get_function__MultiEgoSetting__global_pitch,  // get(index) function pointer
    fetch_function__MultiEgoSetting__global_pitch,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__global_pitch,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__global_pitch  // resize(index) function pointer
  },
  {
    "global_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, global_yaw),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__global_yaw,  // size() function pointer
    get_const_function__MultiEgoSetting__global_yaw,  // get_const(index) function pointer
    get_function__MultiEgoSetting__global_yaw,  // get(index) function pointer
    fetch_function__MultiEgoSetting__global_yaw,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__global_yaw,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__global_yaw  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__velocity,  // size() function pointer
    get_const_function__MultiEgoSetting__velocity,  // get_const(index) function pointer
    get_function__MultiEgoSetting__velocity,  // get(index) function pointer
    fetch_function__MultiEgoSetting__velocity,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__velocity,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__velocity  // resize(index) function pointer
  },
  {
    "gear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, gear),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__gear,  // size() function pointer
    get_const_function__MultiEgoSetting__gear,  // get_const(index) function pointer
    get_function__MultiEgoSetting__gear,  // get(index) function pointer
    fetch_function__MultiEgoSetting__gear,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__gear,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__gear  // resize(index) function pointer
  },
  {
    "ctrl_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs::msg::MultiEgoSetting, ctrl_mode),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEgoSetting__ctrl_mode,  // size() function pointer
    get_const_function__MultiEgoSetting__ctrl_mode,  // get_const(index) function pointer
    get_function__MultiEgoSetting__ctrl_mode,  // get(index) function pointer
    fetch_function__MultiEgoSetting__ctrl_mode,  // fetch(index, &value) function pointer
    assign_function__MultiEgoSetting__ctrl_mode,  // assign(index, value) function pointer
    resize_function__MultiEgoSetting__ctrl_mode  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiEgoSetting_message_members = {
  "morai_msgs::msg",  // message namespace
  "MultiEgoSetting",  // message name
  12,  // number of fields
  sizeof(morai_msgs::msg::MultiEgoSetting),
  MultiEgoSetting_message_member_array,  // message members
  MultiEgoSetting_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiEgoSetting_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MultiEgoSetting_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiEgoSetting_message_members,
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
get_message_type_support_handle<morai_msgs::msg::MultiEgoSetting>()
{
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::MultiEgoSetting_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, morai_msgs, msg, MultiEgoSetting)() {
  return &::morai_msgs::msg::rosidl_typesupport_introspection_cpp::MultiEgoSetting_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
