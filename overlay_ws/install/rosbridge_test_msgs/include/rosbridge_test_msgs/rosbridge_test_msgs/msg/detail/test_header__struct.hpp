// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:msg/TestHeader.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__msg__TestHeader __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__msg__TestHeader __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestHeader_
{
  using Type = TestHeader_<ContainerAllocator>;

  explicit TestHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TestHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestHeader
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestHeader
    std::shared_ptr<rosbridge_test_msgs::msg::TestHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestHeader_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestHeader_

// alias to use template instance with default allocator
using TestHeader =
  rosbridge_test_msgs::msg::TestHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER__STRUCT_HPP_
