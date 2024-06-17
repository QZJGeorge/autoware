// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_velocity_planner:srv/UnloadPlugin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_HPP_
#define BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Request __declspec(deprecated)
#endif

namespace behavior_velocity_planner
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnloadPlugin_Request_
{
  using Type = UnloadPlugin_Request_<ContainerAllocator>;

  explicit UnloadPlugin_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plugin_name = "";
    }
  }

  explicit UnloadPlugin_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plugin_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plugin_name = "";
    }
  }

  // field types and members
  using _plugin_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _plugin_name_type plugin_name;

  // setters for named parameter idiom
  Type & set__plugin_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->plugin_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Request
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Request
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnloadPlugin_Request_ & other) const
  {
    if (this->plugin_name != other.plugin_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnloadPlugin_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnloadPlugin_Request_

// alias to use template instance with default allocator
using UnloadPlugin_Request =
  behavior_velocity_planner::srv::UnloadPlugin_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_velocity_planner


#ifndef _WIN32
# define DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Response __declspec(deprecated)
#endif

namespace behavior_velocity_planner
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnloadPlugin_Response_
{
  using Type = UnloadPlugin_Response_<ContainerAllocator>;

  explicit UnloadPlugin_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit UnloadPlugin_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Response
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_velocity_planner__srv__UnloadPlugin_Response
    std::shared_ptr<behavior_velocity_planner::srv::UnloadPlugin_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnloadPlugin_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnloadPlugin_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnloadPlugin_Response_

// alias to use template instance with default allocator
using UnloadPlugin_Response =
  behavior_velocity_planner::srv::UnloadPlugin_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace behavior_velocity_planner

namespace behavior_velocity_planner
{

namespace srv
{

struct UnloadPlugin
{
  using Request = behavior_velocity_planner::srv::UnloadPlugin_Request;
  using Response = behavior_velocity_planner::srv::UnloadPlugin_Response;
};

}  // namespace srv

}  // namespace behavior_velocity_planner

#endif  // BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_HPP_
