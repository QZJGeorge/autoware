// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/InitializePoseAuto.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE_AUTO__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE_AUTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/initialize_pose_auto__struct.hpp"
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
auto build<::tier4_external_api_msgs::srv::InitializePoseAuto_Request>()
{
  return ::tier4_external_api_msgs::srv::InitializePoseAuto_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_InitializePoseAuto_Response_status
{
public:
  Init_InitializePoseAuto_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::InitializePoseAuto_Response status(::tier4_external_api_msgs::srv::InitializePoseAuto_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::InitializePoseAuto_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::InitializePoseAuto_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_InitializePoseAuto_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE_AUTO__BUILDER_HPP_
