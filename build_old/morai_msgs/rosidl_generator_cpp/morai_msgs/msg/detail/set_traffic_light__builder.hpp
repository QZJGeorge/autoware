// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SetTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/set_traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SetTrafficLight_traffic_light_status
{
public:
  explicit Init_SetTrafficLight_traffic_light_status(::morai_msgs::msg::SetTrafficLight & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SetTrafficLight traffic_light_status(::morai_msgs::msg::SetTrafficLight::_traffic_light_status_type arg)
  {
    msg_.traffic_light_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SetTrafficLight msg_;
};

class Init_SetTrafficLight_traffic_light_index
{
public:
  Init_SetTrafficLight_traffic_light_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTrafficLight_traffic_light_status traffic_light_index(::morai_msgs::msg::SetTrafficLight::_traffic_light_index_type arg)
  {
    msg_.traffic_light_index = std::move(arg);
    return Init_SetTrafficLight_traffic_light_status(msg_);
  }

private:
  ::morai_msgs::msg::SetTrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SetTrafficLight>()
{
  return morai_msgs::msg::builder::Init_SetTrafficLight_traffic_light_index();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__BUILDER_HPP_
