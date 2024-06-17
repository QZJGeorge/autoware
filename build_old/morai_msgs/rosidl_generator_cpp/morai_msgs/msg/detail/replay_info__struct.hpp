// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/ReplayInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'npc_list'
// Member 'pedestrian_list'
// Member 'obstacle_list'
#include "morai_msgs/msg/detail/object_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__ReplayInfo __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__ReplayInfo __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReplayInfo_
{
  using Type = ReplayInfo_<ContainerAllocator>;

  explicit ReplayInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    orientation(_init),
    linear_acceleration(_init),
    angular_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ego_acc = 0.0;
      this->ego_brake = 0.0;
      this->ego_steer = 0.0;
      this->num_of_npcs = 0l;
      this->num_of_pedestrian = 0l;
      this->num_of_obstacle = 0l;
    }
  }

  explicit ReplayInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    orientation(_alloc, _init),
    linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ego_acc = 0.0;
      this->ego_brake = 0.0;
      this->ego_steer = 0.0;
      this->num_of_npcs = 0l;
      this->num_of_pedestrian = 0l;
      this->num_of_obstacle = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ego_acc_type =
    double;
  _ego_acc_type ego_acc;
  using _ego_brake_type =
    double;
  _ego_brake_type ego_brake;
  using _ego_steer_type =
    double;
  _ego_steer_type ego_steer;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _num_of_npcs_type =
    int32_t;
  _num_of_npcs_type num_of_npcs;
  using _num_of_pedestrian_type =
    int32_t;
  _num_of_pedestrian_type num_of_pedestrian;
  using _num_of_obstacle_type =
    int32_t;
  _num_of_obstacle_type num_of_obstacle;
  using _npc_list_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _npc_list_type npc_list;
  using _pedestrian_list_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _pedestrian_list_type pedestrian_list;
  using _obstacle_list_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _obstacle_list_type obstacle_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ego_acc(
    const double & _arg)
  {
    this->ego_acc = _arg;
    return *this;
  }
  Type & set__ego_brake(
    const double & _arg)
  {
    this->ego_brake = _arg;
    return *this;
  }
  Type & set__ego_steer(
    const double & _arg)
  {
    this->ego_steer = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__num_of_npcs(
    const int32_t & _arg)
  {
    this->num_of_npcs = _arg;
    return *this;
  }
  Type & set__num_of_pedestrian(
    const int32_t & _arg)
  {
    this->num_of_pedestrian = _arg;
    return *this;
  }
  Type & set__num_of_obstacle(
    const int32_t & _arg)
  {
    this->num_of_obstacle = _arg;
    return *this;
  }
  Type & set__npc_list(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->npc_list = _arg;
    return *this;
  }
  Type & set__pedestrian_list(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->pedestrian_list = _arg;
    return *this;
  }
  Type & set__obstacle_list(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->obstacle_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::ReplayInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::ReplayInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::ReplayInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::ReplayInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__ReplayInfo
    std::shared_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__ReplayInfo
    std::shared_ptr<morai_msgs::msg::ReplayInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReplayInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ego_acc != other.ego_acc) {
      return false;
    }
    if (this->ego_brake != other.ego_brake) {
      return false;
    }
    if (this->ego_steer != other.ego_steer) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->num_of_npcs != other.num_of_npcs) {
      return false;
    }
    if (this->num_of_pedestrian != other.num_of_pedestrian) {
      return false;
    }
    if (this->num_of_obstacle != other.num_of_obstacle) {
      return false;
    }
    if (this->npc_list != other.npc_list) {
      return false;
    }
    if (this->pedestrian_list != other.pedestrian_list) {
      return false;
    }
    if (this->obstacle_list != other.obstacle_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReplayInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReplayInfo_

// alias to use template instance with default allocator
using ReplayInfo =
  morai_msgs::msg::ReplayInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__STRUCT_HPP_
