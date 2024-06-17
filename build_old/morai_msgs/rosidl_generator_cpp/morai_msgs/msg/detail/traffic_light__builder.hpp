// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLight_num_of_light
{
public:
  explicit Init_TrafficLight_num_of_light(::morai_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::TrafficLight num_of_light(::morai_msgs::msg::TrafficLight::_num_of_light_type arg)
  {
    msg_.num_of_light = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_light
{
public:
  explicit Init_TrafficLight_light(::morai_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_num_of_light light(::morai_msgs::msg::TrafficLight::_light_type arg)
  {
    msg_.light = std::move(arg);
    return Init_TrafficLight_num_of_light(msg_);
  }

private:
  ::morai_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_header
{
public:
  Init_TrafficLight_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLight_light header(::morai_msgs::msg::TrafficLight::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficLight_light(msg_);
  }

private:
  ::morai_msgs::msg::TrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::TrafficLight>()
{
  return morai_msgs::msg::builder::Init_TrafficLight_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
