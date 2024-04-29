// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:srv/TestMultipleResponseFields.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/srv/detail/test_multiple_response_fields__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestMultipleResponseFields_Request>()
{
  return ::rosbridge_test_msgs::srv::TestMultipleResponseFields_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace srv
{

namespace builder
{

class Init_TestMultipleResponseFields_Response_bool_value
{
public:
  explicit Init_TestMultipleResponseFields_Response_bool_value(::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response & msg)
  : msg_(msg)
  {}
  ::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response bool_value(::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response msg_;
};

class Init_TestMultipleResponseFields_Response_string
{
public:
  explicit Init_TestMultipleResponseFields_Response_string(::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response & msg)
  : msg_(msg)
  {}
  Init_TestMultipleResponseFields_Response_bool_value string(::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response::_string_type arg)
  {
    msg_.string = std::move(arg);
    return Init_TestMultipleResponseFields_Response_bool_value(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response msg_;
};

class Init_TestMultipleResponseFields_Response_float_value
{
public:
  explicit Init_TestMultipleResponseFields_Response_float_value(::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response & msg)
  : msg_(msg)
  {}
  Init_TestMultipleResponseFields_Response_string float_value(::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return Init_TestMultipleResponseFields_Response_string(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response msg_;
};

class Init_TestMultipleResponseFields_Response_int_value
{
public:
  Init_TestMultipleResponseFields_Response_int_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMultipleResponseFields_Response_float_value int_value(::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_TestMultipleResponseFields_Response_float_value(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestMultipleResponseFields_Response>()
{
  return rosbridge_test_msgs::srv::builder::Init_TestMultipleResponseFields_Response_int_value();
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__BUILDER_HPP_
