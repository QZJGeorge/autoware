// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/ClassifiedDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CLASSIFIED_DIAGNOSTICS__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CLASSIFIED_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/classified_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_ClassifiedDiagnostics_diagnostics_notice
{
public:
  explicit Init_ClassifiedDiagnostics_diagnostics_notice(::tier4_external_api_msgs::msg::ClassifiedDiagnostics & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::ClassifiedDiagnostics diagnostics_notice(::tier4_external_api_msgs::msg::ClassifiedDiagnostics::_diagnostics_notice_type arg)
  {
    msg_.diagnostics_notice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ClassifiedDiagnostics msg_;
};

class Init_ClassifiedDiagnostics_stamp
{
public:
  Init_ClassifiedDiagnostics_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClassifiedDiagnostics_diagnostics_notice stamp(::tier4_external_api_msgs::msg::ClassifiedDiagnostics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ClassifiedDiagnostics_diagnostics_notice(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ClassifiedDiagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::ClassifiedDiagnostics>()
{
  return tier4_external_api_msgs::msg::builder::Init_ClassifiedDiagnostics_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CLASSIFIED_DIAGNOSTICS__BUILDER_HPP_
