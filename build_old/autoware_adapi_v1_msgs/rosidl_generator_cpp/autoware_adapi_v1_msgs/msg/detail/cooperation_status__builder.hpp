// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_STATUS__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_CooperationStatus_cancellable
{
public:
  explicit Init_CooperationStatus_cancellable(::autoware_adapi_v1_msgs::msg::CooperationStatus & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::CooperationStatus cancellable(::autoware_adapi_v1_msgs::msg::CooperationStatus::_cancellable_type arg)
  {
    msg_.cancellable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationStatus msg_;
};

class Init_CooperationStatus_cooperator
{
public:
  explicit Init_CooperationStatus_cooperator(::autoware_adapi_v1_msgs::msg::CooperationStatus & msg)
  : msg_(msg)
  {}
  Init_CooperationStatus_cancellable cooperator(::autoware_adapi_v1_msgs::msg::CooperationStatus::_cooperator_type arg)
  {
    msg_.cooperator = std::move(arg);
    return Init_CooperationStatus_cancellable(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationStatus msg_;
};

class Init_CooperationStatus_autonomous
{
public:
  explicit Init_CooperationStatus_autonomous(::autoware_adapi_v1_msgs::msg::CooperationStatus & msg)
  : msg_(msg)
  {}
  Init_CooperationStatus_cooperator autonomous(::autoware_adapi_v1_msgs::msg::CooperationStatus::_autonomous_type arg)
  {
    msg_.autonomous = std::move(arg);
    return Init_CooperationStatus_cooperator(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationStatus msg_;
};

class Init_CooperationStatus_uuid
{
public:
  Init_CooperationStatus_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperationStatus_autonomous uuid(::autoware_adapi_v1_msgs::msg::CooperationStatus::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_CooperationStatus_autonomous(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::CooperationStatus>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_CooperationStatus_uuid();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_STATUS__BUILDER_HPP_
