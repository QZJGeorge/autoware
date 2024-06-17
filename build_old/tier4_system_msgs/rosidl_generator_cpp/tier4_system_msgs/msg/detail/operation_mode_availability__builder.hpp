// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/OperationModeAvailability.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/operation_mode_availability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_OperationModeAvailability_pull_over
{
public:
  explicit Init_OperationModeAvailability_pull_over(::tier4_system_msgs::msg::OperationModeAvailability & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::OperationModeAvailability pull_over(::tier4_system_msgs::msg::OperationModeAvailability::_pull_over_type arg)
  {
    msg_.pull_over = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

class Init_OperationModeAvailability_comfortable_stop
{
public:
  explicit Init_OperationModeAvailability_comfortable_stop(::tier4_system_msgs::msg::OperationModeAvailability & msg)
  : msg_(msg)
  {}
  Init_OperationModeAvailability_pull_over comfortable_stop(::tier4_system_msgs::msg::OperationModeAvailability::_comfortable_stop_type arg)
  {
    msg_.comfortable_stop = std::move(arg);
    return Init_OperationModeAvailability_pull_over(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

class Init_OperationModeAvailability_emergency_stop
{
public:
  explicit Init_OperationModeAvailability_emergency_stop(::tier4_system_msgs::msg::OperationModeAvailability & msg)
  : msg_(msg)
  {}
  Init_OperationModeAvailability_comfortable_stop emergency_stop(::tier4_system_msgs::msg::OperationModeAvailability::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_OperationModeAvailability_comfortable_stop(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

class Init_OperationModeAvailability_remote
{
public:
  explicit Init_OperationModeAvailability_remote(::tier4_system_msgs::msg::OperationModeAvailability & msg)
  : msg_(msg)
  {}
  Init_OperationModeAvailability_emergency_stop remote(::tier4_system_msgs::msg::OperationModeAvailability::_remote_type arg)
  {
    msg_.remote = std::move(arg);
    return Init_OperationModeAvailability_emergency_stop(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

class Init_OperationModeAvailability_local
{
public:
  explicit Init_OperationModeAvailability_local(::tier4_system_msgs::msg::OperationModeAvailability & msg)
  : msg_(msg)
  {}
  Init_OperationModeAvailability_remote local(::tier4_system_msgs::msg::OperationModeAvailability::_local_type arg)
  {
    msg_.local = std::move(arg);
    return Init_OperationModeAvailability_remote(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

class Init_OperationModeAvailability_autonomous
{
public:
  explicit Init_OperationModeAvailability_autonomous(::tier4_system_msgs::msg::OperationModeAvailability & msg)
  : msg_(msg)
  {}
  Init_OperationModeAvailability_local autonomous(::tier4_system_msgs::msg::OperationModeAvailability::_autonomous_type arg)
  {
    msg_.autonomous = std::move(arg);
    return Init_OperationModeAvailability_local(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

class Init_OperationModeAvailability_stop
{
public:
  explicit Init_OperationModeAvailability_stop(::tier4_system_msgs::msg::OperationModeAvailability & msg)
  : msg_(msg)
  {}
  Init_OperationModeAvailability_autonomous stop(::tier4_system_msgs::msg::OperationModeAvailability::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_OperationModeAvailability_autonomous(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

class Init_OperationModeAvailability_stamp
{
public:
  Init_OperationModeAvailability_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperationModeAvailability_stop stamp(::tier4_system_msgs::msg::OperationModeAvailability::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_OperationModeAvailability_stop(msg_);
  }

private:
  ::tier4_system_msgs::msg::OperationModeAvailability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::OperationModeAvailability>()
{
  return tier4_system_msgs::msg::builder::Init_OperationModeAvailability_stamp();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__BUILDER_HPP_
