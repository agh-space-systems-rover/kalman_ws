// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:msg/TestHeaderTwo.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/msg/detail/test_header_two__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace msg
{

namespace builder
{

class Init_TestHeaderTwo_header
{
public:
  Init_TestHeaderTwo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_test_msgs::msg::TestHeaderTwo header(::rosbridge_test_msgs::msg::TestHeaderTwo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::msg::TestHeaderTwo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::msg::TestHeaderTwo>()
{
  return rosbridge_test_msgs::msg::builder::Init_TestHeaderTwo_header();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__BUILDER_HPP_
