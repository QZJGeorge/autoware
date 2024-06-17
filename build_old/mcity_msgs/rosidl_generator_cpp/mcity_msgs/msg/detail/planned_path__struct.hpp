// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__STRUCT_HPP_
#define MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mcity_msgs__msg__PlannedPath __attribute__((deprecated))
#else
# define DEPRECATED__mcity_msgs__msg__PlannedPath __declspec(deprecated)
#endif

namespace mcity_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlannedPath_
{
  using Type = PlannedPath_<ContainerAllocator>;

  explicit PlannedPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->time_resolution = 0.0;
      this->go = 0;
      this->estop = 0;
    }
  }

  explicit PlannedPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->time_resolution = 0.0;
      this->go = 0;
      this->estop = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _time_resolution_type =
    double;
  _time_resolution_type time_resolution;
  using _go_type =
    int16_t;
  _go_type go;
  using _estop_type =
    int16_t;
  _estop_type estop;
  using _x_vector_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _x_vector_type x_vector;
  using _y_vector_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _y_vector_type y_vector;
  using _vd_vector_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vd_vector_type vd_vector;
  using _ori_vector_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ori_vector_type ori_vector;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__time_resolution(
    const double & _arg)
  {
    this->time_resolution = _arg;
    return *this;
  }
  Type & set__go(
    const int16_t & _arg)
  {
    this->go = _arg;
    return *this;
  }
  Type & set__estop(
    const int16_t & _arg)
  {
    this->estop = _arg;
    return *this;
  }
  Type & set__x_vector(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->x_vector = _arg;
    return *this;
  }
  Type & set__y_vector(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->y_vector = _arg;
    return *this;
  }
  Type & set__vd_vector(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vd_vector = _arg;
    return *this;
  }
  Type & set__ori_vector(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ori_vector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mcity_msgs::msg::PlannedPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const mcity_msgs::msg::PlannedPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mcity_msgs::msg::PlannedPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mcity_msgs::msg::PlannedPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mcity_msgs__msg__PlannedPath
    std::shared_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mcity_msgs__msg__PlannedPath
    std::shared_ptr<mcity_msgs::msg::PlannedPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlannedPath_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->time_resolution != other.time_resolution) {
      return false;
    }
    if (this->go != other.go) {
      return false;
    }
    if (this->estop != other.estop) {
      return false;
    }
    if (this->x_vector != other.x_vector) {
      return false;
    }
    if (this->y_vector != other.y_vector) {
      return false;
    }
    if (this->vd_vector != other.vd_vector) {
      return false;
    }
    if (this->ori_vector != other.ori_vector) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlannedPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlannedPath_

// alias to use template instance with default allocator
using PlannedPath =
  mcity_msgs::msg::PlannedPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mcity_msgs

#endif  // MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__STRUCT_HPP_
