// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/PauseDriving.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__PAUSE_DRIVING__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__PAUSE_DRIVING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/pause_driving__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_PauseDriving_Request_pause
{
public:
  Init_PauseDriving_Request_pause()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::PauseDriving_Request pause(::tier4_external_api_msgs::srv::PauseDriving_Request::_pause_type arg)
  {
    msg_.pause = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::PauseDriving_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::PauseDriving_Request>()
{
  return tier4_external_api_msgs::srv::builder::Init_PauseDriving_Request_pause();
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_PauseDriving_Response_status
{
public:
  Init_PauseDriving_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::PauseDriving_Response status(::tier4_external_api_msgs::srv::PauseDriving_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::PauseDriving_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::PauseDriving_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_PauseDriving_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__PAUSE_DRIVING__BUILDER_HPP_
