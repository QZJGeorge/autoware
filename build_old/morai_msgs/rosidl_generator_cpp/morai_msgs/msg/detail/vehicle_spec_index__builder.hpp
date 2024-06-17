// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/VehicleSpecIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/vehicle_spec_index__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSpecIndex_unique_id
{
public:
  Init_VehicleSpecIndex_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::msg::VehicleSpecIndex unique_id(::morai_msgs::msg::VehicleSpecIndex::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::VehicleSpecIndex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::VehicleSpecIndex>()
{
  return morai_msgs::msg::builder::Init_VehicleSpecIndex_unique_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC_INDEX__BUILDER_HPP_
