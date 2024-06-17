// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/MapSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'utm_offset'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__MapSpec __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__MapSpec __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapSpec_
{
  using Type = MapSpec_<ContainerAllocator>;

  explicit MapSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utm_offset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plane_coordinate_system = 0l;
      this->utm_num = 0l;
      this->ellipse = "";
      this->central_latitude = 0.0;
      this->central_meridian = 0.0;
      this->scale_factor = 0.0;
      this->false_easting = 0.0;
      this->false_northing = 0.0;
    }
  }

  explicit MapSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utm_offset(_alloc, _init),
    ellipse(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plane_coordinate_system = 0l;
      this->utm_num = 0l;
      this->ellipse = "";
      this->central_latitude = 0.0;
      this->central_meridian = 0.0;
      this->scale_factor = 0.0;
      this->false_easting = 0.0;
      this->false_northing = 0.0;
    }
  }

  // field types and members
  using _plane_coordinate_system_type =
    int32_t;
  _plane_coordinate_system_type plane_coordinate_system;
  using _utm_num_type =
    int32_t;
  _utm_num_type utm_num;
  using _utm_offset_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _utm_offset_type utm_offset;
  using _ellipse_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ellipse_type ellipse;
  using _central_latitude_type =
    double;
  _central_latitude_type central_latitude;
  using _central_meridian_type =
    double;
  _central_meridian_type central_meridian;
  using _scale_factor_type =
    double;
  _scale_factor_type scale_factor;
  using _false_easting_type =
    double;
  _false_easting_type false_easting;
  using _false_northing_type =
    double;
  _false_northing_type false_northing;

  // setters for named parameter idiom
  Type & set__plane_coordinate_system(
    const int32_t & _arg)
  {
    this->plane_coordinate_system = _arg;
    return *this;
  }
  Type & set__utm_num(
    const int32_t & _arg)
  {
    this->utm_num = _arg;
    return *this;
  }
  Type & set__utm_offset(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->utm_offset = _arg;
    return *this;
  }
  Type & set__ellipse(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ellipse = _arg;
    return *this;
  }
  Type & set__central_latitude(
    const double & _arg)
  {
    this->central_latitude = _arg;
    return *this;
  }
  Type & set__central_meridian(
    const double & _arg)
  {
    this->central_meridian = _arg;
    return *this;
  }
  Type & set__scale_factor(
    const double & _arg)
  {
    this->scale_factor = _arg;
    return *this;
  }
  Type & set__false_easting(
    const double & _arg)
  {
    this->false_easting = _arg;
    return *this;
  }
  Type & set__false_northing(
    const double & _arg)
  {
    this->false_northing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::MapSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::MapSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MapSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MapSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__MapSpec
    std::shared_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__MapSpec
    std::shared_ptr<morai_msgs::msg::MapSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapSpec_ & other) const
  {
    if (this->plane_coordinate_system != other.plane_coordinate_system) {
      return false;
    }
    if (this->utm_num != other.utm_num) {
      return false;
    }
    if (this->utm_offset != other.utm_offset) {
      return false;
    }
    if (this->ellipse != other.ellipse) {
      return false;
    }
    if (this->central_latitude != other.central_latitude) {
      return false;
    }
    if (this->central_meridian != other.central_meridian) {
      return false;
    }
    if (this->scale_factor != other.scale_factor) {
      return false;
    }
    if (this->false_easting != other.false_easting) {
      return false;
    }
    if (this->false_northing != other.false_northing) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapSpec_

// alias to use template instance with default allocator
using MapSpec =
  morai_msgs::msg::MapSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC__STRUCT_HPP_
