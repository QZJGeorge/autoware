// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:srv/ExternalCommandSelect.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/srv/detail/external_command_select__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExternalCommandSelect_Request_mode
{
public:
  Init_ExternalCommandSelect_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_control_msgs::srv::ExternalCommandSelect_Request mode(::tier4_control_msgs::srv::ExternalCommandSelect_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::srv::ExternalCommandSelect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::srv::ExternalCommandSelect_Request>()
{
  return tier4_control_msgs::srv::builder::Init_ExternalCommandSelect_Request_mode();
}

}  // namespace tier4_control_msgs


namespace tier4_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ExternalCommandSelect_Response_message
{
public:
  explicit Init_ExternalCommandSelect_Response_message(::tier4_control_msgs::srv::ExternalCommandSelect_Response & msg)
  : msg_(msg)
  {}
  ::tier4_control_msgs::srv::ExternalCommandSelect_Response message(::tier4_control_msgs::srv::ExternalCommandSelect_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::srv::ExternalCommandSelect_Response msg_;
};

class Init_ExternalCommandSelect_Response_success
{
public:
  Init_ExternalCommandSelect_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalCommandSelect_Response_message success(::tier4_control_msgs::srv::ExternalCommandSelect_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExternalCommandSelect_Response_message(msg_);
  }

private:
  ::tier4_control_msgs::srv::ExternalCommandSelect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::srv::ExternalCommandSelect_Response>()
{
  return tier4_control_msgs::srv::builder::Init_ExternalCommandSelect_Response_success();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__BUILDER_HPP_
