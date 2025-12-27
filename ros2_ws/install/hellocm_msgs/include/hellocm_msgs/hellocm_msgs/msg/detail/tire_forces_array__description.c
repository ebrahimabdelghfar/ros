// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hellocm_msgs:msg/TireForcesArray.idl
// generated code does not contain a copyright notice

#include "hellocm_msgs/msg/detail/tire_forces_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hellocm_msgs
const rosidl_type_hash_t *
hellocm_msgs__msg__TireForcesArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0x68, 0x14, 0xa3, 0xb6, 0x3b, 0x22, 0x64,
      0x7f, 0x61, 0x07, 0xa7, 0xc0, 0xab, 0x4c, 0x05,
      0x92, 0x11, 0x26, 0x7d, 0xf1, 0x56, 0xbb, 0x21,
      0x9d, 0x0c, 0x94, 0xe2, 0x72, 0xfa, 0x2a, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "hellocm_msgs/msg/detail/tire_forces__functions.h"
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
static const rosidl_type_hash_t hellocm_msgs__msg__TireForces__EXPECTED_HASH = {1, {
    0x15, 0x4e, 0x05, 0xc1, 0xaf, 0x4b, 0x99, 0x3c,
    0x86, 0x33, 0x44, 0x29, 0x05, 0x14, 0x99, 0xa5,
    0xe2, 0xf5, 0x29, 0xf8, 0x1a, 0xc5, 0x64, 0xca,
    0x06, 0xc0, 0x1c, 0x3d, 0x49, 0x0b, 0x03, 0xf2,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char hellocm_msgs__msg__TireForcesArray__TYPE_NAME[] = "hellocm_msgs/msg/TireForcesArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char hellocm_msgs__msg__TireForces__TYPE_NAME[] = "hellocm_msgs/msg/TireForces";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char hellocm_msgs__msg__TireForcesArray__FIELD_NAME__header[] = "header";
static char hellocm_msgs__msg__TireForcesArray__FIELD_NAME__front_left[] = "front_left";
static char hellocm_msgs__msg__TireForcesArray__FIELD_NAME__front_right[] = "front_right";
static char hellocm_msgs__msg__TireForcesArray__FIELD_NAME__rear_left[] = "rear_left";
static char hellocm_msgs__msg__TireForcesArray__FIELD_NAME__rear_right[] = "rear_right";

static rosidl_runtime_c__type_description__Field hellocm_msgs__msg__TireForcesArray__FIELDS[] = {
  {
    {hellocm_msgs__msg__TireForcesArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForcesArray__FIELD_NAME__front_left, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hellocm_msgs__msg__TireForces__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForcesArray__FIELD_NAME__front_right, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hellocm_msgs__msg__TireForces__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForcesArray__FIELD_NAME__rear_left, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hellocm_msgs__msg__TireForces__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForcesArray__FIELD_NAME__rear_right, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {hellocm_msgs__msg__TireForces__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hellocm_msgs__msg__TireForcesArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hellocm_msgs__msg__TireForcesArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hellocm_msgs__msg__TireForcesArray__TYPE_NAME, 32, 32},
      {hellocm_msgs__msg__TireForcesArray__FIELDS, 5, 5},
    },
    {hellocm_msgs__msg__TireForcesArray__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&hellocm_msgs__msg__TireForces__EXPECTED_HASH, hellocm_msgs__msg__TireForces__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = hellocm_msgs__msg__TireForces__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Tire Forces Array Message\n"
  "# Provides tire forces data for all four tires from CarMaker Pacejka model\n"
  "\n"
  "# Header with timestamp\n"
  "std_msgs/Header header\n"
  "\n"
  "# Individual tire forces (FL, FR, RL, RR)\n"
  "TireForces front_left\n"
  "TireForces front_right\n"
  "TireForces rear_left\n"
  "TireForces rear_right";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hellocm_msgs__msg__TireForcesArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hellocm_msgs__msg__TireForcesArray__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 282, 282},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hellocm_msgs__msg__TireForcesArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hellocm_msgs__msg__TireForcesArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *hellocm_msgs__msg__TireForces__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
