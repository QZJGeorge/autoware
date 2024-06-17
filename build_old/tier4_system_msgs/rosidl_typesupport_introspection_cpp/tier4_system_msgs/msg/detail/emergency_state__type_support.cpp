// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_system_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_system_msgs/msg/detail/emergency_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_system_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EmergencyState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_system_msgs::msg::EmergencyState(_init);
}

void EmergencyState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_system_msgs::msg::EmergencyState *>(message_memory);
  typed_message->~EmergencyState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyState_message_member_array[1] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs::msg::EmergencyState, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyState_message_members = {
  "tier4_system_msgs::msg",  // message namespace
  "EmergencyState",  // message name
  1,  // number of fields
  sizeof(tier4_system_msgs::msg::EmergencyState),
  EmergencyState_message_member_array,  // message members
  EmergencyState_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_system_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_system_msgs::msg::EmergencyState>()
{
  return &::tier4_system_msgs::msg::rosidl_typesupport_introspection_cpp::EmergencyState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_system_msgs, msg, EmergencyState)() {
  return &::tier4_system_msgs::msg::rosidl_typesupport_introspection_cpp::EmergencyState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
