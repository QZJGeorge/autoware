// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/InitializePose.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/initialize_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_InitializePose_Request_pose
{
public:
  Init_InitializePose_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::InitializePose_Request pose(::tier4_external_api_msgs::srv::InitializePose_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::InitializePose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::InitializePose_Request>()
{
  return tier4_external_api_msgs::srv::builder::Init_InitializePose_Request_pose();
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_InitializePose_Response_status
{
public:
  Init_InitializePose_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::InitializePose_Response status(::tier4_external_api_msgs::srv::InitializePose_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::InitializePose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::InitializePose_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_InitializePose_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE__BUILDER_HPP_
