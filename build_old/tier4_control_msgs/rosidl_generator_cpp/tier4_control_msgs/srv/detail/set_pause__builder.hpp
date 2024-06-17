// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:srv/SetPause.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/srv/detail/set_pause__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPause_Request_pause
{
public:
  Init_SetPause_Request_pause()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_control_msgs::srv::SetPause_Request pause(::tier4_control_msgs::srv::SetPause_Request::_pause_type arg)
  {
    msg_.pause = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::srv::SetPause_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::srv::SetPause_Request>()
{
  return tier4_control_msgs::srv::builder::Init_SetPause_Request_pause();
}

}  // namespace tier4_control_msgs


namespace tier4_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPause_Response_status
{
public:
  Init_SetPause_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_control_msgs::srv::SetPause_Response status(::tier4_control_msgs::srv::SetPause_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::srv::SetPause_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::srv::SetPause_Response>()
{
  return tier4_control_msgs::srv::builder::Init_SetPause_Response_status();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__SET_PAUSE__BUILDER_HPP_
