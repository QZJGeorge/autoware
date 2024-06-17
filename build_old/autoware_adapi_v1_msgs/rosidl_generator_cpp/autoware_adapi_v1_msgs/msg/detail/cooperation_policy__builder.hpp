// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationPolicy.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_CooperationPolicy_policy
{
public:
  explicit Init_CooperationPolicy_policy(::autoware_adapi_v1_msgs::msg::CooperationPolicy & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::CooperationPolicy policy(::autoware_adapi_v1_msgs::msg::CooperationPolicy::_policy_type arg)
  {
    msg_.policy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationPolicy msg_;
};

class Init_CooperationPolicy_sequence
{
public:
  explicit Init_CooperationPolicy_sequence(::autoware_adapi_v1_msgs::msg::CooperationPolicy & msg)
  : msg_(msg)
  {}
  Init_CooperationPolicy_policy sequence(::autoware_adapi_v1_msgs::msg::CooperationPolicy::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_CooperationPolicy_policy(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationPolicy msg_;
};

class Init_CooperationPolicy_behavior
{
public:
  Init_CooperationPolicy_behavior()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperationPolicy_sequence behavior(::autoware_adapi_v1_msgs::msg::CooperationPolicy::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_CooperationPolicy_sequence(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationPolicy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::CooperationPolicy>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_CooperationPolicy_behavior();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__BUILDER_HPP_
