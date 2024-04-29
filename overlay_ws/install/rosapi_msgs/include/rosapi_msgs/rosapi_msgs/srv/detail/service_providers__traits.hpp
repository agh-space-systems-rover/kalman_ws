// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/ServiceProviders.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SERVICE_PROVIDERS__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SERVICE_PROVIDERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/srv/detail/service_providers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceProviders_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: service
  {
    out << "service: ";
    rosidl_generator_traits::value_to_yaml(msg.service, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceProviders_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service: ";
    rosidl_generator_traits::value_to_yaml(msg.service, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceProviders_Request & msg, bool use_flow_style = false)
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
  const rosapi_msgs::srv::ServiceProviders_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::ServiceProviders_Request & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceProviders_Request>()
{
  return "rosapi_msgs::srv::ServiceProviders_Request";
}

template<>
inline const char * name<rosapi_msgs::srv::ServiceProviders_Request>()
{
  return "rosapi_msgs/srv/ServiceProviders_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceProviders_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceProviders_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::ServiceProviders_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceProviders_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: providers
  {
    if (msg.providers.size() == 0) {
      out << "providers: []";
    } else {
      out << "providers: [";
      size_t pending_items = msg.providers.size();
      for (auto item : msg.providers) {
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
  const ServiceProviders_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: providers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.providers.size() == 0) {
      out << "providers: []\n";
    } else {
      out << "providers:\n";
      for (auto item : msg.providers) {
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

inline std::string to_yaml(const ServiceProviders_Response & msg, bool use_flow_style = false)
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
  const rosapi_msgs::srv::ServiceProviders_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::ServiceProviders_Response & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceProviders_Response>()
{
  return "rosapi_msgs::srv::ServiceProviders_Response";
}

template<>
inline const char * name<rosapi_msgs::srv::ServiceProviders_Response>()
{
  return "rosapi_msgs/srv/ServiceProviders_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceProviders_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceProviders_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::ServiceProviders_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceProviders>()
{
  return "rosapi_msgs::srv::ServiceProviders";
}

template<>
inline const char * name<rosapi_msgs::srv::ServiceProviders>()
{
  return "rosapi_msgs/srv/ServiceProviders";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceProviders>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::ServiceProviders_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::ServiceProviders_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceProviders>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::ServiceProviders_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::ServiceProviders_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::ServiceProviders>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::ServiceProviders_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::ServiceProviders_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__DETAIL__SERVICE_PROVIDERS__TRAITS_HPP_
