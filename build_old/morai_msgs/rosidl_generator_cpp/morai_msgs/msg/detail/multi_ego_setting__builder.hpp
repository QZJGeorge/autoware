// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/multi_ego_setting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiEgoSetting_ctrl_mode
{
public:
  explicit Init_MultiEgoSetting_ctrl_mode(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::MultiEgoSetting ctrl_mode(::morai_msgs::msg::MultiEgoSetting::_ctrl_mode_type arg)
  {
    msg_.ctrl_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_gear
{
public:
  explicit Init_MultiEgoSetting_gear(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_ctrl_mode gear(::morai_msgs::msg::MultiEgoSetting::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_MultiEgoSetting_ctrl_mode(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_velocity
{
public:
  explicit Init_MultiEgoSetting_velocity(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_gear velocity(::morai_msgs::msg::MultiEgoSetting::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MultiEgoSetting_gear(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_global_yaw
{
public:
  explicit Init_MultiEgoSetting_global_yaw(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_velocity global_yaw(::morai_msgs::msg::MultiEgoSetting::_global_yaw_type arg)
  {
    msg_.global_yaw = std::move(arg);
    return Init_MultiEgoSetting_velocity(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_global_pitch
{
public:
  explicit Init_MultiEgoSetting_global_pitch(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_global_yaw global_pitch(::morai_msgs::msg::MultiEgoSetting::_global_pitch_type arg)
  {
    msg_.global_pitch = std::move(arg);
    return Init_MultiEgoSetting_global_yaw(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_global_roll
{
public:
  explicit Init_MultiEgoSetting_global_roll(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_global_pitch global_roll(::morai_msgs::msg::MultiEgoSetting::_global_roll_type arg)
  {
    msg_.global_roll = std::move(arg);
    return Init_MultiEgoSetting_global_pitch(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_global_position_z
{
public:
  explicit Init_MultiEgoSetting_global_position_z(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_global_roll global_position_z(::morai_msgs::msg::MultiEgoSetting::_global_position_z_type arg)
  {
    msg_.global_position_z = std::move(arg);
    return Init_MultiEgoSetting_global_roll(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_global_position_y
{
public:
  explicit Init_MultiEgoSetting_global_position_y(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_global_position_z global_position_y(::morai_msgs::msg::MultiEgoSetting::_global_position_y_type arg)
  {
    msg_.global_position_y = std::move(arg);
    return Init_MultiEgoSetting_global_position_z(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_global_position_x
{
public:
  explicit Init_MultiEgoSetting_global_position_x(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_global_position_y global_position_x(::morai_msgs::msg::MultiEgoSetting::_global_position_x_type arg)
  {
    msg_.global_position_x = std::move(arg);
    return Init_MultiEgoSetting_global_position_y(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_ego_index
{
public:
  explicit Init_MultiEgoSetting_ego_index(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_global_position_x ego_index(::morai_msgs::msg::MultiEgoSetting::_ego_index_type arg)
  {
    msg_.ego_index = std::move(arg);
    return Init_MultiEgoSetting_global_position_x(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_camera_index
{
public:
  explicit Init_MultiEgoSetting_camera_index(::morai_msgs::msg::MultiEgoSetting & msg)
  : msg_(msg)
  {}
  Init_MultiEgoSetting_ego_index camera_index(::morai_msgs::msg::MultiEgoSetting::_camera_index_type arg)
  {
    msg_.camera_index = std::move(arg);
    return Init_MultiEgoSetting_ego_index(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

class Init_MultiEgoSetting_number_of_ego_vehicle
{
public:
  Init_MultiEgoSetting_number_of_ego_vehicle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiEgoSetting_camera_index number_of_ego_vehicle(::morai_msgs::msg::MultiEgoSetting::_number_of_ego_vehicle_type arg)
  {
    msg_.number_of_ego_vehicle = std::move(arg);
    return Init_MultiEgoSetting_camera_index(msg_);
  }

private:
  ::morai_msgs::msg::MultiEgoSetting msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MultiEgoSetting>()
{
  return morai_msgs::msg::builder::Init_MultiEgoSetting_number_of_ego_vehicle();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__BUILDER_HPP_
