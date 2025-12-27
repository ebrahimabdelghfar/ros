cmake_minimum_required(VERSION 3.8)
project(ackermann_to_vehiclecontrol)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ackermann_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(vehiclecontrol_msgs REQUIRED)

# Create the executable
add_executable(ackermann_to_vehiclecontrol_node src/ackermann_to_vehiclecontrol_node.cpp)

# Add dependencies
ament_target_dependencies(ackermann_to_vehiclecontrol_node
  rclcpp
  ackermann_msgs
  std_msgs
  vehiclecontrol_msgs
)

# Install the executable
install(TARGETS
  ackermann_to_vehiclecontrol_node
  DESTINATION lib/${PROJECT_NAME}
)

# Install config files
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
