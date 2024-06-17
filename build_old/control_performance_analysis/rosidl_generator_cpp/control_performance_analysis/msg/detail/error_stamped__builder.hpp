// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__BUILDER_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_performance_analysis/msg/detail/error_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_performance_analysis
{

namespace msg
{

namespace builder
{

class Init_ErrorStamped_error
{
public:
  explicit Init_ErrorStamped_error(::control_performance_analysis::msg::ErrorStamped & msg)
  : msg_(msg)
  {}
  ::control_performance_analysis::msg::ErrorStamped error(::control_performance_analysis::msg::ErrorStamped::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_performance_analysis::msg::ErrorStamped msg_;
};

class Init_ErrorStamped_header
{
public:
  Init_ErrorStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorStamped_error header(::control_performance_analysis::msg::ErrorStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ErrorStamped_error(msg_);
  }

private:
  ::control_performance_analysis::msg::ErrorStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_performance_analysis::msg::ErrorStamped>()
{
  return control_performance_analysis::msg::builder::Init_ErrorStamped_header();
}

}  // namespace control_performance_analysis

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR_STAMPED__BUILDER_HPP_
