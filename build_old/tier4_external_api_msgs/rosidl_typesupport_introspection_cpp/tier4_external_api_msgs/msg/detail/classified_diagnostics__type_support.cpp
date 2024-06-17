// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:msg/ClassifiedDiagnostics.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_external_api_msgs/msg/detail/classified_diagnostics__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_external_api_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ClassifiedDiagnostics_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_external_api_msgs::msg::ClassifiedDiagnostics(_init);
}

void ClassifiedDiagnostics_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_external_api_msgs::msg::ClassifiedDiagnostics *>(message_memory);
  typed_message->~ClassifiedDiagnostics();
}

size_t size_function__ClassifiedDiagnostics__diagnostics_notice(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ClassifiedDiagnostics__diagnostics_notice(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ClassifiedDiagnostics__diagnostics_notice(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__ClassifiedDiagnostics__diagnostics_notice(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    get_const_function__ClassifiedDiagnostics__diagnostics_notice(untyped_member, index));
  auto & value = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  value = item;
}

void assign_function__ClassifiedDiagnostics__diagnostics_notice(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    get_function__ClassifiedDiagnostics__diagnostics_notice(untyped_member, index));
  const auto & value = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  item = value;
}

void resize_function__ClassifiedDiagnostics__diagnostics_notice(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ClassifiedDiagnostics_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs::msg::ClassifiedDiagnostics, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "diagnostics_notice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs::msg::ClassifiedDiagnostics, diagnostics_notice),  // bytes offset in struct
    nullptr,  // default value
    size_function__ClassifiedDiagnostics__diagnostics_notice,  // size() function pointer
    get_const_function__ClassifiedDiagnostics__diagnostics_notice,  // get_const(index) function pointer
    get_function__ClassifiedDiagnostics__diagnostics_notice,  // get(index) function pointer
    fetch_function__ClassifiedDiagnostics__diagnostics_notice,  // fetch(index, &value) function pointer
    assign_function__ClassifiedDiagnostics__diagnostics_notice,  // assign(index, value) function pointer
    resize_function__ClassifiedDiagnostics__diagnostics_notice  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ClassifiedDiagnostics_message_members = {
  "tier4_external_api_msgs::msg",  // message namespace
  "ClassifiedDiagnostics",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs::msg::ClassifiedDiagnostics),
  ClassifiedDiagnostics_message_member_array,  // message members
  ClassifiedDiagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  ClassifiedDiagnostics_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ClassifiedDiagnostics_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClassifiedDiagnostics_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_external_api_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_external_api_msgs::msg::ClassifiedDiagnostics>()
{
  return &::tier4_external_api_msgs::msg::rosidl_typesupport_introspection_cpp::ClassifiedDiagnostics_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_external_api_msgs, msg, ClassifiedDiagnostics)() {
  return &::tier4_external_api_msgs::msg::rosidl_typesupport_introspection_cpp::ClassifiedDiagnostics_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
