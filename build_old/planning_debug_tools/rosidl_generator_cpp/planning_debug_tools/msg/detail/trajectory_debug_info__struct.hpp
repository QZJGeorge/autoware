// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__STRUCT_HPP_
#define PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planning_debug_tools__msg__TrajectoryDebugInfo __attribute__((deprecated))
#else
# define DEPRECATED__planning_debug_tools__msg__TrajectoryDebugInfo __declspec(deprecated)
#endif

namespace planning_debug_tools
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryDebugInfo_
{
  using Type = TrajectoryDebugInfo_<ContainerAllocator>;

  explicit TrajectoryDebugInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size = 0ul;
    }
  }

  explicit TrajectoryDebugInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size = 0ul;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _size_type =
    uint32_t;
  _size_type size;
  using _arclength_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _arclength_type arclength;
  using _curvature_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _curvature_type curvature;
  using _velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocity_type velocity;
  using _acceleration_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acceleration_type acceleration;
  using _yaw_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__size(
    const uint32_t & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__arclength(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->arclength = _arg;
    return *this;
  }
  Type & set__curvature(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__yaw(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planning_debug_tools__msg__TrajectoryDebugInfo
    std::shared_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planning_debug_tools__msg__TrajectoryDebugInfo
    std::shared_ptr<planning_debug_tools::msg::TrajectoryDebugInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryDebugInfo_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->arclength != other.arclength) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryDebugInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryDebugInfo_

// alias to use template instance with default allocator
using TrajectoryDebugInfo =
  planning_debug_tools::msg::TrajectoryDebugInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planning_debug_tools

#endif  // PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__STRUCT_HPP_
