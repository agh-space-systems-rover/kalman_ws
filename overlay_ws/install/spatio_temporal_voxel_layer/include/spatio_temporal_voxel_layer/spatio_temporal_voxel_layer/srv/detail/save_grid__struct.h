// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
// generated code does not contain a copyright notice

#ifndef SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__STRUCT_H_
#define SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveGrid in the package spatio_temporal_voxel_layer.
typedef struct spatio_temporal_voxel_layer__srv__SaveGrid_Request
{
  rosidl_runtime_c__String file_name;
} spatio_temporal_voxel_layer__srv__SaveGrid_Request;

// Struct for a sequence of spatio_temporal_voxel_layer__srv__SaveGrid_Request.
typedef struct spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence
{
  spatio_temporal_voxel_layer__srv__SaveGrid_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spatio_temporal_voxel_layer__srv__SaveGrid_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SaveGrid in the package spatio_temporal_voxel_layer.
typedef struct spatio_temporal_voxel_layer__srv__SaveGrid_Response
{
  double map_size_bytes;
  bool status;
} spatio_temporal_voxel_layer__srv__SaveGrid_Response;

// Struct for a sequence of spatio_temporal_voxel_layer__srv__SaveGrid_Response.
typedef struct spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence
{
  spatio_temporal_voxel_layer__srv__SaveGrid_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} spatio_temporal_voxel_layer__srv__SaveGrid_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPATIO_TEMPORAL_VOXEL_LAYER__SRV__DETAIL__SAVE_GRID__STRUCT_H_
