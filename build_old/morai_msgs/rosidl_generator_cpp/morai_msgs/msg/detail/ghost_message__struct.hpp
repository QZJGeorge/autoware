// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/GhostMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'rotation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__GhostMessage __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__GhostMessage __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GhostMessage_
{
  using Type = GhostMessage_<ContainerAllocator>;

  explicit GhostMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    rotation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->steering_angle = 0.0;
    }
  }

  explicit GhostMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    rotation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->steering_angle = 0.0;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _rotation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rotation_type rotation;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _steering_angle_type =
    double;
  _steering_angle_type steering_angle;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__rotation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const double & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::GhostMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::GhostMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::GhostMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::GhostMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__GhostMessage
    std::shared_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__GhostMessage
    std::shared_ptr<morai_msgs::msg::GhostMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GhostMessage_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const GhostMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GhostMessage_

// alias to use template instance with default allocator
using GhostMessage =
  morai_msgs::msg::GhostMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__STRUCT_HPP_
