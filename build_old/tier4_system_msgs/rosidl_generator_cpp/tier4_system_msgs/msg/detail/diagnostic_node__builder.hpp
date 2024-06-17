// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/DiagnosticNode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/diagnostic_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticNode_links
{
public:
  explicit Init_DiagnosticNode_links(::tier4_system_msgs::msg::DiagnosticNode & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::DiagnosticNode links(::tier4_system_msgs::msg::DiagnosticNode::_links_type arg)
  {
    msg_.links = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::DiagnosticNode msg_;
};

class Init_DiagnosticNode_status
{
public:
  Init_DiagnosticNode_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticNode_links status(::tier4_system_msgs::msg::DiagnosticNode::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DiagnosticNode_links(msg_);
  }

private:
  ::tier4_system_msgs::msg::DiagnosticNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::DiagnosticNode>()
{
  return tier4_system_msgs::msg::builder::Init_DiagnosticNode_status();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_NODE__BUILDER_HPP_
