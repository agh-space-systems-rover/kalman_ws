// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi_msgs:srv/ServiceType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__STRUCT_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosapi_msgs__srv__ServiceType_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi_msgs__srv__ServiceType_Request __declspec(deprecated)
#endif

namespace rosapi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceType_Request_
{
  using Type = ServiceType_Request_<ContainerAllocator>;

  explicit ServiceType_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service = "";
    }
  }

  explicit ServiceType_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service = "";
    }
  }

  // field types and members
  using _service_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_type service;

  // setters for named parameter idiom
  Type & set__service(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi_msgs__srv__ServiceType_Request
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi_msgs__srv__ServiceType_Request
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceType_Request_ & other) const
  {
    if (this->service != other.service) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceType_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceType_Request_

// alias to use template instance with default allocator
using ServiceType_Request =
  rosapi_msgs::srv::ServiceType_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi_msgs


#ifndef _WIN32
# define DEPRECATED__rosapi_msgs__srv__ServiceType_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi_msgs__srv__ServiceType_Response __declspec(deprecated)
#endif

namespace rosapi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceType_Response_
{
  using Type = ServiceType_Response_<ContainerAllocator>;

  explicit ServiceType_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit ServiceType_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi_msgs__srv__ServiceType_Response
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi_msgs__srv__ServiceType_Response
    std::shared_ptr<rosapi_msgs::srv::ServiceType_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceType_Response_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceType_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceType_Response_

// alias to use template instance with default allocator
using ServiceType_Response =
  rosapi_msgs::srv::ServiceType_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosapi_msgs
{

namespace srv
{

struct ServiceType
{
  using Request = rosapi_msgs::srv::ServiceType_Request;
  using Response = rosapi_msgs::srv::ServiceType_Response;
};

}  // namespace srv

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__STRUCT_HPP_
