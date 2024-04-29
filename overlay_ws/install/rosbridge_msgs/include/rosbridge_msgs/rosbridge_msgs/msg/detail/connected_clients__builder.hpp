// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbridge_msgs:msg/ConnectedClients.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__BUILDER_HPP_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbridge_msgs/msg/detail/connected_clients__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbridge_msgs
{

namespace msg
{

namespace builder
{

class Init_ConnectedClients_clients
{
public:
  Init_ConnectedClients_clients()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbridge_msgs::msg::ConnectedClients clients(::rosbridge_msgs::msg::ConnectedClients::_clients_type arg)
  {
    msg_.clients = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbridge_msgs::msg::ConnectedClients msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbridge_msgs::msg::ConnectedClients>()
{
  return rosbridge_msgs::msg::builder::Init_ConnectedClients_clients();
}

}  // namespace rosbridge_msgs

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__BUILDER_HPP_
