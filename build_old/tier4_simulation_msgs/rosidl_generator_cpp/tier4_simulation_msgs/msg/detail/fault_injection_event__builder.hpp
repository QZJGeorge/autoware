// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_simulation_msgs:msg/FaultInjectionEvent.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__BUILDER_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_simulation_msgs/msg/detail/fault_injection_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_simulation_msgs
{

namespace msg
{

namespace builder
{

class Init_FaultInjectionEvent_name
{
public:
  explicit Init_FaultInjectionEvent_name(::tier4_simulation_msgs::msg::FaultInjectionEvent & msg)
  : msg_(msg)
  {}
  ::tier4_simulation_msgs::msg::FaultInjectionEvent name(::tier4_simulation_msgs::msg::FaultInjectionEvent::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_simulation_msgs::msg::FaultInjectionEvent msg_;
};

class Init_FaultInjectionEvent_level
{
public:
  Init_FaultInjectionEvent_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaultInjectionEvent_name level(::tier4_simulation_msgs::msg::FaultInjectionEvent::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_FaultInjectionEvent_name(msg_);
  }

private:
  ::tier4_simulation_msgs::msg::FaultInjectionEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_simulation_msgs::msg::FaultInjectionEvent>()
{
  return tier4_simulation_msgs::msg::builder::Init_FaultInjectionEvent_level();
}

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__BUILDER_HPP_
