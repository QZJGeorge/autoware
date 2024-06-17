// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/PREvent.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_EVENT__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/pr_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_PREvent_mount_vehicle
{
public:
  Init_PREvent_mount_vehicle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::msg::PREvent mount_vehicle(::morai_msgs::msg::PREvent::_mount_vehicle_type arg)
  {
    msg_.mount_vehicle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::PREvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::PREvent>()
{
  return morai_msgs::msg::builder::Init_PREvent_mount_vehicle();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__PR_EVENT__BUILDER_HPP_
