// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_test_msgs:srv/TestMultipleRequestFields.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_REQUEST_FIELDS__BUILDER_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_REQUEST_FIELDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_test_msgs/srv/detail/test_multiple_request_fields__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_test_msgs
{

namespace srv
{

namespace builder
{

class Init_TestMultipleRequestFields_Request_bool_value
{
public:
  explicit Init_TestMultipleRequestFields_Request_bool_value(::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request & msg)
  : msg_(msg)
  {}
  ::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request bool_value(::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request msg_;
};

class Init_TestMultipleRequestFields_Request_string
{
public:
  explicit Init_TestMultipleRequestFields_Request_string(::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request & msg)
  : msg_(msg)
  {}
  Init_TestMultipleRequestFields_Request_bool_value string(::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request::_string_type arg)
  {
    msg_.string = std::move(arg);
    return Init_TestMultipleRequestFields_Request_bool_value(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request msg_;
};

class Init_TestMultipleRequestFields_Request_float_value
{
public:
  explicit Init_TestMultipleRequestFields_Request_float_value(::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request & msg)
  : msg_(msg)
  {}
  Init_TestMultipleRequestFields_Request_string float_value(::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return Init_TestMultipleRequestFields_Request_string(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request msg_;
};

class Init_TestMultipleRequestFields_Request_int_value
{
public:
  Init_TestMultipleRequestFields_Request_int_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMultipleRequestFields_Request_float_value int_value(::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_TestMultipleRequestFields_Request_float_value(msg_);
  }

private:
  ::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestMultipleRequestFields_Request>()
{
  return rosbridge_test_msgs::srv::builder::Init_TestMultipleRequestFields_Request_int_value();
}

}  // namespace rosbridge_test_msgs


namespace rosbridge_test_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_test_msgs::srv::TestMultipleRequestFields_Response>()
{
  return ::rosbridge_test_msgs::srv::TestMultipleRequestFields_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_REQUEST_FIELDS__BUILDER_HPP_
