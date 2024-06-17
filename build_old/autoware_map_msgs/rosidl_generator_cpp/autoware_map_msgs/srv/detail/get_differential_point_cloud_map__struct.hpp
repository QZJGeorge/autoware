// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_map_msgs:srv/GetDifferentialPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_DIFFERENTIAL_POINT_CLOUD_MAP__STRUCT_HPP_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_DIFFERENTIAL_POINT_CLOUD_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'area'
#include "autoware_map_msgs/msg/detail/area_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request __declspec(deprecated)
#endif

namespace autoware_map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDifferentialPointCloudMap_Request_
{
  using Type = GetDifferentialPointCloudMap_Request_<ContainerAllocator>;

  explicit GetDifferentialPointCloudMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : area(_init)
  {
    (void)_init;
  }

  explicit GetDifferentialPointCloudMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : area(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _area_type =
    autoware_map_msgs::msg::AreaInfo_<ContainerAllocator>;
  _area_type area;
  using _cached_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _cached_ids_type cached_ids;

  // setters for named parameter idiom
  Type & set__area(
    const autoware_map_msgs::msg::AreaInfo_<ContainerAllocator> & _arg)
  {
    this->area = _arg;
    return *this;
  }
  Type & set__cached_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->cached_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Request
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDifferentialPointCloudMap_Request_ & other) const
  {
    if (this->area != other.area) {
      return false;
    }
    if (this->cached_ids != other.cached_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDifferentialPointCloudMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDifferentialPointCloudMap_Request_

// alias to use template instance with default allocator
using GetDifferentialPointCloudMap_Request =
  autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_map_msgs


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'new_pointcloud_with_ids'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response __declspec(deprecated)
#endif

namespace autoware_map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDifferentialPointCloudMap_Response_
{
  using Type = GetDifferentialPointCloudMap_Response_<ContainerAllocator>;

  explicit GetDifferentialPointCloudMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit GetDifferentialPointCloudMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _new_pointcloud_with_ids_type =
    std::vector<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>>>;
  _new_pointcloud_with_ids_type new_pointcloud_with_ids;
  using _ids_to_remove_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _ids_to_remove_type ids_to_remove;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__new_pointcloud_with_ids(
    const std::vector<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_map_msgs::msg::PointCloudMapCellWithID_<ContainerAllocator>>> & _arg)
  {
    this->new_pointcloud_with_ids = _arg;
    return *this;
  }
  Type & set__ids_to_remove(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->ids_to_remove = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_map_msgs__srv__GetDifferentialPointCloudMap_Response
    std::shared_ptr<autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDifferentialPointCloudMap_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->new_pointcloud_with_ids != other.new_pointcloud_with_ids) {
      return false;
    }
    if (this->ids_to_remove != other.ids_to_remove) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDifferentialPointCloudMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDifferentialPointCloudMap_Response_

// alias to use template instance with default allocator
using GetDifferentialPointCloudMap_Response =
  autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_map_msgs

namespace autoware_map_msgs
{

namespace srv
{

struct GetDifferentialPointCloudMap
{
  using Request = autoware_map_msgs::srv::GetDifferentialPointCloudMap_Request;
  using Response = autoware_map_msgs::srv::GetDifferentialPointCloudMap_Response;
};

}  // namespace srv

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_DIFFERENTIAL_POINT_CLOUD_MAP__STRUCT_HPP_
