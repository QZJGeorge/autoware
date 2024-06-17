// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:srv/ChangeOperationMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/srv/detail/change_operation_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeOperationMode_Request_mode
{
public:
  Init_ChangeOperationMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_system_msgs::srv::ChangeOperationMode_Request mode(::tier4_system_msgs::srv::ChangeOperationMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::srv::ChangeOperationMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::srv::ChangeOperationMode_Request>()
{
  return tier4_system_msgs::srv::builder::Init_ChangeOperationMode_Request_mode();
}

}  // namespace tier4_system_msgs


namespace tier4_system_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeOperationMode_Response_status
{
public:
  Init_ChangeOperationMode_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_system_msgs::srv::ChangeOperationMode_Response status(::tier4_system_msgs::srv::ChangeOperationMode_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::srv::ChangeOperationMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::srv::ChangeOperationMode_Response>()
{
  return tier4_system_msgs::srv::builder::Init_ChangeOperationMode_Response_status();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__BUILDER_HPP_
