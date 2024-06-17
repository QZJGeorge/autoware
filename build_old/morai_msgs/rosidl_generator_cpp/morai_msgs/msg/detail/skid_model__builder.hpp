// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_MODEL__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/skid_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SkidModel_torque
{
public:
  explicit Init_SkidModel_torque(::morai_msgs::msg::SkidModel & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SkidModel torque(::morai_msgs::msg::SkidModel::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SkidModel msg_;
};

class Init_SkidModel_rpm
{
public:
  Init_SkidModel_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkidModel_torque rpm(::morai_msgs::msg::SkidModel::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_SkidModel_torque(msg_);
  }

private:
  ::morai_msgs::msg::SkidModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SkidModel>()
{
  return morai_msgs::msg::builder::Init_SkidModel_rpm();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_MODEL__BUILDER_HPP_
