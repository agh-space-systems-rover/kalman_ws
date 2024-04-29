// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/ServiceType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/srv/detail/service_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceType_Request & msg,
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
  const ServiceType_Request & msg,
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

inline std::string to_yaml(const ServiceType_Request & msg, bool use_flow_style = false)
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
  const rosapi_msgs::srv::ServiceType_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::ServiceType_Request & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceType_Request>()
{
  return "rosapi_msgs::srv::ServiceType_Request";
}

template<>
inline const char * name<rosapi_msgs::srv::ServiceType_Request>()
{
  return "rosapi_msgs/srv/ServiceType_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceType_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceType_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::ServiceType_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceType_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceType_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceType_Response & msg, bool use_flow_style = false)
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
  const rosapi_msgs::srv::ServiceType_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::ServiceType_Response & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceType_Response>()
{
  return "rosapi_msgs::srv::ServiceType_Response";
}

template<>
inline const char * name<rosapi_msgs::srv::ServiceType_Response>()
{
  return "rosapi_msgs/srv/ServiceType_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::ServiceType_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::ServiceType>()
{
  return "rosapi_msgs::srv::ServiceType";
}

template<>
inline const char * name<rosapi_msgs::srv::ServiceType>()
{
  return "rosapi_msgs/srv/ServiceType";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::ServiceType>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::ServiceType_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::ServiceType_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::ServiceType>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::ServiceType_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::ServiceType_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::ServiceType>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::ServiceType_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::ServiceType_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__DETAIL__SERVICE_TYPE__TRAITS_HPP_
