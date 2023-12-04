// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
// generated code does not contain a copyright notice

#ifndef SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "spatio_temporal_voxel_layer/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace spatio_temporal_voxel_layer
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
cdr_serialize(
  const spatio_temporal_voxel_layer::srv::SaveGrid_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spatio_temporal_voxel_layer::srv::SaveGrid_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
get_serialized_size(
  const spatio_temporal_voxel_layer::srv::SaveGrid_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
max_serialized_size_SaveGrid_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace spatio_temporal_voxel_layer

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spatio_temporal_voxel_layer, srv, SaveGrid_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "spatio_temporal_voxel_layer/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace spatio_temporal_voxel_layer
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
cdr_serialize(
  const spatio_temporal_voxel_layer::srv::SaveGrid_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  spatio_temporal_voxel_layer::srv::SaveGrid_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
get_serialized_size(
  const spatio_temporal_voxel_layer::srv::SaveGrid_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
max_serialized_size_SaveGrid_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace spatio_temporal_voxel_layer

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spatio_temporal_voxel_layer, srv, SaveGrid_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "spatio_temporal_voxel_layer/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, spatio_temporal_voxel_layer, srv, SaveGrid)();

#ifdef __cplusplus
}
#endif

#endif  // SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
