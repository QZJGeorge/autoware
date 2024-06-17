// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_external_api_msgs:msg/LocalizationScore.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_external_api_msgs/msg/detail/localization_score__struct.hpp"
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

void LocalizationScore_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_external_api_msgs::msg::LocalizationScore(_init);
}

void LocalizationScore_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_external_api_msgs::msg::LocalizationScore *>(message_memory);
  typed_message->~LocalizationScore();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LocalizationScore_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs::msg::LocalizationScore, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs::msg::LocalizationScore, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LocalizationScore_message_members = {
  "tier4_external_api_msgs::msg",  // message namespace
  "LocalizationScore",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs::msg::LocalizationScore),
  LocalizationScore_message_member_array,  // message members
  LocalizationScore_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizationScore_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LocalizationScore_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LocalizationScore_message_members,
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
get_message_type_support_handle<tier4_external_api_msgs::msg::LocalizationScore>()
{
  return &::tier4_external_api_msgs::msg::rosidl_typesupport_introspection_cpp::LocalizationScore_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_external_api_msgs, msg, LocalizationScore)() {
  return &::tier4_external_api_msgs::msg::rosidl_typesupport_introspection_cpp::LocalizationScore_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
