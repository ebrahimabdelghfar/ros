// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hellocm_msgs:msg/TireSteering.idl
// generated code does not contain a copyright notice
#include "hellocm_msgs/msg/detail/tire_steering__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
hellocm_msgs__msg__TireSteering__init(hellocm_msgs__msg__TireSteering * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hellocm_msgs__msg__TireSteering__fini(msg);
    return false;
  }
  // tire_angle
  // front_left_angle
  // front_right_angle
  // pinion_angle
  return true;
}

void
hellocm_msgs__msg__TireSteering__fini(hellocm_msgs__msg__TireSteering * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tire_angle
  // front_left_angle
  // front_right_angle
  // pinion_angle
}

bool
hellocm_msgs__msg__TireSteering__are_equal(const hellocm_msgs__msg__TireSteering * lhs, const hellocm_msgs__msg__TireSteering * rhs)
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
  // tire_angle
  if (lhs->tire_angle != rhs->tire_angle) {
    return false;
  }
  // front_left_angle
  if (lhs->front_left_angle != rhs->front_left_angle) {
    return false;
  }
  // front_right_angle
  if (lhs->front_right_angle != rhs->front_right_angle) {
    return false;
  }
  // pinion_angle
  if (lhs->pinion_angle != rhs->pinion_angle) {
    return false;
  }
  return true;
}

bool
hellocm_msgs__msg__TireSteering__copy(
  const hellocm_msgs__msg__TireSteering * input,
  hellocm_msgs__msg__TireSteering * output)
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
  // tire_angle
  output->tire_angle = input->tire_angle;
  // front_left_angle
  output->front_left_angle = input->front_left_angle;
  // front_right_angle
  output->front_right_angle = input->front_right_angle;
  // pinion_angle
  output->pinion_angle = input->pinion_angle;
  return true;
}

hellocm_msgs__msg__TireSteering *
hellocm_msgs__msg__TireSteering__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireSteering * msg = (hellocm_msgs__msg__TireSteering *)allocator.allocate(sizeof(hellocm_msgs__msg__TireSteering), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hellocm_msgs__msg__TireSteering));
  bool success = hellocm_msgs__msg__TireSteering__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hellocm_msgs__msg__TireSteering__destroy(hellocm_msgs__msg__TireSteering * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hellocm_msgs__msg__TireSteering__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hellocm_msgs__msg__TireSteering__Sequence__init(hellocm_msgs__msg__TireSteering__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireSteering * data = NULL;

  if (size) {
    data = (hellocm_msgs__msg__TireSteering *)allocator.zero_allocate(size, sizeof(hellocm_msgs__msg__TireSteering), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hellocm_msgs__msg__TireSteering__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hellocm_msgs__msg__TireSteering__fini(&data[i - 1]);
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
hellocm_msgs__msg__TireSteering__Sequence__fini(hellocm_msgs__msg__TireSteering__Sequence * array)
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
      hellocm_msgs__msg__TireSteering__fini(&array->data[i]);
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

hellocm_msgs__msg__TireSteering__Sequence *
hellocm_msgs__msg__TireSteering__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireSteering__Sequence * array = (hellocm_msgs__msg__TireSteering__Sequence *)allocator.allocate(sizeof(hellocm_msgs__msg__TireSteering__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hellocm_msgs__msg__TireSteering__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hellocm_msgs__msg__TireSteering__Sequence__destroy(hellocm_msgs__msg__TireSteering__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hellocm_msgs__msg__TireSteering__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hellocm_msgs__msg__TireSteering__Sequence__are_equal(const hellocm_msgs__msg__TireSteering__Sequence * lhs, const hellocm_msgs__msg__TireSteering__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hellocm_msgs__msg__TireSteering__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hellocm_msgs__msg__TireSteering__Sequence__copy(
  const hellocm_msgs__msg__TireSteering__Sequence * input,
  hellocm_msgs__msg__TireSteering__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hellocm_msgs__msg__TireSteering);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hellocm_msgs__msg__TireSteering * data =
      (hellocm_msgs__msg__TireSteering *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hellocm_msgs__msg__TireSteering__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hellocm_msgs__msg__TireSteering__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hellocm_msgs__msg__TireSteering__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
