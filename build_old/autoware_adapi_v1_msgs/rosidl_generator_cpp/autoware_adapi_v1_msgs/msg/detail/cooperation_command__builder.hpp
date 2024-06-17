// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/cooperation_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_CooperationCommand_cooperator
{
public:
  explicit Init_CooperationCommand_cooperator(::autoware_adapi_v1_msgs::msg::CooperationCommand & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::CooperationCommand cooperator(::autoware_adapi_v1_msgs::msg::CooperationCommand::_cooperator_type arg)
  {
    msg_.cooperator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationCommand msg_;
};

class Init_CooperationCommand_uuid
{
public:
  Init_CooperationCommand_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CooperationCommand_cooperator uuid(::autoware_adapi_v1_msgs::msg::CooperationCommand::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_CooperationCommand_cooperator(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::CooperationCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::CooperationCommand>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_CooperationCommand_uuid();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__BUILDER_HPP_
