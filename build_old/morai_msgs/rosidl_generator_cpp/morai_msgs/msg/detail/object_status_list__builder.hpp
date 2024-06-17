// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/ObjectStatusList.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/object_status_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectStatusList_obstacle_list
{
public:
  explicit Init_ObjectStatusList_obstacle_list(::morai_msgs::msg::ObjectStatusList & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::ObjectStatusList obstacle_list(::morai_msgs::msg::ObjectStatusList::_obstacle_list_type arg)
  {
    msg_.obstacle_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatusList msg_;
};

class Init_ObjectStatusList_pedestrian_list
{
public:
  explicit Init_ObjectStatusList_pedestrian_list(::morai_msgs::msg::ObjectStatusList & msg)
  : msg_(msg)
  {}
  Init_ObjectStatusList_obstacle_list pedestrian_list(::morai_msgs::msg::ObjectStatusList::_pedestrian_list_type arg)
  {
    msg_.pedestrian_list = std::move(arg);
    return Init_ObjectStatusList_obstacle_list(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatusList msg_;
};

class Init_ObjectStatusList_npc_list
{
public:
  explicit Init_ObjectStatusList_npc_list(::morai_msgs::msg::ObjectStatusList & msg)
  : msg_(msg)
  {}
  Init_ObjectStatusList_pedestrian_list npc_list(::morai_msgs::msg::ObjectStatusList::_npc_list_type arg)
  {
    msg_.npc_list = std::move(arg);
    return Init_ObjectStatusList_pedestrian_list(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatusList msg_;
};

class Init_ObjectStatusList_num_of_obstacle
{
public:
  explicit Init_ObjectStatusList_num_of_obstacle(::morai_msgs::msg::ObjectStatusList & msg)
  : msg_(msg)
  {}
  Init_ObjectStatusList_npc_list num_of_obstacle(::morai_msgs::msg::ObjectStatusList::_num_of_obstacle_type arg)
  {
    msg_.num_of_obstacle = std::move(arg);
    return Init_ObjectStatusList_npc_list(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatusList msg_;
};

class Init_ObjectStatusList_num_of_pedestrian
{
public:
  explicit Init_ObjectStatusList_num_of_pedestrian(::morai_msgs::msg::ObjectStatusList & msg)
  : msg_(msg)
  {}
  Init_ObjectStatusList_num_of_obstacle num_of_pedestrian(::morai_msgs::msg::ObjectStatusList::_num_of_pedestrian_type arg)
  {
    msg_.num_of_pedestrian = std::move(arg);
    return Init_ObjectStatusList_num_of_obstacle(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatusList msg_;
};

class Init_ObjectStatusList_num_of_npcs
{
public:
  explicit Init_ObjectStatusList_num_of_npcs(::morai_msgs::msg::ObjectStatusList & msg)
  : msg_(msg)
  {}
  Init_ObjectStatusList_num_of_pedestrian num_of_npcs(::morai_msgs::msg::ObjectStatusList::_num_of_npcs_type arg)
  {
    msg_.num_of_npcs = std::move(arg);
    return Init_ObjectStatusList_num_of_pedestrian(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatusList msg_;
};

class Init_ObjectStatusList_header
{
public:
  Init_ObjectStatusList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectStatusList_num_of_npcs header(::morai_msgs::msg::ObjectStatusList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectStatusList_num_of_npcs(msg_);
  }

private:
  ::morai_msgs::msg::ObjectStatusList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::ObjectStatusList>()
{
  return morai_msgs::msg::builder::Init_ObjectStatusList_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__BUILDER_HPP_
