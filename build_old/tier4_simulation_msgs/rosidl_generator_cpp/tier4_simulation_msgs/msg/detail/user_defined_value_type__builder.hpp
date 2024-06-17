// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_simulation_msgs:msg/UserDefinedValueType.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__BUILDER_HPP_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_simulation_msgs/msg/detail/user_defined_value_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_simulation_msgs
{

namespace msg
{

namespace builder
{

class Init_UserDefinedValueType_data
{
public:
  Init_UserDefinedValueType_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_simulation_msgs::msg::UserDefinedValueType data(::tier4_simulation_msgs::msg::UserDefinedValueType::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_simulation_msgs::msg::UserDefinedValueType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_simulation_msgs::msg::UserDefinedValueType>()
{
  return tier4_simulation_msgs::msg::builder::Init_UserDefinedValueType_data();
}

}  // namespace tier4_simulation_msgs

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__USER_DEFINED_VALUE_TYPE__BUILDER_HPP_
