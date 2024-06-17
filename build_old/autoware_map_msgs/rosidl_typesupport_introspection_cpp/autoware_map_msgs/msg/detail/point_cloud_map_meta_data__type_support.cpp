// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_map_msgs:msg/PointCloudMapMetaData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PointCloudMapMetaData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_map_msgs::msg::PointCloudMapMetaData(_init);
}

void PointCloudMapMetaData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_map_msgs::msg::PointCloudMapMetaData *>(message_memory);
  typed_message->~PointCloudMapMetaData();
}

size_t size_function__PointCloudMapMetaData__metadata_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointCloudMapMetaData__metadata_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID> *>(untyped_member);
  return &member[index];
}

void * get_function__PointCloudMapMetaData__metadata_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID> *>(untyped_member);
  return &member[index];
}

void fetch_function__PointCloudMapMetaData__metadata_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID *>(
    get_const_function__PointCloudMapMetaData__metadata_list(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID *>(untyped_value);
  value = item;
}

void assign_function__PointCloudMapMetaData__metadata_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID *>(
    get_function__PointCloudMapMetaData__metadata_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID *>(untyped_value);
  item = value;
}

void resize_function__PointCloudMapMetaData__metadata_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointCloudMapMetaData_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs::msg::PointCloudMapMetaData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "metadata_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs::msg::PointCloudMapMetaData, metadata_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointCloudMapMetaData__metadata_list,  // size() function pointer
    get_const_function__PointCloudMapMetaData__metadata_list,  // get_const(index) function pointer
    get_function__PointCloudMapMetaData__metadata_list,  // get(index) function pointer
    fetch_function__PointCloudMapMetaData__metadata_list,  // fetch(index, &value) function pointer
    assign_function__PointCloudMapMetaData__metadata_list,  // assign(index, value) function pointer
    resize_function__PointCloudMapMetaData__metadata_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointCloudMapMetaData_message_members = {
  "autoware_map_msgs::msg",  // message namespace
  "PointCloudMapMetaData",  // message name
  2,  // number of fields
  sizeof(autoware_map_msgs::msg::PointCloudMapMetaData),
  PointCloudMapMetaData_message_member_array,  // message members
  PointCloudMapMetaData_init_function,  // function to initialize message memory (memory has to be allocated)
  PointCloudMapMetaData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointCloudMapMetaData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointCloudMapMetaData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_map_msgs::msg::PointCloudMapMetaData>()
{
  return &::autoware_map_msgs::msg::rosidl_typesupport_introspection_cpp::PointCloudMapMetaData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_map_msgs, msg, PointCloudMapMetaData)() {
  return &::autoware_map_msgs::msg::rosidl_typesupport_introspection_cpp::PointCloudMapMetaData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
