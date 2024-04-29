// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/NodeDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__NODE_DETAILS__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__NODE_DETAILS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/srv/detail/node_details__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const NodeDetails_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: node
  {
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeDetails_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node: ";
    rosidl_generator_traits::value_to_yaml(msg.node, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeDetails_Request & msg, bool use_flow_style = false)
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
  const rosapi_msgs::srv::NodeDetails_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::NodeDetails_Request & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::NodeDetails_Request>()
{
  return "rosapi_msgs::srv::NodeDetails_Request";
}

template<>
inline const char * name<rosapi_msgs::srv::NodeDetails_Request>()
{
  return "rosapi_msgs/srv/NodeDetails_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::NodeDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::NodeDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::NodeDetails_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const NodeDetails_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: subscribing
  {
    if (msg.subscribing.size() == 0) {
      out << "subscribing: []";
    } else {
      out << "subscribing: [";
      size_t pending_items = msg.subscribing.size();
      for (auto item : msg.subscribing) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: publishing
  {
    if (msg.publishing.size() == 0) {
      out << "publishing: []";
    } else {
      out << "publishing: [";
      size_t pending_items = msg.publishing.size();
      for (auto item : msg.publishing) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: services
  {
    if (msg.services.size() == 0) {
      out << "services: []";
    } else {
      out << "services: [";
      size_t pending_items = msg.services.size();
      for (auto item : msg.services) {
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
  const NodeDetails_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: subscribing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subscribing.size() == 0) {
      out << "subscribing: []\n";
    } else {
      out << "subscribing:\n";
      for (auto item : msg.subscribing) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: publishing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.publishing.size() == 0) {
      out << "publishing: []\n";
    } else {
      out << "publishing:\n";
      for (auto item : msg.publishing) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: services
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.services.size() == 0) {
      out << "services: []\n";
    } else {
      out << "services:\n";
      for (auto item : msg.services) {
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

inline std::string to_yaml(const NodeDetails_Response & msg, bool use_flow_style = false)
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
  const rosapi_msgs::srv::NodeDetails_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::NodeDetails_Response & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::NodeDetails_Response>()
{
  return "rosapi_msgs::srv::NodeDetails_Response";
}

template<>
inline const char * name<rosapi_msgs::srv::NodeDetails_Response>()
{
  return "rosapi_msgs/srv/NodeDetails_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::NodeDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::NodeDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::NodeDetails_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::NodeDetails>()
{
  return "rosapi_msgs::srv::NodeDetails";
}

template<>
inline const char * name<rosapi_msgs::srv::NodeDetails>()
{
  return "rosapi_msgs/srv/NodeDetails";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::NodeDetails>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::NodeDetails_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::NodeDetails_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::NodeDetails>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::NodeDetails_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::NodeDetails_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::NodeDetails>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::NodeDetails_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::NodeDetails_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__DETAIL__NODE_DETAILS__TRAITS_HPP_
