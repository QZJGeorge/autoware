// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_performance_analysis:msg/FloatStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_performance_analysis/msg/detail/float_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_performance_analysis
{

namespace msg
{

namespace builder
{

class Init_FloatStamped_data
{
public:
  explicit Init_FloatStamped_data(::control_performance_analysis::msg::FloatStamped & msg)
  : msg_(msg)
  {}
  ::control_performance_analysis::msg::FloatStamped data(::control_performance_analysis::msg::FloatStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_performance_analysis::msg::FloatStamped msg_;
};

class Init_FloatStamped_header
{
public:
  Init_FloatStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FloatStamped_data header(::control_performance_analysis::msg::FloatStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FloatStamped_data(msg_);
  }

private:
  ::control_performance_analysis::msg::FloatStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_performance_analysis::msg::FloatStamped>()
{
  return control_performance_analysis::msg::builder::Init_FloatStamped_header();
}

}  // namespace control_performance_analysis

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_
