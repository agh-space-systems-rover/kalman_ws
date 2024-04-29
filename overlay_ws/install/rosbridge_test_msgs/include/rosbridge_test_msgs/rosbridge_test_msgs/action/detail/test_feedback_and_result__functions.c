// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbridge_test_msgs:action/TestFeedbackAndResult.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/action/detail/test_feedback_and_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__init(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_Goal *
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_Goal *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_Goal *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_Goal * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__init(rosbridge_test_msgs__action__TestFeedbackAndResult_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_Result * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_Result * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_Result *
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Result * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_Result *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Result));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Result * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_Result *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_Result__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_Result__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_Result * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__init(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback *
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "rosbridge_test_msgs/action/detail/test_feedback_and_result__functions.h"

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__init(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__init(&msg->goal)) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__fini(&msg->goal);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request *
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__init(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response *
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__init(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request *
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosbridge_test_msgs/action/detail/test_feedback_and_result__functions.h"

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__init(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Result__init(&msg->result)) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  rosbridge_test_msgs__action__TestFeedbackAndResult_Result__fini(&msg->result);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response *
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "rosbridge_test_msgs/action/detail/test_feedback_and_result__functions.h"

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__init(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__init(&msg->feedback)) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__fini(&msg->feedback);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rosbridge_test_msgs__action__TestFeedbackAndResult_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage *
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * msg = (rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage));
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__init(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__fini(&data[i - 1]);
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
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__fini(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * array)
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
      rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__fini(&array->data[i]);
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

rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence *
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * array = (rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__destroy(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__are_equal(const rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * lhs, const rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence__copy(
  const rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * input,
  rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage * data =
      (rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__action__TestFeedbackAndResult_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
