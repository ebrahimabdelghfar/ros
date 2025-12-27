// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice
#include "hellocm_msgs/msg/detail/tire_forces_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `front_left`
// Member `front_right`
// Member `rear_left`
// Member `rear_right`
#include "hellocm_msgs/msg/detail/tire_forces__functions.h"

bool
hellocm_msgs__msg__TireForcesArray__init(hellocm_msgs__msg__TireForcesArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hellocm_msgs__msg__TireForcesArray__fini(msg);
    return false;
  }
  // front_left
  if (!hellocm_msgs__msg__TireForces__init(&msg->front_left)) {
    hellocm_msgs__msg__TireForcesArray__fini(msg);
    return false;
  }
  // front_right
  if (!hellocm_msgs__msg__TireForces__init(&msg->front_right)) {
    hellocm_msgs__msg__TireForcesArray__fini(msg);
    return false;
  }
  // rear_left
  if (!hellocm_msgs__msg__TireForces__init(&msg->rear_left)) {
    hellocm_msgs__msg__TireForcesArray__fini(msg);
    return false;
  }
  // rear_right
  if (!hellocm_msgs__msg__TireForces__init(&msg->rear_right)) {
    hellocm_msgs__msg__TireForcesArray__fini(msg);
    return false;
  }
  return true;
}

void
hellocm_msgs__msg__TireForcesArray__fini(hellocm_msgs__msg__TireForcesArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // front_left
  hellocm_msgs__msg__TireForces__fini(&msg->front_left);
  // front_right
  hellocm_msgs__msg__TireForces__fini(&msg->front_right);
  // rear_left
  hellocm_msgs__msg__TireForces__fini(&msg->rear_left);
  // rear_right
  hellocm_msgs__msg__TireForces__fini(&msg->rear_right);
}

bool
hellocm_msgs__msg__TireForcesArray__are_equal(const hellocm_msgs__msg__TireForcesArray * lhs, const hellocm_msgs__msg__TireForcesArray * rhs)
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
  // front_left
  if (!hellocm_msgs__msg__TireForces__are_equal(
      &(lhs->front_left), &(rhs->front_left)))
  {
    return false;
  }
  // front_right
  if (!hellocm_msgs__msg__TireForces__are_equal(
      &(lhs->front_right), &(rhs->front_right)))
  {
    return false;
  }
  // rear_left
  if (!hellocm_msgs__msg__TireForces__are_equal(
      &(lhs->rear_left), &(rhs->rear_left)))
  {
    return false;
  }
  // rear_right
  if (!hellocm_msgs__msg__TireForces__are_equal(
      &(lhs->rear_right), &(rhs->rear_right)))
  {
    return false;
  }
  return true;
}

bool
hellocm_msgs__msg__TireForcesArray__copy(
  const hellocm_msgs__msg__TireForcesArray * input,
  hellocm_msgs__msg__TireForcesArray * output)
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
  // front_left
  if (!hellocm_msgs__msg__TireForces__copy(
      &(input->front_left), &(output->front_left)))
  {
    return false;
  }
  // front_right
  if (!hellocm_msgs__msg__TireForces__copy(
      &(input->front_right), &(output->front_right)))
  {
    return false;
  }
  // rear_left
  if (!hellocm_msgs__msg__TireForces__copy(
      &(input->rear_left), &(output->rear_left)))
  {
    return false;
  }
  // rear_right
  if (!hellocm_msgs__msg__TireForces__copy(
      &(input->rear_right), &(output->rear_right)))
  {
    return false;
  }
  return true;
}

hellocm_msgs__msg__TireForcesArray *
hellocm_msgs__msg__TireForcesArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireForcesArray * msg = (hellocm_msgs__msg__TireForcesArray *)allocator.allocate(sizeof(hellocm_msgs__msg__TireForcesArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hellocm_msgs__msg__TireForcesArray));
  bool success = hellocm_msgs__msg__TireForcesArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hellocm_msgs__msg__TireForcesArray__destroy(hellocm_msgs__msg__TireForcesArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hellocm_msgs__msg__TireForcesArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hellocm_msgs__msg__TireForcesArray__Sequence__init(hellocm_msgs__msg__TireForcesArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireForcesArray * data = NULL;

  if (size) {
    data = (hellocm_msgs__msg__TireForcesArray *)allocator.zero_allocate(size, sizeof(hellocm_msgs__msg__TireForcesArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hellocm_msgs__msg__TireForcesArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hellocm_msgs__msg__TireForcesArray__fini(&data[i - 1]);
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
hellocm_msgs__msg__TireForcesArray__Sequence__fini(hellocm_msgs__msg__TireForcesArray__Sequence * array)
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
      hellocm_msgs__msg__TireForcesArray__fini(&array->data[i]);
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

hellocm_msgs__msg__TireForcesArray__Sequence *
hellocm_msgs__msg__TireForcesArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hellocm_msgs__msg__TireForcesArray__Sequence * array = (hellocm_msgs__msg__TireForcesArray__Sequence *)allocator.allocate(sizeof(hellocm_msgs__msg__TireForcesArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hellocm_msgs__msg__TireForcesArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hellocm_msgs__msg__TireForcesArray__Sequence__destroy(hellocm_msgs__msg__TireForcesArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hellocm_msgs__msg__TireForcesArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hellocm_msgs__msg__TireForcesArray__Sequence__are_equal(const hellocm_msgs__msg__TireForcesArray__Sequence * lhs, const hellocm_msgs__msg__TireForcesArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hellocm_msgs__msg__TireForcesArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hellocm_msgs__msg__TireForcesArray__Sequence__copy(
  const hellocm_msgs__msg__TireForcesArray__Sequence * input,
  hellocm_msgs__msg__TireForcesArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hellocm_msgs__msg__TireForcesArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hellocm_msgs__msg__TireForcesArray * data =
      (hellocm_msgs__msg__TireForcesArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hellocm_msgs__msg__TireForcesArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hellocm_msgs__msg__TireForcesArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hellocm_msgs__msg__TireForcesArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
