// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_rtc_msgs:srv/CooperateCommands.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_rtc_msgs/srv/detail/cooperate_commands__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_rtc_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CooperateCommands_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_rtc_msgs::srv::CooperateCommands_Request(_init);
}

void CooperateCommands_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_rtc_msgs::srv::CooperateCommands_Request *>(message_memory);
  typed_message->~CooperateCommands_Request();
}

size_t size_function__CooperateCommands_Request__commands(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tier4_rtc_msgs::msg::CooperateCommand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CooperateCommands_Request__commands(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tier4_rtc_msgs::msg::CooperateCommand> *>(untyped_member);
  return &member[index];
}

void * get_function__CooperateCommands_Request__commands(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tier4_rtc_msgs::msg::CooperateCommand> *>(untyped_member);
  return &member[index];
}

void fetch_function__CooperateCommands_Request__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tier4_rtc_msgs::msg::CooperateCommand *>(
    get_const_function__CooperateCommands_Request__commands(untyped_member, index));
  auto & value = *reinterpret_cast<tier4_rtc_msgs::msg::CooperateCommand *>(untyped_value);
  value = item;
}

void assign_function__CooperateCommands_Request__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tier4_rtc_msgs::msg::CooperateCommand *>(
    get_function__CooperateCommands_Request__commands(untyped_member, index));
  const auto & value = *reinterpret_cast<const tier4_rtc_msgs::msg::CooperateCommand *>(untyped_value);
  item = value;
}

void resize_function__CooperateCommands_Request__commands(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tier4_rtc_msgs::msg::CooperateCommand> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CooperateCommands_Request_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs::srv::CooperateCommands_Request, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commands",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_rtc_msgs::msg::CooperateCommand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs::srv::CooperateCommands_Request, commands),  // bytes offset in struct
    nullptr,  // default value
    size_function__CooperateCommands_Request__commands,  // size() function pointer
    get_const_function__CooperateCommands_Request__commands,  // get_const(index) function pointer
    get_function__CooperateCommands_Request__commands,  // get(index) function pointer
    fetch_function__CooperateCommands_Request__commands,  // fetch(index, &value) function pointer
    assign_function__CooperateCommands_Request__commands,  // assign(index, value) function pointer
    resize_function__CooperateCommands_Request__commands  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CooperateCommands_Request_message_members = {
  "tier4_rtc_msgs::srv",  // message namespace
  "CooperateCommands_Request",  // message name
  2,  // number of fields
  sizeof(tier4_rtc_msgs::srv::CooperateCommands_Request),
  CooperateCommands_Request_message_member_array,  // message members
  CooperateCommands_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CooperateCommands_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CooperateCommands_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CooperateCommands_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tier4_rtc_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_rtc_msgs::srv::CooperateCommands_Request>()
{
  return &::tier4_rtc_msgs::srv::rosidl_typesupport_introspection_cpp::CooperateCommands_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_rtc_msgs, srv, CooperateCommands_Request)() {
  return &::tier4_rtc_msgs::srv::rosidl_typesupport_introspection_cpp::CooperateCommands_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tier4_rtc_msgs/srv/detail/cooperate_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_rtc_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CooperateCommands_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_rtc_msgs::srv::CooperateCommands_Response(_init);
}

void CooperateCommands_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_rtc_msgs::srv::CooperateCommands_Response *>(message_memory);
  typed_message->~CooperateCommands_Response();
}

size_t size_function__CooperateCommands_Response__responses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tier4_rtc_msgs::msg::CooperateResponse> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CooperateCommands_Response__responses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tier4_rtc_msgs::msg::CooperateResponse> *>(untyped_member);
  return &member[index];
}

void * get_function__CooperateCommands_Response__responses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tier4_rtc_msgs::msg::CooperateResponse> *>(untyped_member);
  return &member[index];
}

void fetch_function__CooperateCommands_Response__responses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tier4_rtc_msgs::msg::CooperateResponse *>(
    get_const_function__CooperateCommands_Response__responses(untyped_member, index));
  auto & value = *reinterpret_cast<tier4_rtc_msgs::msg::CooperateResponse *>(untyped_value);
  value = item;
}

void assign_function__CooperateCommands_Response__responses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tier4_rtc_msgs::msg::CooperateResponse *>(
    get_function__CooperateCommands_Response__responses(untyped_member, index));
  const auto & value = *reinterpret_cast<const tier4_rtc_msgs::msg::CooperateResponse *>(untyped_value);
  item = value;
}

void resize_function__CooperateCommands_Response__responses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tier4_rtc_msgs::msg::CooperateResponse> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CooperateCommands_Response_message_member_array[1] = {
  {
    "responses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_rtc_msgs::msg::CooperateResponse>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs::srv::CooperateCommands_Response, responses),  // bytes offset in struct
    nullptr,  // default value
    size_function__CooperateCommands_Response__responses,  // size() function pointer
    get_const_function__CooperateCommands_Response__responses,  // get_const(index) function pointer
    get_function__CooperateCommands_Response__responses,  // get(index) function pointer
    fetch_function__CooperateCommands_Response__responses,  // fetch(index, &value) function pointer
    assign_function__CooperateCommands_Response__responses,  // assign(index, value) function pointer
    resize_function__CooperateCommands_Response__responses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CooperateCommands_Response_message_members = {
  "tier4_rtc_msgs::srv",  // message namespace
  "CooperateCommands_Response",  // message name
  1,  // number of fields
  sizeof(tier4_rtc_msgs::srv::CooperateCommands_Response),
  CooperateCommands_Response_message_member_array,  // message members
  CooperateCommands_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CooperateCommands_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CooperateCommands_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CooperateCommands_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tier4_rtc_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_rtc_msgs::srv::CooperateCommands_Response>()
{
  return &::tier4_rtc_msgs::srv::rosidl_typesupport_introspection_cpp::CooperateCommands_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_rtc_msgs, srv, CooperateCommands_Response)() {
  return &::tier4_rtc_msgs::srv::rosidl_typesupport_introspection_cpp::CooperateCommands_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tier4_rtc_msgs/srv/detail/cooperate_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tier4_rtc_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CooperateCommands_service_members = {
  "tier4_rtc_msgs::srv",  // service namespace
  "CooperateCommands",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tier4_rtc_msgs::srv::CooperateCommands>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CooperateCommands_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CooperateCommands_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tier4_rtc_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tier4_rtc_msgs::srv::CooperateCommands>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tier4_rtc_msgs::srv::rosidl_typesupport_introspection_cpp::CooperateCommands_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tier4_rtc_msgs::srv::CooperateCommands_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tier4_rtc_msgs::srv::CooperateCommands_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_rtc_msgs, srv, CooperateCommands)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tier4_rtc_msgs::srv::CooperateCommands>();
}

#ifdef __cplusplus
}
#endif
