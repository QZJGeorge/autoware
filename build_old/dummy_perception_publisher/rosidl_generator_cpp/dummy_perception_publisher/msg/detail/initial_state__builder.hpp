// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dummy_perception_publisher:msg/InitialState.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__BUILDER_HPP_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dummy_perception_publisher/msg/detail/initial_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dummy_perception_publisher
{

namespace msg
{

namespace builder
{

class Init_InitialState_accel_covariance
{
public:
  explicit Init_InitialState_accel_covariance(::dummy_perception_publisher::msg::InitialState & msg)
  : msg_(msg)
  {}
  ::dummy_perception_publisher::msg::InitialState accel_covariance(::dummy_perception_publisher::msg::InitialState::_accel_covariance_type arg)
  {
    msg_.accel_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dummy_perception_publisher::msg::InitialState msg_;
};

class Init_InitialState_twist_covariance
{
public:
  explicit Init_InitialState_twist_covariance(::dummy_perception_publisher::msg::InitialState & msg)
  : msg_(msg)
  {}
  Init_InitialState_accel_covariance twist_covariance(::dummy_perception_publisher::msg::InitialState::_twist_covariance_type arg)
  {
    msg_.twist_covariance = std::move(arg);
    return Init_InitialState_accel_covariance(msg_);
  }

private:
  ::dummy_perception_publisher::msg::InitialState msg_;
};

class Init_InitialState_pose_covariance
{
public:
  Init_InitialState_pose_covariance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitialState_twist_covariance pose_covariance(::dummy_perception_publisher::msg::InitialState::_pose_covariance_type arg)
  {
    msg_.pose_covariance = std::move(arg);
    return Init_InitialState_twist_covariance(msg_);
  }

private:
  ::dummy_perception_publisher::msg::InitialState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dummy_perception_publisher::msg::InitialState>()
{
  return dummy_perception_publisher::msg::builder::Init_InitialState_pose_covariance();
}

}  // namespace dummy_perception_publisher

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__BUILDER_HPP_
