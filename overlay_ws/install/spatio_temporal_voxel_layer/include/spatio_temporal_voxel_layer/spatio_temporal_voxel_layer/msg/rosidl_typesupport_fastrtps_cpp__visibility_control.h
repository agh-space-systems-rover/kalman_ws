// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef SPATIO_TEMPORAL_VOXEL_LAYER__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define SPATIO_TEMPORAL_VOXEL_LAYER__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spatio_temporal_voxel_layer __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_spatio_temporal_voxel_layer __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spatio_temporal_voxel_layer __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_spatio_temporal_voxel_layer __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_spatio_temporal_voxel_layer
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spatio_temporal_voxel_layer
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_spatio_temporal_voxel_layer
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_spatio_temporal_voxel_layer __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_spatio_temporal_voxel_layer
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_spatio_temporal_voxel_layer
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // SPATIO_TEMPORAL_VOXEL_LAYER__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
