// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/EngageStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ENGAGE_STATUS__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ENGAGE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/engage_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_EngageStatus_engage
{
public:
  explicit Init_EngageStatus_engage(::tier4_external_api_msgs::msg::EngageStatus & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::EngageStatus engage(::tier4_external_api_msgs::msg::EngageStatus::_engage_type arg)
  {
    msg_.engage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::EngageStatus msg_;
};

class Init_EngageStatus_stamp
{
public:
  Init_EngageStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EngageStatus_engage stamp(::tier4_external_api_msgs::msg::EngageStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_EngageStatus_engage(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::EngageStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::EngageStatus>()
{
  return tier4_external_api_msgs::msg::builder::Init_EngageStatus_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ENGAGE_STATUS__BUILDER_HPP_
