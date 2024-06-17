// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/Scenario.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/scenario__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Scenario_activating_scenarios
{
public:
  explicit Init_Scenario_activating_scenarios(::tier4_planning_msgs::msg::Scenario & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::Scenario activating_scenarios(::tier4_planning_msgs::msg::Scenario::_activating_scenarios_type arg)
  {
    msg_.activating_scenarios = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::Scenario msg_;
};

class Init_Scenario_current_scenario
{
public:
  Init_Scenario_current_scenario()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Scenario_activating_scenarios current_scenario(::tier4_planning_msgs::msg::Scenario::_current_scenario_type arg)
  {
    msg_.current_scenario = std::move(arg);
    return Init_Scenario_activating_scenarios(msg_);
  }

private:
  ::tier4_planning_msgs::msg::Scenario msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::Scenario>()
{
  return tier4_planning_msgs::msg::builder::Init_Scenario_current_scenario();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__BUILDER_HPP_
