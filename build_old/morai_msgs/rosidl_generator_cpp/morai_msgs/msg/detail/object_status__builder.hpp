// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/object_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectStatus_position
{
public:
  explicit Init_ObjectStatus_position(::morai_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::ObjectStatus position(::morai_msgs::msg::ObjectStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_size
{
public:
  explicit Init_ObjectStatus_size(::morai_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_position size(::morai_msgs::msg::ObjectStatus::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_ObjectStatus_position(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_acceleration
{
public:
  explicit Init_ObjectStatus_acceleration(::morai_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_size acceleration(::morai_msgs::msg::ObjectStatus::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ObjectStatus_size(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_velocity
{
public:
  explicit Init_ObjectStatus_velocity(::morai_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_acceleration velocity(::morai_msgs::msg::ObjectStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ObjectStatus_acceleration(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_heading
{
public:
  explicit Init_ObjectStatus_heading(::morai_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_velocity heading(::morai_msgs::msg::ObjectStatus::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_ObjectStatus_velocity(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_name
{
public:
  explicit Init_ObjectStatus_name(::morai_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_heading name(::morai_msgs::msg::ObjectStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ObjectStatus_heading(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_type
{
public:
  explicit Init_ObjectStatus_type(::morai_msgs::msg::ObjectStatus & msg)
  : msg_(msg)
  {}
  Init_ObjectStatus_name type(::morai_msgs::msg::ObjectStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ObjectStatus_name(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

class Init_ObjectStatus_unique_id
{
public:
  Init_ObjectStatus_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectStatus_type unique_id(::morai_msgs::msg::ObjectStatus::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_ObjectStatus_type(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::ObjectStatus>()
{
  return morai_msgs::msg::builder::Init_ObjectStatus_unique_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS__BUILDER_HPP_
