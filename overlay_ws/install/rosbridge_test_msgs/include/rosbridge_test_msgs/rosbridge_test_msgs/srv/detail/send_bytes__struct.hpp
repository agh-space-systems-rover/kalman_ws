// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:srv/SendBytes.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__SEND_BYTES__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__SEND_BYTES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Request __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendBytes_Request_
{
  using Type = SendBytes_Request_<ContainerAllocator>;

  explicit SendBytes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
    }
  }

  explicit SendBytes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
    }
  }

  // field types and members
  using _count_type =
    int64_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__count(
    const int64_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Request
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Request
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendBytes_Request_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendBytes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendBytes_Request_

// alias to use template instance with default allocator
using SendBytes_Request =
  rosbridge_test_msgs::srv::SendBytes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Response __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendBytes_Response_
{
  using Type = SendBytes_Response_<ContainerAllocator>;

  explicit SendBytes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit SendBytes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Response
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__SendBytes_Response
    std::shared_ptr<rosbridge_test_msgs::srv::SendBytes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendBytes_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendBytes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendBytes_Response_

// alias to use template instance with default allocator
using SendBytes_Response =
  rosbridge_test_msgs::srv::SendBytes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosbridge_test_msgs
{

namespace srv
{

struct SendBytes
{
  using Request = rosbridge_test_msgs::srv::SendBytes_Request;
  using Response = rosbridge_test_msgs::srv::SendBytes_Response;
};

}  // namespace srv

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__SEND_BYTES__STRUCT_HPP_
