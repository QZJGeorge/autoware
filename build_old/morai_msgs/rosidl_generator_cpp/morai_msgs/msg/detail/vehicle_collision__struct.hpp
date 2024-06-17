// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/VehicleCollision.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'crashed_vehicles'
#include "morai_msgs/msg/detail/object_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__VehicleCollision __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__VehicleCollision __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleCollision_
{
  using Type = VehicleCollision_<ContainerAllocator>;

  explicit VehicleCollision_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VehicleCollision_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _crashed_vehicles_type =
    std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>>;
  _crashed_vehicles_type crashed_vehicles;

  // setters for named parameter idiom
  Type & set__crashed_vehicles(
    const std::vector<morai_msgs::msg::ObjectStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::ObjectStatus_<ContainerAllocator>>> & _arg)
  {
    this->crashed_vehicles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::VehicleCollision_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::VehicleCollision_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleCollision_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::VehicleCollision_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__VehicleCollision
    std::shared_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__VehicleCollision
    std::shared_ptr<morai_msgs::msg::VehicleCollision_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleCollision_ & other) const
  {
    if (this->crashed_vehicles != other.crashed_vehicles) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleCollision_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleCollision_

// alias to use template instance with default allocator
using VehicleCollision =
  morai_msgs::msg::VehicleCollision_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION__STRUCT_HPP_
