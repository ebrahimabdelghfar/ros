// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice

#include "hellocm_msgs/msg/detail/tire_forces__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hellocm_msgs
const rosidl_type_hash_t *
hellocm_msgs__msg__TireForces__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x4e, 0x05, 0xc1, 0xaf, 0x4b, 0x99, 0x3c,
      0x86, 0x33, 0x44, 0x29, 0x05, 0x14, 0x99, 0xa5,
      0xe2, 0xf5, 0x29, 0xf8, 0x1a, 0xc5, 0x64, 0xca,
      0x06, 0xc0, 0x1c, 0x3d, 0x49, 0x0b, 0x03, 0xf2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

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

static char hellocm_msgs__msg__TireForces__TYPE_NAME[] = "hellocm_msgs/msg/TireForces";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char hellocm_msgs__msg__TireForces__FIELD_NAME__header[] = "header";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__tire_index[] = "tire_index";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__fx[] = "fx";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__fy[] = "fy";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__fz[] = "fz";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__mx[] = "mx";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__my[] = "my";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__mz[] = "mz";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__slip_angle[] = "slip_angle";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__long_slip[] = "long_slip";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__turn_slip[] = "turn_slip";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__inclination_angle[] = "inclination_angle";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__effective_radius[] = "effective_radius";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__belt_velocity[] = "belt_velocity";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__contact_point_x[] = "contact_point_x";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__contact_point_y[] = "contact_point_y";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__contact_point_z[] = "contact_point_z";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__mu_road[] = "mu_road";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__on_road[] = "on_road";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__rim_rotation_speed[] = "rim_rotation_speed";
static char hellocm_msgs__msg__TireForces__FIELD_NAME__angular_velocity[] = "angular_velocity";

static rosidl_runtime_c__type_description__Field hellocm_msgs__msg__TireForces__FIELDS[] = {
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__tire_index, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__fx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__fy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__fz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__mx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__my, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__mz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__slip_angle, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__long_slip, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__turn_slip, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__inclination_angle, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__effective_radius, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__belt_velocity, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__contact_point_x, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__contact_point_y, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__contact_point_z, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__mu_road, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__on_road, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__rim_rotation_speed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hellocm_msgs__msg__TireForces__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hellocm_msgs__msg__TireForces__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
hellocm_msgs__msg__TireForces__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hellocm_msgs__msg__TireForces__TYPE_NAME, 27, 27},
      {hellocm_msgs__msg__TireForces__FIELDS, 21, 21},
    },
    {hellocm_msgs__msg__TireForces__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Tire Forces and Slip Data Message (Pacejka Tire Model Ground Truth)\n"
  "# Provides actual tire forces and slip data from CarMaker Pacejka tire model simulation\n"
  "\n"
  "# Header with timestamp\n"
  "std_msgs/Header header\n"
  "\n"
  "# Tire identification (0=FL, 1=FR, 2=RL, 3=RR)\n"
  "uint8 tire_index\n"
  "\n"
  "# Contact Point Forces in wheel coordinate system (FrW) [N]\n"
  "# FrW: x = longitudinal, y = lateral, z = normal\n"
  "float64 fx  # Longitudinal force (braking/traction) [N]\n"
  "float64 fy  # Lateral force (cornering) [N]\n"
  "float64 fz  # Normal force (vertical load) [N]\n"
  "\n"
  "# Contact Point Torques in wheel coordinate system (FrW) [Nm]\n"
  "float64 mx  # Overturning moment [Nm]\n"
  "float64 my  # Rolling resistance moment [Nm]\n"
  "float64 mz  # Self-aligning torque [Nm]\n"
  "\n"
  "# Tire Slip Parameters (Pacejka Model Inputs)\n"
  "float64 slip_angle      # Slip angle (alpha) [ISO 8855 7.1.2] [rad]\n"
  "float64 long_slip       # Longitudinal slip (kappa) [ISO 8855 7.4.6] [-]\n"
  "float64 turn_slip       # Turn slip [1/m]\n"
  "\n"
  "# Kinematic Parameters\n"
  "float64 inclination_angle   # Camber/inclination angle [rad]\n"
  "float64 effective_radius    # Effective belt radius [m]\n"
  "float64 belt_velocity       # Rotational rubber velocity at contact point [m/s]\n"
  "\n"
  "# Contact Point Information\n"
  "float64 contact_point_x  # Contact point position X in global frame [m]\n"
  "float64 contact_point_y  # Contact point position Y in global frame [m]\n"
  "float64 contact_point_z  # Contact point position Z in global frame [m]\n"
  "\n"
  "# Road Properties\n"
  "float64 mu_road         # Road friction coefficient [-]\n"
  "bool on_road            # Indicates if tire is on the road\n"
  "\n"
  "# Additional Tire State\n"
  "float64 rim_rotation_speed   # Rim angular velocity [rad/s]\n"
  "float64 angular_velocity     # Tire rotational speed [rad/s]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hellocm_msgs__msg__TireForces__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hellocm_msgs__msg__TireForces__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1690, 1690},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hellocm_msgs__msg__TireForces__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hellocm_msgs__msg__TireForces__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
