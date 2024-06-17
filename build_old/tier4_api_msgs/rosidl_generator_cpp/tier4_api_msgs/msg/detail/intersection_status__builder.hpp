// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/IntersectionStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/intersection_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionStatus_status
{
public:
  explicit Init_IntersectionStatus_status(::tier4_api_msgs::msg::IntersectionStatus & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::IntersectionStatus status(::tier4_api_msgs::msg::IntersectionStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::IntersectionStatus msg_;
};

class Init_IntersectionStatus_header
{
public:
  Init_IntersectionStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionStatus_status header(::tier4_api_msgs::msg::IntersectionStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntersectionStatus_status(msg_);
  }

private:
  ::tier4_api_msgs::msg::IntersectionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::IntersectionStatus>()
{
  return tier4_api_msgs::msg::builder::Init_IntersectionStatus_header();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__INTERSECTION_STATUS__BUILDER_HPP_
