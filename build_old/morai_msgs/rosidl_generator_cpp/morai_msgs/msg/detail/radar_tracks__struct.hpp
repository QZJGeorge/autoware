// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__STRUCT_HPP_

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
// Member 'tracks'
#include "morai_msgs/msg/detail/radar_track__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__RadarTracks __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__RadarTracks __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarTracks_
{
  using Type = RadarTracks_<ContainerAllocator>;

  explicit RadarTracks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RadarTracks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tracks_type =
    std::vector<morai_msgs::msg::RadarTrack_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::RadarTrack_<ContainerAllocator>>>;
  _tracks_type tracks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tracks(
    const std::vector<morai_msgs::msg::RadarTrack_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<morai_msgs::msg::RadarTrack_<ContainerAllocator>>> & _arg)
  {
    this->tracks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::RadarTracks_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::RadarTracks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarTracks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarTracks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__RadarTracks
    std::shared_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__RadarTracks
    std::shared_ptr<morai_msgs::msg::RadarTracks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarTracks_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tracks != other.tracks) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarTracks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarTracks_

// alias to use template instance with default allocator
using RadarTracks =
  morai_msgs::msg::RadarTracks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__STRUCT_HPP_
