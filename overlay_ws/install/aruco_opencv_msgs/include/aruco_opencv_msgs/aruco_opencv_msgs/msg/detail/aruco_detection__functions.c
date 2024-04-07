// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_opencv_msgs:msg/ArucoDetection.idl
// generated code does not contain a copyright notice
#include "aruco_opencv_msgs/msg/detail/aruco_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `markers`
#include "aruco_opencv_msgs/msg/detail/marker_pose__functions.h"
// Member `boards`
#include "aruco_opencv_msgs/msg/detail/board_pose__functions.h"

bool
aruco_opencv_msgs__msg__ArucoDetection__init(aruco_opencv_msgs__msg__ArucoDetection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    aruco_opencv_msgs__msg__ArucoDetection__fini(msg);
    return false;
  }
  // markers
  if (!aruco_opencv_msgs__msg__MarkerPose__Sequence__init(&msg->markers, 0)) {
    aruco_opencv_msgs__msg__ArucoDetection__fini(msg);
    return false;
  }
  // boards
  if (!aruco_opencv_msgs__msg__BoardPose__Sequence__init(&msg->boards, 0)) {
    aruco_opencv_msgs__msg__ArucoDetection__fini(msg);
    return false;
  }
  return true;
}

void
aruco_opencv_msgs__msg__ArucoDetection__fini(aruco_opencv_msgs__msg__ArucoDetection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // markers
  aruco_opencv_msgs__msg__MarkerPose__Sequence__fini(&msg->markers);
  // boards
  aruco_opencv_msgs__msg__BoardPose__Sequence__fini(&msg->boards);
}

bool
aruco_opencv_msgs__msg__ArucoDetection__are_equal(const aruco_opencv_msgs__msg__ArucoDetection * lhs, const aruco_opencv_msgs__msg__ArucoDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // markers
  if (!aruco_opencv_msgs__msg__MarkerPose__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  // boards
  if (!aruco_opencv_msgs__msg__BoardPose__Sequence__are_equal(
      &(lhs->boards), &(rhs->boards)))
  {
    return false;
  }
  return true;
}

bool
aruco_opencv_msgs__msg__ArucoDetection__copy(
  const aruco_opencv_msgs__msg__ArucoDetection * input,
  aruco_opencv_msgs__msg__ArucoDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // markers
  if (!aruco_opencv_msgs__msg__MarkerPose__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  // boards
  if (!aruco_opencv_msgs__msg__BoardPose__Sequence__copy(
      &(input->boards), &(output->boards)))
  {
    return false;
  }
  return true;
}

aruco_opencv_msgs__msg__ArucoDetection *
aruco_opencv_msgs__msg__ArucoDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_opencv_msgs__msg__ArucoDetection * msg = (aruco_opencv_msgs__msg__ArucoDetection *)allocator.allocate(sizeof(aruco_opencv_msgs__msg__ArucoDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_opencv_msgs__msg__ArucoDetection));
  bool success = aruco_opencv_msgs__msg__ArucoDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_opencv_msgs__msg__ArucoDetection__destroy(aruco_opencv_msgs__msg__ArucoDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_opencv_msgs__msg__ArucoDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_opencv_msgs__msg__ArucoDetection__Sequence__init(aruco_opencv_msgs__msg__ArucoDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_opencv_msgs__msg__ArucoDetection * data = NULL;

  if (size) {
    data = (aruco_opencv_msgs__msg__ArucoDetection *)allocator.zero_allocate(size, sizeof(aruco_opencv_msgs__msg__ArucoDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_opencv_msgs__msg__ArucoDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_opencv_msgs__msg__ArucoDetection__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_opencv_msgs__msg__ArucoDetection__Sequence__fini(aruco_opencv_msgs__msg__ArucoDetection__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_opencv_msgs__msg__ArucoDetection__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_opencv_msgs__msg__ArucoDetection__Sequence *
aruco_opencv_msgs__msg__ArucoDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_opencv_msgs__msg__ArucoDetection__Sequence * array = (aruco_opencv_msgs__msg__ArucoDetection__Sequence *)allocator.allocate(sizeof(aruco_opencv_msgs__msg__ArucoDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_opencv_msgs__msg__ArucoDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_opencv_msgs__msg__ArucoDetection__Sequence__destroy(aruco_opencv_msgs__msg__ArucoDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_opencv_msgs__msg__ArucoDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_opencv_msgs__msg__ArucoDetection__Sequence__are_equal(const aruco_opencv_msgs__msg__ArucoDetection__Sequence * lhs, const aruco_opencv_msgs__msg__ArucoDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_opencv_msgs__msg__ArucoDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_opencv_msgs__msg__ArucoDetection__Sequence__copy(
  const aruco_opencv_msgs__msg__ArucoDetection__Sequence * input,
  aruco_opencv_msgs__msg__ArucoDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_opencv_msgs__msg__ArucoDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_opencv_msgs__msg__ArucoDetection * data =
      (aruco_opencv_msgs__msg__ArucoDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_opencv_msgs__msg__ArucoDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_opencv_msgs__msg__ArucoDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_opencv_msgs__msg__ArucoDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
