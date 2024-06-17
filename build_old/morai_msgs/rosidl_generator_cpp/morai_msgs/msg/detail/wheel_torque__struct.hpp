// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/WheelTorque.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__WheelTorque __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__WheelTorque __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelTorque_
{
  using Type = WheelTorque_<ContainerAllocator>;

  explicit WheelTorque_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_front_wheel_torque_off = false;
      this->left_rear_wheel_torque_off = false;
      this->right_front_wheel_torque_off = false;
      this->right_rear_wheel_torque_off = false;
    }
  }

  explicit WheelTorque_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_front_wheel_torque_off = false;
      this->left_rear_wheel_torque_off = false;
      this->right_front_wheel_torque_off = false;
      this->right_rear_wheel_torque_off = false;
    }
  }

  // field types and members
  using _left_front_wheel_torque_off_type =
    bool;
  _left_front_wheel_torque_off_type left_front_wheel_torque_off;
  using _left_rear_wheel_torque_off_type =
    bool;
  _left_rear_wheel_torque_off_type left_rear_wheel_torque_off;
  using _right_front_wheel_torque_off_type =
    bool;
  _right_front_wheel_torque_off_type right_front_wheel_torque_off;
  using _right_rear_wheel_torque_off_type =
    bool;
  _right_rear_wheel_torque_off_type right_rear_wheel_torque_off;

  // setters for named parameter idiom
  Type & set__left_front_wheel_torque_off(
    const bool & _arg)
  {
    this->left_front_wheel_torque_off = _arg;
    return *this;
  }
  Type & set__left_rear_wheel_torque_off(
    const bool & _arg)
  {
    this->left_rear_wheel_torque_off = _arg;
    return *this;
  }
  Type & set__right_front_wheel_torque_off(
    const bool & _arg)
  {
    this->right_front_wheel_torque_off = _arg;
    return *this;
  }
  Type & set__right_rear_wheel_torque_off(
    const bool & _arg)
  {
    this->right_rear_wheel_torque_off = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::WheelTorque_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::WheelTorque_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::WheelTorque_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::WheelTorque_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__WheelTorque
    std::shared_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__WheelTorque
    std::shared_ptr<morai_msgs::msg::WheelTorque_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelTorque_ & other) const
  {
    if (this->left_front_wheel_torque_off != other.left_front_wheel_torque_off) {
      return false;
    }
    if (this->left_rear_wheel_torque_off != other.left_rear_wheel_torque_off) {
      return false;
    }
    if (this->right_front_wheel_torque_off != other.right_front_wheel_torque_off) {
      return false;
    }
    if (this->right_rear_wheel_torque_off != other.right_rear_wheel_torque_off) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelTorque_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelTorque_

// alias to use template instance with default allocator
using WheelTorque =
  morai_msgs::msg::WheelTorque_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__STRUCT_HPP_
