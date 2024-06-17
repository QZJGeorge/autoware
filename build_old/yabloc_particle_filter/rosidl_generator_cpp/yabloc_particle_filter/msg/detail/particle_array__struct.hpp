// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yabloc_particle_filter:msg/ParticleArray.idl
// generated code does not contain a copyright notice

#ifndef YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__STRUCT_HPP_
#define YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__STRUCT_HPP_

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
// Member 'particles'
#include "yabloc_particle_filter/msg/detail/particle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yabloc_particle_filter__msg__ParticleArray __attribute__((deprecated))
#else
# define DEPRECATED__yabloc_particle_filter__msg__ParticleArray __declspec(deprecated)
#endif

namespace yabloc_particle_filter
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParticleArray_
{
  using Type = ParticleArray_<ContainerAllocator>;

  explicit ParticleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit ParticleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    int32_t;
  _id_type id;
  using _particles_type =
    std::vector<yabloc_particle_filter::msg::Particle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yabloc_particle_filter::msg::Particle_<ContainerAllocator>>>;
  _particles_type particles;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__particles(
    const std::vector<yabloc_particle_filter::msg::Particle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yabloc_particle_filter::msg::Particle_<ContainerAllocator>>> & _arg)
  {
    this->particles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yabloc_particle_filter__msg__ParticleArray
    std::shared_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yabloc_particle_filter__msg__ParticleArray
    std::shared_ptr<yabloc_particle_filter::msg::ParticleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParticleArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->particles != other.particles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParticleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParticleArray_

// alias to use template instance with default allocator
using ParticleArray =
  yabloc_particle_filter::msg::ParticleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yabloc_particle_filter

#endif  // YABLOC_PARTICLE_FILTER__MSG__DETAIL__PARTICLE_ARRAY__STRUCT_HPP_
