// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbridge_msgs:msg/ConnectedClients.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__FUNCTIONS_H_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosbridge_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbridge_msgs/msg/detail/connected_clients__struct.h"

/// Initialize msg/ConnectedClients message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbridge_msgs__msg__ConnectedClients
 * )) before or use
 * rosbridge_msgs__msg__ConnectedClients__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
bool
rosbridge_msgs__msg__ConnectedClients__init(rosbridge_msgs__msg__ConnectedClients * msg);

/// Finalize msg/ConnectedClients message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
void
rosbridge_msgs__msg__ConnectedClients__fini(rosbridge_msgs__msg__ConnectedClients * msg);

/// Create msg/ConnectedClients message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbridge_msgs__msg__ConnectedClients__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
rosbridge_msgs__msg__ConnectedClients *
rosbridge_msgs__msg__ConnectedClients__create();

/// Destroy msg/ConnectedClients message.
/**
 * It calls
 * rosbridge_msgs__msg__ConnectedClients__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
void
rosbridge_msgs__msg__ConnectedClients__destroy(rosbridge_msgs__msg__ConnectedClients * msg);

/// Check for msg/ConnectedClients message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
bool
rosbridge_msgs__msg__ConnectedClients__are_equal(const rosbridge_msgs__msg__ConnectedClients * lhs, const rosbridge_msgs__msg__ConnectedClients * rhs);

/// Copy a msg/ConnectedClients message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
bool
rosbridge_msgs__msg__ConnectedClients__copy(
  const rosbridge_msgs__msg__ConnectedClients * input,
  rosbridge_msgs__msg__ConnectedClients * output);

/// Initialize array of msg/ConnectedClients messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbridge_msgs__msg__ConnectedClients__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
bool
rosbridge_msgs__msg__ConnectedClients__Sequence__init(rosbridge_msgs__msg__ConnectedClients__Sequence * array, size_t size);

/// Finalize array of msg/ConnectedClients messages.
/**
 * It calls
 * rosbridge_msgs__msg__ConnectedClients__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
void
rosbridge_msgs__msg__ConnectedClients__Sequence__fini(rosbridge_msgs__msg__ConnectedClients__Sequence * array);

/// Create array of msg/ConnectedClients messages.
/**
 * It allocates the memory for the array and calls
 * rosbridge_msgs__msg__ConnectedClients__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
rosbridge_msgs__msg__ConnectedClients__Sequence *
rosbridge_msgs__msg__ConnectedClients__Sequence__create(size_t size);

/// Destroy array of msg/ConnectedClients messages.
/**
 * It calls
 * rosbridge_msgs__msg__ConnectedClients__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
void
rosbridge_msgs__msg__ConnectedClients__Sequence__destroy(rosbridge_msgs__msg__ConnectedClients__Sequence * array);

/// Check for msg/ConnectedClients message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
bool
rosbridge_msgs__msg__ConnectedClients__Sequence__are_equal(const rosbridge_msgs__msg__ConnectedClients__Sequence * lhs, const rosbridge_msgs__msg__ConnectedClients__Sequence * rhs);

/// Copy an array of msg/ConnectedClients messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbridge_msgs
bool
rosbridge_msgs__msg__ConnectedClients__Sequence__copy(
  const rosbridge_msgs__msg__ConnectedClients__Sequence * input,
  rosbridge_msgs__msg__ConnectedClients__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__FUNCTIONS_H_
