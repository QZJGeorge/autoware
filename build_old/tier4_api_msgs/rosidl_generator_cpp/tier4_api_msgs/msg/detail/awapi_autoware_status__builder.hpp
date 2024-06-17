// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/awapi_autoware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_AwapiAutowareStatus_arrived_goal
{
public:
  explicit Init_AwapiAutowareStatus_arrived_goal(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::AwapiAutowareStatus arrived_goal(::tier4_api_msgs::msg::AwapiAutowareStatus::_arrived_goal_type arg)
  {
    msg_.arrived_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_autonomous_overridden
{
public:
  explicit Init_AwapiAutowareStatus_autonomous_overridden(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_arrived_goal autonomous_overridden(::tier4_api_msgs::msg::AwapiAutowareStatus::_autonomous_overridden_type arg)
  {
    msg_.autonomous_overridden = std::move(arg);
    return Init_AwapiAutowareStatus_arrived_goal(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_error_diagnostics
{
public:
  explicit Init_AwapiAutowareStatus_error_diagnostics(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_autonomous_overridden error_diagnostics(::tier4_api_msgs::msg::AwapiAutowareStatus::_error_diagnostics_type arg)
  {
    msg_.error_diagnostics = std::move(arg);
    return Init_AwapiAutowareStatus_autonomous_overridden(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_diagnostics
{
public:
  explicit Init_AwapiAutowareStatus_diagnostics(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_error_diagnostics diagnostics(::tier4_api_msgs::msg::AwapiAutowareStatus::_diagnostics_type arg)
  {
    msg_.diagnostics = std::move(arg);
    return Init_AwapiAutowareStatus_error_diagnostics(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_stop_reason
{
public:
  explicit Init_AwapiAutowareStatus_stop_reason(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_diagnostics stop_reason(::tier4_api_msgs::msg::AwapiAutowareStatus::_stop_reason_type arg)
  {
    msg_.stop_reason = std::move(arg);
    return Init_AwapiAutowareStatus_diagnostics(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_hazard_status
{
public:
  explicit Init_AwapiAutowareStatus_hazard_status(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_stop_reason hazard_status(::tier4_api_msgs::msg::AwapiAutowareStatus::_hazard_status_type arg)
  {
    msg_.hazard_status = std::move(arg);
    return Init_AwapiAutowareStatus_stop_reason(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_current_max_velocity
{
public:
  explicit Init_AwapiAutowareStatus_current_max_velocity(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_hazard_status current_max_velocity(::tier4_api_msgs::msg::AwapiAutowareStatus::_current_max_velocity_type arg)
  {
    msg_.current_max_velocity = std::move(arg);
    return Init_AwapiAutowareStatus_hazard_status(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_emergency_stopped
{
public:
  explicit Init_AwapiAutowareStatus_emergency_stopped(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_current_max_velocity emergency_stopped(::tier4_api_msgs::msg::AwapiAutowareStatus::_emergency_stopped_type arg)
  {
    msg_.emergency_stopped = std::move(arg);
    return Init_AwapiAutowareStatus_current_max_velocity(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_gate_mode
{
public:
  explicit Init_AwapiAutowareStatus_gate_mode(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_emergency_stopped gate_mode(::tier4_api_msgs::msg::AwapiAutowareStatus::_gate_mode_type arg)
  {
    msg_.gate_mode = std::move(arg);
    return Init_AwapiAutowareStatus_emergency_stopped(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_control_mode
{
public:
  explicit Init_AwapiAutowareStatus_control_mode(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_gate_mode control_mode(::tier4_api_msgs::msg::AwapiAutowareStatus::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_AwapiAutowareStatus_gate_mode(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_autoware_state
{
public:
  explicit Init_AwapiAutowareStatus_autoware_state(::tier4_api_msgs::msg::AwapiAutowareStatus & msg)
  : msg_(msg)
  {}
  Init_AwapiAutowareStatus_control_mode autoware_state(::tier4_api_msgs::msg::AwapiAutowareStatus::_autoware_state_type arg)
  {
    msg_.autoware_state = std::move(arg);
    return Init_AwapiAutowareStatus_control_mode(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

class Init_AwapiAutowareStatus_header
{
public:
  Init_AwapiAutowareStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AwapiAutowareStatus_autoware_state header(::tier4_api_msgs::msg::AwapiAutowareStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AwapiAutowareStatus_autoware_state(msg_);
  }

private:
  ::tier4_api_msgs::msg::AwapiAutowareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::AwapiAutowareStatus>()
{
  return tier4_api_msgs::msg::builder::Init_AwapiAutowareStatus_header();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__BUILDER_HPP_
