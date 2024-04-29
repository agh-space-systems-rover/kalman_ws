// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_msgs:msg/ConnectedClient.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__BUILDER_HPP_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_msgs/msg/detail/connected_client__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_msgs
{

namespace msg
{

namespace builder
{

class Init_ConnectedClient_connection_time
{
public:
  explicit Init_ConnectedClient_connection_time(::rosbridge_msgs::msg::ConnectedClient & msg)
  : msg_(msg)
  {}
  ::rosbridge_msgs::msg::ConnectedClient connection_time(::rosbridge_msgs::msg::ConnectedClient::_connection_time_type arg)
  {
    msg_.connection_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_msgs::msg::ConnectedClient msg_;
};

class Init_ConnectedClient_ip_address
{
public:
  Init_ConnectedClient_ip_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectedClient_connection_time ip_address(::rosbridge_msgs::msg::ConnectedClient::_ip_address_type arg)
  {
    msg_.ip_address = std::move(arg);
    return Init_ConnectedClient_connection_time(msg_);
  }

private:
  ::rosbridge_msgs::msg::ConnectedClient msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_msgs::msg::ConnectedClient>()
{
  return rosbridge_msgs::msg::builder::Init_ConnectedClient_ip_address();
}

}  // namespace rosbridge_msgs

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__BUILDER_HPP_
