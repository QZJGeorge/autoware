// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/SetRosbagLoggingMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_ROSBAG_LOGGING_MODE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_ROSBAG_LOGGING_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/set_rosbag_logging_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRosbagLoggingMode_Request_is_operation_mode
{
public:
  Init_SetRosbagLoggingMode_Request_is_operation_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Request is_operation_mode(::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Request::_is_operation_mode_type arg)
  {
    msg_.is_operation_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Request>()
{
  return tier4_external_api_msgs::srv::builder::Init_SetRosbagLoggingMode_Request_is_operation_mode();
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_SetRosbagLoggingMode_Response_status
{
public:
  Init_SetRosbagLoggingMode_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Response status(::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::SetRosbagLoggingMode_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_SetRosbagLoggingMode_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_ROSBAG_LOGGING_MODE__BUILDER_HPP_
