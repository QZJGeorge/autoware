// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/DiagnosticLink.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/diagnostic_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticLink_used
{
public:
  explicit Init_DiagnosticLink_used(::tier4_system_msgs::msg::DiagnosticLink & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::DiagnosticLink used(::tier4_system_msgs::msg::DiagnosticLink::_used_type arg)
  {
    msg_.used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::DiagnosticLink msg_;
};

class Init_DiagnosticLink_index
{
public:
  Init_DiagnosticLink_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticLink_used index(::tier4_system_msgs::msg::DiagnosticLink::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_DiagnosticLink_used(msg_);
  }

private:
  ::tier4_system_msgs::msg::DiagnosticLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::DiagnosticLink>()
{
  return tier4_system_msgs::msg::builder::Init_DiagnosticLink_index();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_LINK__BUILDER_HPP_
