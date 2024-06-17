// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MoraiSimProcStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/morai_sim_proc_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MoraiSimProcStatus_current_status
{
public:
  explicit Init_MoraiSimProcStatus_current_status(::morai_msgs::msg::MoraiSimProcStatus & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::MoraiSimProcStatus current_status(::morai_msgs::msg::MoraiSimProcStatus::_current_status_type arg)
  {
    msg_.current_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcStatus msg_;
};

class Init_MoraiSimProcStatus_current_mode
{
public:
  explicit Init_MoraiSimProcStatus_current_mode(::morai_msgs::msg::MoraiSimProcStatus & msg)
  : msg_(msg)
  {}
  Init_MoraiSimProcStatus_current_status current_mode(::morai_msgs::msg::MoraiSimProcStatus::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return Init_MoraiSimProcStatus_current_status(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcStatus msg_;
};

class Init_MoraiSimProcStatus_command_result
{
public:
  explicit Init_MoraiSimProcStatus_command_result(::morai_msgs::msg::MoraiSimProcStatus & msg)
  : msg_(msg)
  {}
  Init_MoraiSimProcStatus_current_mode command_result(::morai_msgs::msg::MoraiSimProcStatus::_command_result_type arg)
  {
    msg_.command_result = std::move(arg);
    return Init_MoraiSimProcStatus_current_mode(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcStatus msg_;
};

class Init_MoraiSimProcStatus_latest_command_time
{
public:
  explicit Init_MoraiSimProcStatus_latest_command_time(::morai_msgs::msg::MoraiSimProcStatus & msg)
  : msg_(msg)
  {}
  Init_MoraiSimProcStatus_command_result latest_command_time(::morai_msgs::msg::MoraiSimProcStatus::_latest_command_time_type arg)
  {
    msg_.latest_command_time = std::move(arg);
    return Init_MoraiSimProcStatus_command_result(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcStatus msg_;
};

class Init_MoraiSimProcStatus_header
{
public:
  Init_MoraiSimProcStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoraiSimProcStatus_latest_command_time header(::morai_msgs::msg::MoraiSimProcStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MoraiSimProcStatus_latest_command_time(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MoraiSimProcStatus>()
{
  return morai_msgs::msg::builder::Init_MoraiSimProcStatus_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_STATUS__BUILDER_HPP_
