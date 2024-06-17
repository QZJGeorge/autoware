// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_perception_msgs:msg/PredictedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__BUILDER_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_perception_msgs/msg/detail/predicted_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PredictedObject_shape
{
public:
  explicit Init_PredictedObject_shape(::autoware_perception_msgs::msg::PredictedObject & msg)
  : msg_(msg)
  {}
  ::autoware_perception_msgs::msg::PredictedObject shape(::autoware_perception_msgs::msg::PredictedObject::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_perception_msgs::msg::PredictedObject msg_;
};

class Init_PredictedObject_kinematics
{
public:
  explicit Init_PredictedObject_kinematics(::autoware_perception_msgs::msg::PredictedObject & msg)
  : msg_(msg)
  {}
  Init_PredictedObject_shape kinematics(::autoware_perception_msgs::msg::PredictedObject::_kinematics_type arg)
  {
    msg_.kinematics = std::move(arg);
    return Init_PredictedObject_shape(msg_);
  }

private:
  ::autoware_perception_msgs::msg::PredictedObject msg_;
};

class Init_PredictedObject_classification
{
public:
  explicit Init_PredictedObject_classification(::autoware_perception_msgs::msg::PredictedObject & msg)
  : msg_(msg)
  {}
  Init_PredictedObject_kinematics classification(::autoware_perception_msgs::msg::PredictedObject::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_PredictedObject_kinematics(msg_);
  }

private:
  ::autoware_perception_msgs::msg::PredictedObject msg_;
};

class Init_PredictedObject_existence_probability
{
public:
  explicit Init_PredictedObject_existence_probability(::autoware_perception_msgs::msg::PredictedObject & msg)
  : msg_(msg)
  {}
  Init_PredictedObject_classification existence_probability(::autoware_perception_msgs::msg::PredictedObject::_existence_probability_type arg)
  {
    msg_.existence_probability = std::move(arg);
    return Init_PredictedObject_classification(msg_);
  }

private:
  ::autoware_perception_msgs::msg::PredictedObject msg_;
};

class Init_PredictedObject_object_id
{
public:
  Init_PredictedObject_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictedObject_existence_probability object_id(::autoware_perception_msgs::msg::PredictedObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_PredictedObject_existence_probability(msg_);
  }

private:
  ::autoware_perception_msgs::msg::PredictedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_perception_msgs::msg::PredictedObject>()
{
  return autoware_perception_msgs::msg::builder::Init_PredictedObject_object_id();
}

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__BUILDER_HPP_
