// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'geographic_pose'
#include "geographic_msgs/msg/detail/geo_point_stamped__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__struct.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleKinematics __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleKinematics __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleKinematics_
{
  using Type = VehicleKinematics_<ContainerAllocator>;

  explicit VehicleKinematics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geographic_pose(_init),
    pose(_init),
    twist(_init),
    accel(_init)
  {
    (void)_init;
  }

  explicit VehicleKinematics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geographic_pose(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init),
    accel(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _geographic_pose_type =
    geographic_msgs::msg::GeoPointStamped_<ContainerAllocator>;
  _geographic_pose_type geographic_pose;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::TwistWithCovarianceStamped_<ContainerAllocator>;
  _twist_type twist;
  using _accel_type =
    geometry_msgs::msg::AccelWithCovarianceStamped_<ContainerAllocator>;
  _accel_type accel;

  // setters for named parameter idiom
  Type & set__geographic_pose(
    const geographic_msgs::msg::GeoPointStamped_<ContainerAllocator> & _arg)
  {
    this->geographic_pose = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::TwistWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::AccelWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleKinematics
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__VehicleKinematics
    std::shared_ptr<autoware_adapi_v1_msgs::msg::VehicleKinematics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleKinematics_ & other) const
  {
    if (this->geographic_pose != other.geographic_pose) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleKinematics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleKinematics_

// alias to use template instance with default allocator
using VehicleKinematics =
  autoware_adapi_v1_msgs::msg::VehicleKinematics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__STRUCT_HPP_
