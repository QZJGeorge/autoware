// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObject_shape
{
public:
  explicit Init_DynamicObject_shape(::autoware_adapi_v1_msgs::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::DynamicObject shape(::autoware_adapi_v1_msgs::msg::DynamicObject::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObject msg_;
};

class Init_DynamicObject_kinematics
{
public:
  explicit Init_DynamicObject_kinematics(::autoware_adapi_v1_msgs::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_shape kinematics(::autoware_adapi_v1_msgs::msg::DynamicObject::_kinematics_type arg)
  {
    msg_.kinematics = std::move(arg);
    return Init_DynamicObject_shape(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObject msg_;
};

class Init_DynamicObject_classification
{
public:
  explicit Init_DynamicObject_classification(::autoware_adapi_v1_msgs::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_kinematics classification(::autoware_adapi_v1_msgs::msg::DynamicObject::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_DynamicObject_kinematics(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObject msg_;
};

class Init_DynamicObject_existence_probability
{
public:
  explicit Init_DynamicObject_existence_probability(::autoware_adapi_v1_msgs::msg::DynamicObject & msg)
  : msg_(msg)
  {}
  Init_DynamicObject_classification existence_probability(::autoware_adapi_v1_msgs::msg::DynamicObject::_existence_probability_type arg)
  {
    msg_.existence_probability = std::move(arg);
    return Init_DynamicObject_classification(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObject msg_;
};

class Init_DynamicObject_id
{
public:
  Init_DynamicObject_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObject_existence_probability id(::autoware_adapi_v1_msgs::msg::DynamicObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DynamicObject_existence_probability(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DynamicObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::DynamicObject>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_DynamicObject_id();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT__BUILDER_HPP_
