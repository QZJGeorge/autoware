// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_rtc_msgs:msg/Module.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__MODULE__BUILDER_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__MODULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_rtc_msgs/msg/detail/module__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_rtc_msgs
{

namespace msg
{

namespace builder
{

class Init_Module_type
{
public:
  Init_Module_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_rtc_msgs::msg::Module type(::tier4_rtc_msgs::msg::Module::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_rtc_msgs::msg::Module msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_rtc_msgs::msg::Module>()
{
  return tier4_rtc_msgs::msg::builder::Init_Module_type();
}

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__MODULE__BUILDER_HPP_
