// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/WheelRpm.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__WheelRpm __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__WheelRpm __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelRpm_
{
  using Type = WheelRpm_<ContainerAllocator>;

  explicit WheelRpm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_front_wheel_rpm = 0.0f;
      this->left_rear_wheel_rpm = 0.0f;
      this->right_front_wheel_rpm = 0.0f;
      this->right_rear_wheel_rpm = 0.0f;
    }
  }

  explicit WheelRpm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_front_wheel_rpm = 0.0f;
      this->left_rear_wheel_rpm = 0.0f;
      this->right_front_wheel_rpm = 0.0f;
      this->right_rear_wheel_rpm = 0.0f;
    }
  }

  // field types and members
  using _left_front_wheel_rpm_type =
    float;
  _left_front_wheel_rpm_type left_front_wheel_rpm;
  using _left_rear_wheel_rpm_type =
    float;
  _left_rear_wheel_rpm_type left_rear_wheel_rpm;
  using _right_front_wheel_rpm_type =
    float;
  _right_front_wheel_rpm_type right_front_wheel_rpm;
  using _right_rear_wheel_rpm_type =
    float;
  _right_rear_wheel_rpm_type right_rear_wheel_rpm;

  // setters for named parameter idiom
  Type & set__left_front_wheel_rpm(
    const float & _arg)
  {
    this->left_front_wheel_rpm = _arg;
    return *this;
  }
  Type & set__left_rear_wheel_rpm(
    const float & _arg)
  {
    this->left_rear_wheel_rpm = _arg;
    return *this;
  }
  Type & set__right_front_wheel_rpm(
    const float & _arg)
  {
    this->right_front_wheel_rpm = _arg;
    return *this;
  }
  Type & set__right_rear_wheel_rpm(
    const float & _arg)
  {
    this->right_rear_wheel_rpm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::WheelRpm_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::WheelRpm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::WheelRpm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::WheelRpm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__WheelRpm
    std::shared_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__WheelRpm
    std::shared_ptr<morai_msgs::msg::WheelRpm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelRpm_ & other) const
  {
    if (this->left_front_wheel_rpm != other.left_front_wheel_rpm) {
      return false;
    }
    if (this->left_rear_wheel_rpm != other.left_rear_wheel_rpm) {
      return false;
    }
    if (this->right_front_wheel_rpm != other.right_front_wheel_rpm) {
      return false;
    }
    if (this->right_rear_wheel_rpm != other.right_rear_wheel_rpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelRpm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelRpm_

// alias to use template instance with default allocator
using WheelRpm =
  morai_msgs::msg::WheelRpm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__STRUCT_HPP_
