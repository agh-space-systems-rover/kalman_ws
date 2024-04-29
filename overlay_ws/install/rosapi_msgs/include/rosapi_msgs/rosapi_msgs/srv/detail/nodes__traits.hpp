// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/Nodes.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__NODES__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__NODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/srv/detail/nodes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Nodes_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nodes_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::Nodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::Nodes_Request & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::Nodes_Request>()
{
  return "rosapi_msgs::srv::Nodes_Request";
}

template<>
inline const char * name<rosapi_msgs::srv::Nodes_Request>()
{
  return "rosapi_msgs/srv/Nodes_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::Nodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::Nodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosapi_msgs::srv::Nodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Nodes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nodes_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::Nodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::Nodes_Response & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::Nodes_Response>()
{
  return "rosapi_msgs::srv::Nodes_Response";
}

template<>
inline const char * name<rosapi_msgs::srv::Nodes_Response>()
{
  return "rosapi_msgs/srv/Nodes_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::Nodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::Nodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::Nodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::Nodes>()
{
  return "rosapi_msgs::srv::Nodes";
}

template<>
inline const char * name<rosapi_msgs::srv::Nodes>()
{
  return "rosapi_msgs/srv/Nodes";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::Nodes>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::Nodes_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::Nodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::Nodes>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::Nodes_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::Nodes_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::Nodes>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::Nodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::Nodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__DETAIL__NODES__TRAITS_HPP_
