// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
// generated code does not contain a copyright notice

#ifndef SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__TRAITS_HPP_
#define SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace spatio_temporal_voxel_layer
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveGrid_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_name
  {
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveGrid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_name: ";
    rosidl_generator_traits::value_to_yaml(msg.file_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveGrid_Request & msg, bool use_flow_style = false)
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

}  // namespace spatio_temporal_voxel_layer

namespace rosidl_generator_traits
{

[[deprecated("use spatio_temporal_voxel_layer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const spatio_temporal_voxel_layer::srv::SaveGrid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  spatio_temporal_voxel_layer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spatio_temporal_voxel_layer::srv::to_yaml() instead")]]
inline std::string to_yaml(const spatio_temporal_voxel_layer::srv::SaveGrid_Request & msg)
{
  return spatio_temporal_voxel_layer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<spatio_temporal_voxel_layer::srv::SaveGrid_Request>()
{
  return "spatio_temporal_voxel_layer::srv::SaveGrid_Request";
}

template<>
inline const char * name<spatio_temporal_voxel_layer::srv::SaveGrid_Request>()
{
  return "spatio_temporal_voxel_layer/srv/SaveGrid_Request";
}

template<>
struct has_fixed_size<spatio_temporal_voxel_layer::srv::SaveGrid_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<spatio_temporal_voxel_layer::srv::SaveGrid_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<spatio_temporal_voxel_layer::srv::SaveGrid_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace spatio_temporal_voxel_layer
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveGrid_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_size_bytes
  {
    out << "map_size_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.map_size_bytes, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveGrid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_size_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_size_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.map_size_bytes, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveGrid_Response & msg, bool use_flow_style = false)
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

}  // namespace spatio_temporal_voxel_layer

namespace rosidl_generator_traits
{

[[deprecated("use spatio_temporal_voxel_layer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const spatio_temporal_voxel_layer::srv::SaveGrid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  spatio_temporal_voxel_layer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use spatio_temporal_voxel_layer::srv::to_yaml() instead")]]
inline std::string to_yaml(const spatio_temporal_voxel_layer::srv::SaveGrid_Response & msg)
{
  return spatio_temporal_voxel_layer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<spatio_temporal_voxel_layer::srv::SaveGrid_Response>()
{
  return "spatio_temporal_voxel_layer::srv::SaveGrid_Response";
}

template<>
inline const char * name<spatio_temporal_voxel_layer::srv::SaveGrid_Response>()
{
  return "spatio_temporal_voxel_layer/srv/SaveGrid_Response";
}

template<>
struct has_fixed_size<spatio_temporal_voxel_layer::srv::SaveGrid_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<spatio_temporal_voxel_layer::srv::SaveGrid_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<spatio_temporal_voxel_layer::srv::SaveGrid_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<spatio_temporal_voxel_layer::srv::SaveGrid>()
{
  return "spatio_temporal_voxel_layer::srv::SaveGrid";
}

template<>
inline const char * name<spatio_temporal_voxel_layer::srv::SaveGrid>()
{
  return "spatio_temporal_voxel_layer/srv/SaveGrid";
}

template<>
struct has_fixed_size<spatio_temporal_voxel_layer::srv::SaveGrid>
  : std::integral_constant<
    bool,
    has_fixed_size<spatio_temporal_voxel_layer::srv::SaveGrid_Request>::value &&
    has_fixed_size<spatio_temporal_voxel_layer::srv::SaveGrid_Response>::value
  >
{
};

template<>
struct has_bounded_size<spatio_temporal_voxel_layer::srv::SaveGrid>
  : std::integral_constant<
    bool,
    has_bounded_size<spatio_temporal_voxel_layer::srv::SaveGrid_Request>::value &&
    has_bounded_size<spatio_temporal_voxel_layer::srv::SaveGrid_Response>::value
  >
{
};

template<>
struct is_service<spatio_temporal_voxel_layer::srv::SaveGrid>
  : std::true_type
{
};

template<>
struct is_service_request<spatio_temporal_voxel_layer::srv::SaveGrid_Request>
  : std::true_type
{
};

template<>
struct is_service_response<spatio_temporal_voxel_layer::srv::SaveGrid_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__TRAITS_HPP_
