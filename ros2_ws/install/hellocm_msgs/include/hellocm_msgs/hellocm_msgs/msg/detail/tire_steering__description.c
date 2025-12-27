// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hellocm_msgs:msg/TireSteering.idl
// generated code does not contain a copyright notice

#include "hellocm_msgs/msg/detail/tire_steering__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hellocm_msgs
const rosidl_type_hash_t *
hellocm_msgs__msg__TireSteering__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x7f, 0xed, 0xbb, 0xfb, 0x2a, 0x69, 0xe5,
      0x52, 0x06, 0xfd, 0xc0, 0x3b, 0x4a, 0x39, 0xb2,
      0x00, 0xac, 0xb6, 0x4f, 0x9d, 0xaf, 0x25, 0x91,
      0x3b, 0xc2, 0xcf, 0x9d, 0xc6, 0xa7, 0xbc, 0x6c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char hellocm_msgs__msg__TireSteering__TYPE_NAME[] = "hellocm_msgs/msg/TireSteering";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char hellocm_msgs__msg__TireSteering__FIELD_NAME__header[] = "header";
static char hellocm_msgs__msg__TireSteering__FIELD_NAME__tire_angle[] = "tire_angle";
static char hellocm_msgs__msg__TireSteering__FIELD_NAME__front_left_angle[] = "front_left_angle";
static char hellocm_msgs__msg__TireSteering__FIELD_NAME__front_right_angle[] = "front_right_angle";
static char hellocm_msgs__msg__TireSteering__FIELD_NAME__pinion_angle[] = "pinion_angle";

static rosidl_runtime_c__type_description__Field hellocm_msgs__msg__TireSteering__FIELDS[] = {
  {
    {hellocm_msgs__msg__TireSteering__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireSteering__FIELD_NAME__tire_angle, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireSteering__FIELD_NAME__front_left_angle, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireSteering__FIELD_NAME__front_right_angle, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireSteering__FIELD_NAME__pinion_angle, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hellocm_msgs__msg__TireSteering__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hellocm_msgs__msg__TireSteering__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hellocm_msgs__msg__TireSteering__TYPE_NAME, 29, 29},
      {hellocm_msgs__msg__TireSteering__FIELDS, 5, 5},
    },
    {hellocm_msgs__msg__TireSteering__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Tire Steering Angle Message\n"
  "# Provides actual tire/wheel steering angles from CarMaker simulation\n"
  "\n"
  "# Header with timestamp\n"
  "std_msgs/Header header\n"
  "\n"
  "# Mean front tire steering angle [rad]\n"
  "# This represents the actual wheel steering angle, not the pinion angle\n"
  "# Positive = left turn, Negative = right turn  \n"
  "float64 tire_angle\n"
  "\n"
  "# Individual wheel steering angles [rad]\n"
  "# Front left wheel steering angle\n"
  "float64 front_left_angle\n"
  "\n"
  "# Front right wheel steering angle\n"
  "float64 front_right_angle\n"
  "\n"
  "# Steering pinion angle for reference [rad]\n"
  "# This is the angle at the steering pinion (input to steering rack)\n"
  "float64 pinion_angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hellocm_msgs__msg__TireSteering__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hellocm_msgs__msg__TireSteering__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 624, 624},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hellocm_msgs__msg__TireSteering__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hellocm_msgs__msg__TireSteering__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
