// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sensor_pos_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorPosControl_yaw
{
public:
  explicit Init_SensorPosControl_yaw(::morai_msgs::msg::SensorPosControl & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SensorPosControl yaw(::morai_msgs::msg::SensorPosControl::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SensorPosControl msg_;
};

class Init_SensorPosControl_pitch
{
public:
  explicit Init_SensorPosControl_pitch(::morai_msgs::msg::SensorPosControl & msg)
  : msg_(msg)
  {}
  Init_SensorPosControl_yaw pitch(::morai_msgs::msg::SensorPosControl::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SensorPosControl_yaw(msg_);
  }

private:
  ::morai_msgs::msg::SensorPosControl msg_;
};

class Init_SensorPosControl_roll
{
public:
  explicit Init_SensorPosControl_roll(::morai_msgs::msg::SensorPosControl & msg)
  : msg_(msg)
  {}
  Init_SensorPosControl_pitch roll(::morai_msgs::msg::SensorPosControl::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_SensorPosControl_pitch(msg_);
  }

private:
  ::morai_msgs::msg::SensorPosControl msg_;
};

class Init_SensorPosControl_pose_z
{
public:
  explicit Init_SensorPosControl_pose_z(::morai_msgs::msg::SensorPosControl & msg)
  : msg_(msg)
  {}
  Init_SensorPosControl_roll pose_z(::morai_msgs::msg::SensorPosControl::_pose_z_type arg)
  {
    msg_.pose_z = std::move(arg);
    return Init_SensorPosControl_roll(msg_);
  }

private:
  ::morai_msgs::msg::SensorPosControl msg_;
};

class Init_SensorPosControl_pose_y
{
public:
  explicit Init_SensorPosControl_pose_y(::morai_msgs::msg::SensorPosControl & msg)
  : msg_(msg)
  {}
  Init_SensorPosControl_pose_z pose_y(::morai_msgs::msg::SensorPosControl::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return Init_SensorPosControl_pose_z(msg_);
  }

private:
  ::morai_msgs::msg::SensorPosControl msg_;
};

class Init_SensorPosControl_pose_x
{
public:
  explicit Init_SensorPosControl_pose_x(::morai_msgs::msg::SensorPosControl & msg)
  : msg_(msg)
  {}
  Init_SensorPosControl_pose_y pose_x(::morai_msgs::msg::SensorPosControl::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_SensorPosControl_pose_y(msg_);
  }

private:
  ::morai_msgs::msg::SensorPosControl msg_;
};

class Init_SensorPosControl_sensor_index
{
public:
  Init_SensorPosControl_sensor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorPosControl_pose_x sensor_index(::morai_msgs::msg::SensorPosControl::_sensor_index_type arg)
  {
    msg_.sensor_index = std::move(arg);
    return Init_SensorPosControl_pose_x(msg_);
  }

private:
  ::morai_msgs::msg::SensorPosControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SensorPosControl>()
{
  return morai_msgs::msg::builder::Init_SensorPosControl_sensor_index();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__BUILDER_HPP_
