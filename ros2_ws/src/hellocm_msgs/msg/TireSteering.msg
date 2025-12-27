# Tire Steering Angle Message
# Provides actual tire/wheel steering angles from CarMaker simulation

# Header with timestamp
std_msgs/Header header

# Mean front tire steering angle [rad]
# This represents the actual wheel steering angle, not the pinion angle
# Positive = left turn, Negative = right turn  
float64 tire_angle

# Individual wheel steering angles [rad]
# Front left wheel steering angle
float64 front_left_angle

# Front right wheel steering angle
float64 front_right_angle

# Steering pinion angle for reference [rad]
# This is the angle at the steering pinion (input to steering rack)
float64 pinion_angle
