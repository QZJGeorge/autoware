// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/ERP42Info.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__ERP42_INFO__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__ERP42_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__ERP42Info __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__ERP42Info __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ERP42Info_
{
  using Type = ERP42Info_<ContainerAllocator>;

  explicit ERP42Info_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longl_cmd_type = 0l;
      this->position_x = 0.0f;
      this->position_y = 0.0f;
      this->position_z = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->velocity = 0.0f;
      this->steering = 0.0f;
    }
  }

  explicit ERP42Info_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longl_cmd_type = 0l;
      this->position_x = 0.0f;
      this->position_y = 0.0f;
      this->position_z = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->velocity = 0.0f;
      this->steering = 0.0f;
    }
  }

  // field types and members
  using _longl_cmd_type_type =
    int32_t;
  _longl_cmd_type_type longl_cmd_type;
  using _position_x_type =
    float;
  _position_x_type position_x;
  using _position_y_type =
    float;
  _position_y_type position_y;
  using _position_z_type =
    float;
  _position_z_type position_z;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _steering_type =
    float;
  _steering_type steering;

  // setters for named parameter idiom
  Type & set__longl_cmd_type(
    const int32_t & _arg)
  {
    this->longl_cmd_type = _arg;
    return *this;
  }
  Type & set__position_x(
    const float & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_y(
    const float & _arg)
  {
    this->position_y = _arg;
    return *this;
  }
  Type & set__position_z(
    const float & _arg)
  {
    this->position_z = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::ERP42Info_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::ERP42Info_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::ERP42Info_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::ERP42Info_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__ERP42Info
    std::shared_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__ERP42Info
    std::shared_ptr<morai_msgs::msg::ERP42Info_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ERP42Info_ & other) const
  {
    if (this->longl_cmd_type != other.longl_cmd_type) {
      return false;
    }
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    if (this->position_z != other.position_z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    return true;
  }
  bool operator!=(const ERP42Info_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ERP42Info_

// alias to use template instance with default allocator
using ERP42Info =
  morai_msgs::msg::ERP42Info_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__ERP42_INFO__STRUCT_HPP_
