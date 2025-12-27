// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hellocm_msgs:msg/TireForces.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hellocm_msgs/msg/tire_forces.h"


#ifndef HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__STRUCT_H_
#define HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/TireForces in the package hellocm_msgs.
/**
  * Tire Forces and Slip Data Message (Pacejka Tire Model Ground Truth)
  * Provides actual tire forces and slip data from CarMaker Pacejka tire model simulation
 */
typedef struct hellocm_msgs__msg__TireForces
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Tire identification (0=FL, 1=FR, 2=RL, 3=RR)
  uint8_t tire_index;
  /// Contact Point Forces in wheel coordinate system (FrW) [N]
  /// FrW: x = longitudinal, y = lateral, z = normal
  /// Longitudinal force (braking/traction) [N]
  double fx;
  /// Lateral force (cornering)
  double fy;
  /// Normal force (vertical load)
  double fz;
  /// Contact Point Torques in wheel coordinate system (FrW) [Nm]
  /// Overturning moment [Nm]
  double mx;
  /// Rolling resistance moment
  double my;
  /// Self-aligning torque
  double mz;
  /// Tire Slip Parameters (Pacejka Model Inputs)
  /// Slip angle (alpha) [ISO 8855 7.1.2] [rad]
  double slip_angle;
  /// Longitudinal slip (kappa) [ISO 8855 7.4.6] [-]
  double long_slip;
  /// Turn slip
  double turn_slip;
  /// Kinematic Parameters
  /// Camber/inclination angle
  double inclination_angle;
  /// Effective belt radius
  double effective_radius;
  /// Rotational rubber velocity at contact point
  double belt_velocity;
  /// Contact Point Information
  /// Contact point position X in global frame
  double contact_point_x;
  /// Contact point position Y in global frame
  double contact_point_y;
  /// Contact point position Z in global frame
  double contact_point_z;
  /// Road Properties
  /// Road friction coefficient
  double mu_road;
  /// Indicates if tire is on the road
  bool on_road;
  /// Additional Tire State
  /// Rim angular velocity
  double rim_rotation_speed;
  /// Tire rotational speed
  double angular_velocity;
} hellocm_msgs__msg__TireForces;

// Struct for a sequence of hellocm_msgs__msg__TireForces.
typedef struct hellocm_msgs__msg__TireForces__Sequence
{
  hellocm_msgs__msg__TireForces * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hellocm_msgs__msg__TireForces__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLOCM_MSGS__MSG__DETAIL__TIRE_FORCES__STRUCT_H_
