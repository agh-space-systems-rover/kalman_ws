// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/MessageDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__MESSAGE_DETAILS__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__MESSAGE_DETAILS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/message_details__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_MessageDetails_Request_type
{
public:
  Init_MessageDetails_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::MessageDetails_Request type(::rosapi_msgs::srv::MessageDetails_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::MessageDetails_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::MessageDetails_Request>()
{
  return rosapi_msgs::srv::builder::Init_MessageDetails_Request_type();
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_MessageDetails_Response_typedefs
{
public:
  Init_MessageDetails_Response_typedefs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::MessageDetails_Response typedefs(::rosapi_msgs::srv::MessageDetails_Response::_typedefs_type arg)
  {
    msg_.typedefs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::MessageDetails_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::MessageDetails_Response>()
{
  return rosapi_msgs::srv::builder::Init_MessageDetails_Response_typedefs();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__MESSAGE_DETAILS__BUILDER_HPP_
