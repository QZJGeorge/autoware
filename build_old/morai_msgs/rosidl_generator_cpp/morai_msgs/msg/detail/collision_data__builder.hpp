// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/collision_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionData_collision_object
{
public:
  explicit Init_CollisionData_collision_object(::morai_msgs::msg::CollisionData & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::CollisionData collision_object(::morai_msgs::msg::CollisionData::_collision_object_type arg)
  {
    msg_.collision_object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::CollisionData msg_;
};

class Init_CollisionData_global_offset_z
{
public:
  explicit Init_CollisionData_global_offset_z(::morai_msgs::msg::CollisionData & msg)
  : msg_(msg)
  {}
  Init_CollisionData_collision_object global_offset_z(::morai_msgs::msg::CollisionData::_global_offset_z_type arg)
  {
    msg_.global_offset_z = std::move(arg);
    return Init_CollisionData_collision_object(msg_);
  }

private:
  ::morai_msgs::msg::CollisionData msg_;
};

class Init_CollisionData_global_offset_y
{
public:
  explicit Init_CollisionData_global_offset_y(::morai_msgs::msg::CollisionData & msg)
  : msg_(msg)
  {}
  Init_CollisionData_global_offset_z global_offset_y(::morai_msgs::msg::CollisionData::_global_offset_y_type arg)
  {
    msg_.global_offset_y = std::move(arg);
    return Init_CollisionData_global_offset_z(msg_);
  }

private:
  ::morai_msgs::msg::CollisionData msg_;
};

class Init_CollisionData_global_offset_x
{
public:
  explicit Init_CollisionData_global_offset_x(::morai_msgs::msg::CollisionData & msg)
  : msg_(msg)
  {}
  Init_CollisionData_global_offset_y global_offset_x(::morai_msgs::msg::CollisionData::_global_offset_x_type arg)
  {
    msg_.global_offset_x = std::move(arg);
    return Init_CollisionData_global_offset_y(msg_);
  }

private:
  ::morai_msgs::msg::CollisionData msg_;
};

class Init_CollisionData_header
{
public:
  Init_CollisionData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionData_global_offset_x header(::morai_msgs::msg::CollisionData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CollisionData_global_offset_x(msg_);
  }

private:
  ::morai_msgs::msg::CollisionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::CollisionData>()
{
  return morai_msgs::msg::builder::Init_CollisionData_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__BUILDER_HPP_
