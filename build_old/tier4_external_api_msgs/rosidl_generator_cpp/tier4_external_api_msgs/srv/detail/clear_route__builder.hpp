// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/ClearRoute.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__CLEAR_ROUTE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__CLEAR_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/clear_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::ClearRoute_Request>()
{
  return ::tier4_external_api_msgs::srv::ClearRoute_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearRoute_Response_status
{
public:
  Init_ClearRoute_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::ClearRoute_Response status(::tier4_external_api_msgs::srv::ClearRoute_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::ClearRoute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::ClearRoute_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_ClearRoute_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__CLEAR_ROUTE__BUILDER_HPP_
