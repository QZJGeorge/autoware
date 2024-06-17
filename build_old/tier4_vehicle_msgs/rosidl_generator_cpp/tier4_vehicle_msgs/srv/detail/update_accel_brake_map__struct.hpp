// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_vehicle_msgs:srv/UpdateAccelBrakeMap.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__STRUCT_HPP_
#define TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateAccelBrakeMap_Request_
{
  using Type = UpdateAccelBrakeMap_Request_<ContainerAllocator>;

  explicit UpdateAccelBrakeMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
    }
  }

  explicit UpdateAccelBrakeMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
    }
  }

  // field types and members
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateAccelBrakeMap_Request_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateAccelBrakeMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateAccelBrakeMap_Request_

// alias to use template instance with default allocator
using UpdateAccelBrakeMap_Request =
  tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_vehicle_msgs


#ifndef _WIN32
# define DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response __declspec(deprecated)
#endif

namespace tier4_vehicle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateAccelBrakeMap_Response_
{
  using Type = UpdateAccelBrakeMap_Response_<ContainerAllocator>;

  explicit UpdateAccelBrakeMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit UpdateAccelBrakeMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response
    std::shared_ptr<tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateAccelBrakeMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateAccelBrakeMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateAccelBrakeMap_Response_

// alias to use template instance with default allocator
using UpdateAccelBrakeMap_Response =
  tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_vehicle_msgs

namespace tier4_vehicle_msgs
{

namespace srv
{

struct UpdateAccelBrakeMap
{
  using Request = tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Request;
  using Response = tier4_vehicle_msgs::srv::UpdateAccelBrakeMap_Response;
};

}  // namespace srv

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__STRUCT_HPP_
