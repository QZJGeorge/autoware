// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:srv/SetStop.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/srv/detail/set_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetStop_Request_request_source
{
public:
  explicit Init_SetStop_Request_request_source(::tier4_control_msgs::srv::SetStop_Request & msg)
  : msg_(msg)
  {}
  ::tier4_control_msgs::srv::SetStop_Request request_source(::tier4_control_msgs::srv::SetStop_Request::_request_source_type arg)
  {
    msg_.request_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::srv::SetStop_Request msg_;
};

class Init_SetStop_Request_stop
{
public:
  Init_SetStop_Request_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetStop_Request_request_source stop(::tier4_control_msgs::srv::SetStop_Request::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_SetStop_Request_request_source(msg_);
  }

private:
  ::tier4_control_msgs::srv::SetStop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::srv::SetStop_Request>()
{
  return tier4_control_msgs::srv::builder::Init_SetStop_Request_stop();
}

}  // namespace tier4_control_msgs


namespace tier4_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetStop_Response_status
{
public:
  Init_SetStop_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_control_msgs::srv::SetStop_Response status(::tier4_control_msgs::srv::SetStop_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::srv::SetStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::srv::SetStop_Response>()
{
  return tier4_control_msgs::srv::builder::Init_SetStop_Response_status();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__BUILDER_HPP_
