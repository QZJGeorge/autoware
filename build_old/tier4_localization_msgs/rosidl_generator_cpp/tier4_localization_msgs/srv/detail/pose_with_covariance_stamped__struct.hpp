// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_localization_msgs:srv/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
#define TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request __declspec(deprecated)
#endif

namespace tier4_localization_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseWithCovarianceStamped_Request_
{
  using Type = PoseWithCovarianceStamped_Request_<ContainerAllocator>;

  explicit PoseWithCovarianceStamped_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_with_covariance(_init)
  {
    (void)_init;
  }

  explicit PoseWithCovarianceStamped_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_with_covariance(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_with_covariance_type =
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _pose_with_covariance_type pose_with_covariance;

  // setters for named parameter idiom
  Type & set__pose_with_covariance(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->pose_with_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithCovarianceStamped_Request_ & other) const
  {
    if (this->pose_with_covariance != other.pose_with_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithCovarianceStamped_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithCovarianceStamped_Request_

// alias to use template instance with default allocator
using PoseWithCovarianceStamped_Request =
  tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_localization_msgs


// Include directives for member types
// Member 'pose_with_covariance'
// already included above
// #include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response __declspec(deprecated)
#endif

namespace tier4_localization_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseWithCovarianceStamped_Response_
{
  using Type = PoseWithCovarianceStamped_Response_<ContainerAllocator>;

  explicit PoseWithCovarianceStamped_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_with_covariance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PoseWithCovarianceStamped_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_with_covariance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _pose_with_covariance_type =
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _pose_with_covariance_type pose_with_covariance;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__pose_with_covariance(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->pose_with_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response
    std::shared_ptr<tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithCovarianceStamped_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->pose_with_covariance != other.pose_with_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithCovarianceStamped_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithCovarianceStamped_Response_

// alias to use template instance with default allocator
using PoseWithCovarianceStamped_Response =
  tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_localization_msgs

namespace tier4_localization_msgs
{

namespace srv
{

struct PoseWithCovarianceStamped
{
  using Request = tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request;
  using Response = tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response;
};

}  // namespace srv

}  // namespace tier4_localization_msgs

#endif  // TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
