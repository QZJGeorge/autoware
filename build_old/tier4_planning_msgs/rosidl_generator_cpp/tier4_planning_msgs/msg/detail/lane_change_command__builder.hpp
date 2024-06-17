// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_COMMAND__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/lane_change_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneChangeCommand_command
{
public:
  explicit Init_LaneChangeCommand_command(::tier4_planning_msgs::msg::LaneChangeCommand & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::LaneChangeCommand command(::tier4_planning_msgs::msg::LaneChangeCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeCommand msg_;
};

class Init_LaneChangeCommand_stamp
{
public:
  Init_LaneChangeCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneChangeCommand_command stamp(::tier4_planning_msgs::msg::LaneChangeCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_LaneChangeCommand_command(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::LaneChangeCommand>()
{
  return tier4_planning_msgs::msg::builder::Init_LaneChangeCommand_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_COMMAND__BUILDER_HPP_
