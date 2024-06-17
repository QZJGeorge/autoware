// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__STRUCT_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__msg__ActuationStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__msg__ActuationStatus __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuationStatus_
{
  using Type = ActuationStatus_<ContainerAllocator>;

  explicit ActuationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_status = 0.0;
      this->brake_status = 0.0;
      this->steer_status = 0.0;
    }
  }

  explicit ActuationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_status = 0.0;
      this->brake_status = 0.0;
      this->steer_status = 0.0;
    }
  }

  // field types and members
  using _accel_status_type =
    double;
  _accel_status_type accel_status;
  using _brake_status_type =
    double;
  _brake_status_type brake_status;
  using _steer_status_type =
    double;
  _steer_status_type steer_status;

  // setters for named parameter idiom
  Type & set__accel_status(
    const double & _arg)
  {
    this->accel_status = _arg;
    return *this;
  }
  Type & set__brake_status(
    const double & _arg)
  {
    this->brake_status = _arg;
    return *this;
  }
  Type & set__steer_status(
    const double & _arg)
  {
    this->steer_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__msg__ActuationStatus
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__msg__ActuationStatus
    std::shared_ptr<tier4_vehicle_msgs::msg::ActuationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuationStatus_ & other) const
  {
    if (this->accel_status != other.accel_status) {
      return false;
    }
    if (this->brake_status != other.brake_status) {
      return false;
    }
    if (this->steer_status != other.steer_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuationStatus_

// alias to use template instance with default allocator
using ActuationStatus =
  tier4_vehicle_msgs::msg::ActuationStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_STATUS__STRUCT_HPP_
