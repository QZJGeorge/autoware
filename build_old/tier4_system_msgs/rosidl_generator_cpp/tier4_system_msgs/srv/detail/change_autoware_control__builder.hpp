// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:srv/ChangeAutowareControl.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/srv/detail/change_autoware_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeAutowareControl_Request_autoware_control
{
public:
  Init_ChangeAutowareControl_Request_autoware_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_system_msgs::srv::ChangeAutowareControl_Request autoware_control(::tier4_system_msgs::srv::ChangeAutowareControl_Request::_autoware_control_type arg)
  {
    msg_.autoware_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::srv::ChangeAutowareControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::srv::ChangeAutowareControl_Request>()
{
  return tier4_system_msgs::srv::builder::Init_ChangeAutowareControl_Request_autoware_control();
}

}  // namespace tier4_system_msgs


namespace tier4_system_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeAutowareControl_Response_status
{
public:
  Init_ChangeAutowareControl_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_system_msgs::srv::ChangeAutowareControl_Response status(::tier4_system_msgs::srv::ChangeAutowareControl_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::srv::ChangeAutowareControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::srv::ChangeAutowareControl_Response>()
{
  return tier4_system_msgs::srv::builder::Init_ChangeAutowareControl_Response_status();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_AUTOWARE_CONTROL__BUILDER_HPP_
