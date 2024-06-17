// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/VehicleCollision.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/vehicle_collision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleCollision_crashed_vehicles
{
public:
  Init_VehicleCollision_crashed_vehicles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::msg::VehicleCollision crashed_vehicles(::morai_msgs::msg::VehicleCollision::_crashed_vehicles_type arg)
  {
    msg_.crashed_vehicles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::VehicleCollision msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::VehicleCollision>()
{
  return morai_msgs::msg::builder::Init_VehicleCollision_crashed_vehicles();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__BUILDER_HPP_
