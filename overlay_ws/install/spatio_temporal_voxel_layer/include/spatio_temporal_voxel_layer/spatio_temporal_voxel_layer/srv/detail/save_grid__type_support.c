// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from spatio_temporal_voxel_layer:srv/SaveGrid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "spatio_temporal_voxel_layer/srv/detail/save_grid__rosidl_typesupport_introspection_c.h"
#include "spatio_temporal_voxel_layer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "spatio_temporal_voxel_layer/srv/detail/save_grid__functions.h"
#include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.h"


// Include directives for member types
// Member `file_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spatio_temporal_voxel_layer__srv__SaveGrid_Request__init(message_memory);
}

void spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_fini_function(void * message_memory)
{
  spatio_temporal_voxel_layer__srv__SaveGrid_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_member_array[1] = {
  {
    "file_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spatio_temporal_voxel_layer__srv__SaveGrid_Request, file_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_members = {
  "spatio_temporal_voxel_layer__srv",  // message namespace
  "SaveGrid_Request",  // message name
  1,  // number of fields
  sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Request),
  spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_member_array,  // message members
  spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_type_support_handle = {
  0,
  &spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spatio_temporal_voxel_layer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spatio_temporal_voxel_layer, srv, SaveGrid_Request)() {
  if (!spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_type_support_handle.typesupport_identifier) {
    spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &spatio_temporal_voxel_layer__srv__SaveGrid_Request__rosidl_typesupport_introspection_c__SaveGrid_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "spatio_temporal_voxel_layer/srv/detail/save_grid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "spatio_temporal_voxel_layer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "spatio_temporal_voxel_layer/srv/detail/save_grid__functions.h"
// already included above
// #include "spatio_temporal_voxel_layer/srv/detail/save_grid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  spatio_temporal_voxel_layer__srv__SaveGrid_Response__init(message_memory);
}

void spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_fini_function(void * message_memory)
{
  spatio_temporal_voxel_layer__srv__SaveGrid_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_member_array[2] = {
  {
    "map_size_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spatio_temporal_voxel_layer__srv__SaveGrid_Response, map_size_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(spatio_temporal_voxel_layer__srv__SaveGrid_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_members = {
  "spatio_temporal_voxel_layer__srv",  // message namespace
  "SaveGrid_Response",  // message name
  2,  // number of fields
  sizeof(spatio_temporal_voxel_layer__srv__SaveGrid_Response),
  spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_member_array,  // message members
  spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_type_support_handle = {
  0,
  &spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spatio_temporal_voxel_layer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spatio_temporal_voxel_layer, srv, SaveGrid_Response)() {
  if (!spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_type_support_handle.typesupport_identifier) {
    spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &spatio_temporal_voxel_layer__srv__SaveGrid_Response__rosidl_typesupport_introspection_c__SaveGrid_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "spatio_temporal_voxel_layer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "spatio_temporal_voxel_layer/srv/detail/save_grid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_service_members = {
  "spatio_temporal_voxel_layer__srv",  // service namespace
  "SaveGrid",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_Request_message_type_support_handle,
  NULL  // response message
  // spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_Response_message_type_support_handle
};

static rosidl_service_type_support_t spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_service_type_support_handle = {
  0,
  &spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spatio_temporal_voxel_layer, srv, SaveGrid_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spatio_temporal_voxel_layer, srv, SaveGrid_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_spatio_temporal_voxel_layer
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spatio_temporal_voxel_layer, srv, SaveGrid)() {
  if (!spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_service_type_support_handle.typesupport_identifier) {
    spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spatio_temporal_voxel_layer, srv, SaveGrid_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, spatio_temporal_voxel_layer, srv, SaveGrid_Response)()->data;
  }

  return &spatio_temporal_voxel_layer__srv__detail__save_grid__rosidl_typesupport_introspection_c__SaveGrid_service_type_support_handle;
}
