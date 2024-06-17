// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_api_msgs/msg/detail/awapi_autoware_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_api_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AwapiAutowareStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_api_msgs::msg::AwapiAutowareStatus(_init);
}

void AwapiAutowareStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_api_msgs::msg::AwapiAutowareStatus *>(message_memory);
  typed_message->~AwapiAutowareStatus();
}

size_t size_function__AwapiAutowareStatus__diagnostics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AwapiAutowareStatus__diagnostics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__AwapiAutowareStatus__diagnostics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__AwapiAutowareStatus__diagnostics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    get_const_function__AwapiAutowareStatus__diagnostics(untyped_member, index));
  auto & value = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  value = item;
}

void assign_function__AwapiAutowareStatus__diagnostics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    get_function__AwapiAutowareStatus__diagnostics(untyped_member, index));
  const auto & value = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  item = value;
}

void resize_function__AwapiAutowareStatus__diagnostics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AwapiAutowareStatus__error_diagnostics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AwapiAutowareStatus__error_diagnostics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__AwapiAutowareStatus__error_diagnostics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__AwapiAutowareStatus__error_diagnostics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(
    get_const_function__AwapiAutowareStatus__error_diagnostics(untyped_member, index));
  auto & value = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  value = item;
}

void assign_function__AwapiAutowareStatus__error_diagnostics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<diagnostic_msgs::msg::DiagnosticStatus *>(
    get_function__AwapiAutowareStatus__error_diagnostics(untyped_member, index));
  const auto & value = *reinterpret_cast<const diagnostic_msgs::msg::DiagnosticStatus *>(untyped_value);
  item = value;
}

void resize_function__AwapiAutowareStatus__error_diagnostics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AwapiAutowareStatus_message_member_array[12] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "autoware_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, autoware_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, control_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gate_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, gate_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "emergency_stopped",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, emergency_stopped),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_max_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, current_max_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hazard_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_system_msgs::msg::HazardStatusStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, hazard_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stop_reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_planning_msgs::msg::StopReasonArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, stop_reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "diagnostics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, diagnostics),  // bytes offset in struct
    nullptr,  // default value
    size_function__AwapiAutowareStatus__diagnostics,  // size() function pointer
    get_const_function__AwapiAutowareStatus__diagnostics,  // get_const(index) function pointer
    get_function__AwapiAutowareStatus__diagnostics,  // get(index) function pointer
    fetch_function__AwapiAutowareStatus__diagnostics,  // fetch(index, &value) function pointer
    assign_function__AwapiAutowareStatus__diagnostics,  // assign(index, value) function pointer
    resize_function__AwapiAutowareStatus__diagnostics  // resize(index) function pointer
  },
  {
    "error_diagnostics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, error_diagnostics),  // bytes offset in struct
    nullptr,  // default value
    size_function__AwapiAutowareStatus__error_diagnostics,  // size() function pointer
    get_const_function__AwapiAutowareStatus__error_diagnostics,  // get_const(index) function pointer
    get_function__AwapiAutowareStatus__error_diagnostics,  // get(index) function pointer
    fetch_function__AwapiAutowareStatus__error_diagnostics,  // fetch(index, &value) function pointer
    assign_function__AwapiAutowareStatus__error_diagnostics,  // assign(index, value) function pointer
    resize_function__AwapiAutowareStatus__error_diagnostics  // resize(index) function pointer
  },
  {
    "autonomous_overridden",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, autonomous_overridden),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arrived_goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::AwapiAutowareStatus, arrived_goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AwapiAutowareStatus_message_members = {
  "tier4_api_msgs::msg",  // message namespace
  "AwapiAutowareStatus",  // message name
  12,  // number of fields
  sizeof(tier4_api_msgs::msg::AwapiAutowareStatus),
  AwapiAutowareStatus_message_member_array,  // message members
  AwapiAutowareStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  AwapiAutowareStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AwapiAutowareStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AwapiAutowareStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_api_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_api_msgs::msg::AwapiAutowareStatus>()
{
  return &::tier4_api_msgs::msg::rosidl_typesupport_introspection_cpp::AwapiAutowareStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_api_msgs, msg, AwapiAutowareStatus)() {
  return &::tier4_api_msgs::msg::rosidl_typesupport_introspection_cpp::AwapiAutowareStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
