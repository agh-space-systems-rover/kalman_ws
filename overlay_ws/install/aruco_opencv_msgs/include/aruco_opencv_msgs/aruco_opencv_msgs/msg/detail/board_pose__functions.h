// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aruco_opencv_msgs:msg/BoardPose.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__FUNCTIONS_H_
#define ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aruco_opencv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "aruco_opencv_msgs/msg/detail/board_pose__struct.h"

/// Initialize msg/BoardPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aruco_opencv_msgs__msg__BoardPose
 * )) before or use
 * aruco_opencv_msgs__msg__BoardPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
bool
aruco_opencv_msgs__msg__BoardPose__init(aruco_opencv_msgs__msg__BoardPose * msg);

/// Finalize msg/BoardPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
void
aruco_opencv_msgs__msg__BoardPose__fini(aruco_opencv_msgs__msg__BoardPose * msg);

/// Create msg/BoardPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aruco_opencv_msgs__msg__BoardPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
aruco_opencv_msgs__msg__BoardPose *
aruco_opencv_msgs__msg__BoardPose__create();

/// Destroy msg/BoardPose message.
/**
 * It calls
 * aruco_opencv_msgs__msg__BoardPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
void
aruco_opencv_msgs__msg__BoardPose__destroy(aruco_opencv_msgs__msg__BoardPose * msg);

/// Check for msg/BoardPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
bool
aruco_opencv_msgs__msg__BoardPose__are_equal(const aruco_opencv_msgs__msg__BoardPose * lhs, const aruco_opencv_msgs__msg__BoardPose * rhs);

/// Copy a msg/BoardPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
bool
aruco_opencv_msgs__msg__BoardPose__copy(
  const aruco_opencv_msgs__msg__BoardPose * input,
  aruco_opencv_msgs__msg__BoardPose * output);

/// Initialize array of msg/BoardPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * aruco_opencv_msgs__msg__BoardPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
bool
aruco_opencv_msgs__msg__BoardPose__Sequence__init(aruco_opencv_msgs__msg__BoardPose__Sequence * array, size_t size);

/// Finalize array of msg/BoardPose messages.
/**
 * It calls
 * aruco_opencv_msgs__msg__BoardPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
void
aruco_opencv_msgs__msg__BoardPose__Sequence__fini(aruco_opencv_msgs__msg__BoardPose__Sequence * array);

/// Create array of msg/BoardPose messages.
/**
 * It allocates the memory for the array and calls
 * aruco_opencv_msgs__msg__BoardPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
aruco_opencv_msgs__msg__BoardPose__Sequence *
aruco_opencv_msgs__msg__BoardPose__Sequence__create(size_t size);

/// Destroy array of msg/BoardPose messages.
/**
 * It calls
 * aruco_opencv_msgs__msg__BoardPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
void
aruco_opencv_msgs__msg__BoardPose__Sequence__destroy(aruco_opencv_msgs__msg__BoardPose__Sequence * array);

/// Check for msg/BoardPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
bool
aruco_opencv_msgs__msg__BoardPose__Sequence__are_equal(const aruco_opencv_msgs__msg__BoardPose__Sequence * lhs, const aruco_opencv_msgs__msg__BoardPose__Sequence * rhs);

/// Copy an array of msg/BoardPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_aruco_opencv_msgs
bool
aruco_opencv_msgs__msg__BoardPose__Sequence__copy(
  const aruco_opencv_msgs__msg__BoardPose__Sequence * input,
  aruco_opencv_msgs__msg__BoardPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_OPENCV_MSGS__MSG__DETAIL__BOARD_POSE__FUNCTIONS_H_
