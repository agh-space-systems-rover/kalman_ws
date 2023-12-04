// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
// generated code does not contain a copyright notice

#ifndef SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__BUILDER_HPP_
#define SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace spatio_temporal_voxel_layer
{

namespace srv
{

namespace builder
{

class Init_SaveGrid_Request_file_name
{
public:
  Init_SaveGrid_Request_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::spatio_temporal_voxel_layer::srv::SaveGrid_Request file_name(::spatio_temporal_voxel_layer::srv::SaveGrid_Request::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spatio_temporal_voxel_layer::srv::SaveGrid_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spatio_temporal_voxel_layer::srv::SaveGrid_Request>()
{
  return spatio_temporal_voxel_layer::srv::builder::Init_SaveGrid_Request_file_name();
}

}  // namespace spatio_temporal_voxel_layer


namespace spatio_temporal_voxel_layer
{

namespace srv
{

namespace builder
{

class Init_SaveGrid_Response_status
{
public:
  explicit Init_SaveGrid_Response_status(::spatio_temporal_voxel_layer::srv::SaveGrid_Response & msg)
  : msg_(msg)
  {}
  ::spatio_temporal_voxel_layer::srv::SaveGrid_Response status(::spatio_temporal_voxel_layer::srv::SaveGrid_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::spatio_temporal_voxel_layer::srv::SaveGrid_Response msg_;
};

class Init_SaveGrid_Response_map_size_bytes
{
public:
  Init_SaveGrid_Response_map_size_bytes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveGrid_Response_status map_size_bytes(::spatio_temporal_voxel_layer::srv::SaveGrid_Response::_map_size_bytes_type arg)
  {
    msg_.map_size_bytes = std::move(arg);
    return Init_SaveGrid_Response_status(msg_);
  }

private:
  ::spatio_temporal_voxel_layer::srv::SaveGrid_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::spatio_temporal_voxel_layer::srv::SaveGrid_Response>()
{
  return spatio_temporal_voxel_layer::srv::builder::Init_SaveGrid_Response_map_size_bytes();
}

}  // namespace spatio_temporal_voxel_layer

#endif  // SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__BUILDER_HPP_
