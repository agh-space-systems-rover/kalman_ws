// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:msg/TestHeaderArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/msg/detail/test_header_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace msg
{

namespace builder
{

class Init_TestHeaderArray_header
{
public:
  Init_TestHeaderArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::msg::TestHeaderArray header(::rosbridge_test_msgs::msg::TestHeaderArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::msg::TestHeaderArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::msg::TestHeaderArray>()
{
  return rosbridge_test_msgs::msg::builder::Init_TestHeaderArray_header();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__BUILDER_HPP_
