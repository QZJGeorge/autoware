// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_simulation_msgs:msg/SimulationEvents.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__BUILDER_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_simulation_msgs/msg/detail/simulation_events__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_simulation_msgs
{

namespace msg
{

namespace builder
{

class Init_SimulationEvents_fault_injection_events
{
public:
  explicit Init_SimulationEvents_fault_injection_events(::tier4_simulation_msgs::msg::SimulationEvents & msg)
  : msg_(msg)
  {}
  ::tier4_simulation_msgs::msg::SimulationEvents fault_injection_events(::tier4_simulation_msgs::msg::SimulationEvents::_fault_injection_events_type arg)
  {
    msg_.fault_injection_events = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_simulation_msgs::msg::SimulationEvents msg_;
};

class Init_SimulationEvents_stamp
{
public:
  Init_SimulationEvents_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulationEvents_fault_injection_events stamp(::tier4_simulation_msgs::msg::SimulationEvents::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SimulationEvents_fault_injection_events(msg_);
  }

private:
  ::tier4_simulation_msgs::msg::SimulationEvents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_simulation_msgs::msg::SimulationEvents>()
{
  return tier4_simulation_msgs::msg::builder::Init_SimulationEvents_stamp();
}

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__BUILDER_HPP_
