// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/PathChangeModule.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/path_change_module__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathChangeModule_module
{
public:
  explicit Init_PathChangeModule_module(::tier4_planning_msgs::msg::PathChangeModule & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::PathChangeModule module(::tier4_planning_msgs::msg::PathChangeModule::_module_type arg)
  {
    msg_.module = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::PathChangeModule msg_;
};

class Init_PathChangeModule_header
{
public:
  Init_PathChangeModule_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathChangeModule_module header(::tier4_planning_msgs::msg::PathChangeModule::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathChangeModule_module(msg_);
  }

private:
  ::tier4_planning_msgs::msg::PathChangeModule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::PathChangeModule>()
{
  return tier4_planning_msgs::msg::builder::Init_PathChangeModule_header();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE__BUILDER_HPP_
