// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_external_api_msgs:srv/GetVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__BUILDER_HPP_
#define AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_external_api_msgs/srv/detail/get_version__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_external_api_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_external_api_msgs::srv::GetVersion_Request>()
{
  return ::autoware_external_api_msgs::srv::GetVersion_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace autoware_external_api_msgs


namespace autoware_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_GetVersion_Response_version
{
public:
  explicit Init_GetVersion_Response_version(::autoware_external_api_msgs::srv::GetVersion_Response & msg)
  : msg_(msg)
  {}
  ::autoware_external_api_msgs::srv::GetVersion_Response version(::autoware_external_api_msgs::srv::GetVersion_Response::_version_type arg)
  {
    msg_.version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_external_api_msgs::srv::GetVersion_Response msg_;
};

class Init_GetVersion_Response_status
{
public:
  Init_GetVersion_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVersion_Response_version status(::autoware_external_api_msgs::srv::GetVersion_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetVersion_Response_version(msg_);
  }

private:
  ::autoware_external_api_msgs::srv::GetVersion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_external_api_msgs::srv::GetVersion_Response>()
{
  return autoware_external_api_msgs::srv::builder::Init_GetVersion_Response_status();
}

}  // namespace autoware_external_api_msgs

#endif  // AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__BUILDER_HPP_
