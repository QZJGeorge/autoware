// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/Distance.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__DISTANCE__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_Distance_status
{
public:
  explicit Init_Distance_status(::eagleye_msgs::msg::Distance & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::Distance status(::eagleye_msgs::msg::Distance::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::Distance msg_;
};

class Init_Distance_distance
{
public:
  explicit Init_Distance_distance(::eagleye_msgs::msg::Distance & msg)
  : msg_(msg)
  {}
  Init_Distance_status distance(::eagleye_msgs::msg::Distance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Distance_status(msg_);
  }

private:
  ::eagleye_msgs::msg::Distance msg_;
};

class Init_Distance_header
{
public:
  Init_Distance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_distance header(::eagleye_msgs::msg::Distance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Distance_distance(msg_);
  }

private:
  ::eagleye_msgs::msg::Distance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::Distance>()
{
  return eagleye_msgs::msg::builder::Init_Distance_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__DISTANCE__BUILDER_HPP_
