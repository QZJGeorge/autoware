// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__BUILDER_HPP_
#define MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mcity_msgs/msg/detail/planned_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mcity_msgs
{

namespace msg
{

namespace builder
{

class Init_PlannedPath_ori_vector
{
public:
  explicit Init_PlannedPath_ori_vector(::mcity_msgs::msg::PlannedPath & msg)
  : msg_(msg)
  {}
  ::mcity_msgs::msg::PlannedPath ori_vector(::mcity_msgs::msg::PlannedPath::_ori_vector_type arg)
  {
    msg_.ori_vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

class Init_PlannedPath_vd_vector
{
public:
  explicit Init_PlannedPath_vd_vector(::mcity_msgs::msg::PlannedPath & msg)
  : msg_(msg)
  {}
  Init_PlannedPath_ori_vector vd_vector(::mcity_msgs::msg::PlannedPath::_vd_vector_type arg)
  {
    msg_.vd_vector = std::move(arg);
    return Init_PlannedPath_ori_vector(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

class Init_PlannedPath_y_vector
{
public:
  explicit Init_PlannedPath_y_vector(::mcity_msgs::msg::PlannedPath & msg)
  : msg_(msg)
  {}
  Init_PlannedPath_vd_vector y_vector(::mcity_msgs::msg::PlannedPath::_y_vector_type arg)
  {
    msg_.y_vector = std::move(arg);
    return Init_PlannedPath_vd_vector(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

class Init_PlannedPath_x_vector
{
public:
  explicit Init_PlannedPath_x_vector(::mcity_msgs::msg::PlannedPath & msg)
  : msg_(msg)
  {}
  Init_PlannedPath_y_vector x_vector(::mcity_msgs::msg::PlannedPath::_x_vector_type arg)
  {
    msg_.x_vector = std::move(arg);
    return Init_PlannedPath_y_vector(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

class Init_PlannedPath_estop
{
public:
  explicit Init_PlannedPath_estop(::mcity_msgs::msg::PlannedPath & msg)
  : msg_(msg)
  {}
  Init_PlannedPath_x_vector estop(::mcity_msgs::msg::PlannedPath::_estop_type arg)
  {
    msg_.estop = std::move(arg);
    return Init_PlannedPath_x_vector(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

class Init_PlannedPath_go
{
public:
  explicit Init_PlannedPath_go(::mcity_msgs::msg::PlannedPath & msg)
  : msg_(msg)
  {}
  Init_PlannedPath_estop go(::mcity_msgs::msg::PlannedPath::_go_type arg)
  {
    msg_.go = std::move(arg);
    return Init_PlannedPath_estop(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

class Init_PlannedPath_time_resolution
{
public:
  explicit Init_PlannedPath_time_resolution(::mcity_msgs::msg::PlannedPath & msg)
  : msg_(msg)
  {}
  Init_PlannedPath_go time_resolution(::mcity_msgs::msg::PlannedPath::_time_resolution_type arg)
  {
    msg_.time_resolution = std::move(arg);
    return Init_PlannedPath_go(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

class Init_PlannedPath_timestamp
{
public:
  Init_PlannedPath_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannedPath_time_resolution timestamp(::mcity_msgs::msg::PlannedPath::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PlannedPath_time_resolution(msg_);
  }

private:
  ::mcity_msgs::msg::PlannedPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mcity_msgs::msg::PlannedPath>()
{
  return mcity_msgs::msg::builder::Init_PlannedPath_timestamp();
}

}  // namespace mcity_msgs

#endif  // MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__BUILDER_HPP_
