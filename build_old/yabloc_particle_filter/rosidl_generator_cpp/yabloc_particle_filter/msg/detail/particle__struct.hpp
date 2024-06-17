// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yabloc_particle_filter:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__STRUCT_HPP_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yabloc_particle_filter__msg__Particle __attribute__((deprecated))
#else
# define DEPRECATED__yabloc_particle_filter__msg__Particle __declspec(deprecated)
#endif

namespace yabloc_particle_filter
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Particle_
{
  using Type = Particle_<ContainerAllocator>;

  explicit Particle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->weight = 0.0f;
    }
  }

  explicit Particle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->weight = 0.0f;
    }
  }

  // field types and members
  using _weight_type =
    float;
  _weight_type weight;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__weight(
    const float & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yabloc_particle_filter::msg::Particle_<ContainerAllocator> *;
  using ConstRawPtr =
    const yabloc_particle_filter::msg::Particle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yabloc_particle_filter::msg::Particle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yabloc_particle_filter::msg::Particle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yabloc_particle_filter__msg__Particle
    std::shared_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yabloc_particle_filter__msg__Particle
    std::shared_ptr<yabloc_particle_filter::msg::Particle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Particle_ & other) const
  {
    if (this->weight != other.weight) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Particle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Particle_

// alias to use template instance with default allocator
using Particle =
  yabloc_particle_filter::msg::Particle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yabloc_particle_filter

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE__STRUCT_HPP_
