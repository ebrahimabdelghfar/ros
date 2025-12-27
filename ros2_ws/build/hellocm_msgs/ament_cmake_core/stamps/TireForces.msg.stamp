# Tire Forces and Slip Data Message (Pacejka Tire Model Ground Truth)
# Provides actual tire forces and slip data from CarMaker Pacejka tire model simulation

# Header with timestamp
std_msgs/Header header

# Tire identification (0=FL, 1=FR, 2=RL, 3=RR)
uint8 tire_index

# Contact Point Forces in wheel coordinate system (FrW) [N]
# FrW: x = longitudinal, y = lateral, z = normal
float64 fx  # Longitudinal force (braking/traction) [N]
float64 fy  # Lateral force (cornering) [N]
float64 fz  # Normal force (vertical load) [N]

# Contact Point Torques in wheel coordinate system (FrW) [Nm]
float64 mx  # Overturning moment [Nm]
float64 my  # Rolling resistance moment [Nm]
float64 mz  # Self-aligning torque [Nm]

# Tire Slip Parameters (Pacejka Model Inputs)
float64 slip_angle      # Slip angle (alpha) [ISO 8855 7.1.2] [rad]
float64 long_slip       # Longitudinal slip (kappa) [ISO 8855 7.4.6] [-]
float64 turn_slip       # Turn slip [1/m]

# Kinematic Parameters
float64 inclination_angle   # Camber/inclination angle [rad]
float64 effective_radius    # Effective belt radius [m]
float64 belt_velocity       # Rotational rubber velocity at contact point [m/s]

# Contact Point Information
float64 contact_point_x  # Contact point position X in global frame [m]
float64 contact_point_y  # Contact point position Y in global frame [m]
float64 contact_point_z  # Contact point position Z in global frame [m]

# Road Properties
float64 mu_road         # Road friction coefficient [-]
bool on_road            # Indicates if tire is on the road

# Additional Tire State
float64 rim_rotation_speed   # Rim angular velocity [rad/s]
float64 angular_velocity     # Tire rotational speed [rad/s]
