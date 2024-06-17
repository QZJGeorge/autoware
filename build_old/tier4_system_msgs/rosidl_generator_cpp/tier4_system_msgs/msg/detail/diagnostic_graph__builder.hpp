// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/DiagnosticGraph.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_GRAPH__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/diagnostic_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticGraph_nodes
{
public:
  explicit Init_DiagnosticGraph_nodes(::tier4_system_msgs::msg::DiagnosticGraph & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::DiagnosticGraph nodes(::tier4_system_msgs::msg::DiagnosticGraph::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::DiagnosticGraph msg_;
};

class Init_DiagnosticGraph_stamp
{
public:
  Init_DiagnosticGraph_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticGraph_nodes stamp(::tier4_system_msgs::msg::DiagnosticGraph::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DiagnosticGraph_nodes(msg_);
  }

private:
  ::tier4_system_msgs::msg::DiagnosticGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::DiagnosticGraph>()
{
  return tier4_system_msgs::msg::builder::Init_DiagnosticGraph_stamp();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_GRAPH__BUILDER_HPP_
