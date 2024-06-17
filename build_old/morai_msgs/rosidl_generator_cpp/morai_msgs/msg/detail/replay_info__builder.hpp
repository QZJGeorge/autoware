// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/ReplayInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/replay_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_ReplayInfo_obstacle_list
{
public:
  explicit Init_ReplayInfo_obstacle_list(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::ReplayInfo obstacle_list(::morai_msgs::msg::ReplayInfo::_obstacle_list_type arg)
  {
    msg_.obstacle_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_pedestrian_list
{
public:
  explicit Init_ReplayInfo_pedestrian_list(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_obstacle_list pedestrian_list(::morai_msgs::msg::ReplayInfo::_pedestrian_list_type arg)
  {
    msg_.pedestrian_list = std::move(arg);
    return Init_ReplayInfo_obstacle_list(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_npc_list
{
public:
  explicit Init_ReplayInfo_npc_list(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_pedestrian_list npc_list(::morai_msgs::msg::ReplayInfo::_npc_list_type arg)
  {
    msg_.npc_list = std::move(arg);
    return Init_ReplayInfo_pedestrian_list(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_num_of_obstacle
{
public:
  explicit Init_ReplayInfo_num_of_obstacle(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_npc_list num_of_obstacle(::morai_msgs::msg::ReplayInfo::_num_of_obstacle_type arg)
  {
    msg_.num_of_obstacle = std::move(arg);
    return Init_ReplayInfo_npc_list(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_num_of_pedestrian
{
public:
  explicit Init_ReplayInfo_num_of_pedestrian(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_num_of_obstacle num_of_pedestrian(::morai_msgs::msg::ReplayInfo::_num_of_pedestrian_type arg)
  {
    msg_.num_of_pedestrian = std::move(arg);
    return Init_ReplayInfo_num_of_obstacle(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_num_of_npcs
{
public:
  explicit Init_ReplayInfo_num_of_npcs(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_num_of_pedestrian num_of_npcs(::morai_msgs::msg::ReplayInfo::_num_of_npcs_type arg)
  {
    msg_.num_of_npcs = std::move(arg);
    return Init_ReplayInfo_num_of_pedestrian(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_angular_velocity
{
public:
  explicit Init_ReplayInfo_angular_velocity(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_num_of_npcs angular_velocity(::morai_msgs::msg::ReplayInfo::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_ReplayInfo_num_of_npcs(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_linear_acceleration
{
public:
  explicit Init_ReplayInfo_linear_acceleration(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_angular_velocity linear_acceleration(::morai_msgs::msg::ReplayInfo::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_ReplayInfo_angular_velocity(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_orientation
{
public:
  explicit Init_ReplayInfo_orientation(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_linear_acceleration orientation(::morai_msgs::msg::ReplayInfo::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_ReplayInfo_linear_acceleration(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_ego_steer
{
public:
  explicit Init_ReplayInfo_ego_steer(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_orientation ego_steer(::morai_msgs::msg::ReplayInfo::_ego_steer_type arg)
  {
    msg_.ego_steer = std::move(arg);
    return Init_ReplayInfo_orientation(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_ego_brake
{
public:
  explicit Init_ReplayInfo_ego_brake(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_ego_steer ego_brake(::morai_msgs::msg::ReplayInfo::_ego_brake_type arg)
  {
    msg_.ego_brake = std::move(arg);
    return Init_ReplayInfo_ego_steer(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_ego_acc
{
public:
  explicit Init_ReplayInfo_ego_acc(::morai_msgs::msg::ReplayInfo & msg)
  : msg_(msg)
  {}
  Init_ReplayInfo_ego_brake ego_acc(::morai_msgs::msg::ReplayInfo::_ego_acc_type arg)
  {
    msg_.ego_acc = std::move(arg);
    return Init_ReplayInfo_ego_brake(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

class Init_ReplayInfo_header
{
public:
  Init_ReplayInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReplayInfo_ego_acc header(::morai_msgs::msg::ReplayInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReplayInfo_ego_acc(msg_);
  }

private:
  ::morai_msgs::msg::ReplayInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::ReplayInfo>()
{
  return morai_msgs::msg::builder::Init_ReplayInfo_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__BUILDER_HPP_
