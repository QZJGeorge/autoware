// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/VehicleCollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/vehicle_collision_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleCollisionData_collisions
{
public:
  explicit Init_VehicleCollisionData_collisions(::morai_msgs::msg::VehicleCollisionData & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::VehicleCollisionData collisions(::morai_msgs::msg::VehicleCollisionData::_collisions_type arg)
  {
    msg_.collisions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::VehicleCollisionData msg_;
};

class Init_VehicleCollisionData_header
{
public:
  Init_VehicleCollisionData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleCollisionData_collisions header(::morai_msgs::msg::VehicleCollisionData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleCollisionData_collisions(msg_);
  }

private:
  ::morai_msgs::msg::VehicleCollisionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::VehicleCollisionData>()
{
  return morai_msgs::msg::builder::Init_VehicleCollisionData_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__BUILDER_HPP_
