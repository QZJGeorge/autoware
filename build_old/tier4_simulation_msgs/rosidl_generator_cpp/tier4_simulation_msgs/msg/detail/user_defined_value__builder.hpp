// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_simulation_msgs:msg/UserDefinedValue.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__BUILDER_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_simulation_msgs/msg/detail/user_defined_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_simulation_msgs
{

namespace msg
{

namespace builder
{

class Init_UserDefinedValue_value
{
public:
  explicit Init_UserDefinedValue_value(::tier4_simulation_msgs::msg::UserDefinedValue & msg)
  : msg_(msg)
  {}
  ::tier4_simulation_msgs::msg::UserDefinedValue value(::tier4_simulation_msgs::msg::UserDefinedValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_simulation_msgs::msg::UserDefinedValue msg_;
};

class Init_UserDefinedValue_type
{
public:
  Init_UserDefinedValue_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserDefinedValue_value type(::tier4_simulation_msgs::msg::UserDefinedValue::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_UserDefinedValue_value(msg_);
  }

private:
  ::tier4_simulation_msgs::msg::UserDefinedValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_simulation_msgs::msg::UserDefinedValue>()
{
  return tier4_simulation_msgs::msg::builder::Init_UserDefinedValue_type();
}

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE__BUILDER_HPP_
