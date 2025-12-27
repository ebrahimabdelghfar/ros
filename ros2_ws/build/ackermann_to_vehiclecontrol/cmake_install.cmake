# Install script for directory: /home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/src/ackermann_to_vehiclecontrol

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/install/ackermann_to_vehiclecontrol")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol" TYPE EXECUTABLE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/install/vehiclecontrol_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ackermann_to_vehiclecontrol/ackermann_to_vehiclecontrol_node")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/CMakeFiles/ackermann_to_vehiclecontrol_node.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE DIRECTORY FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/src/ackermann_to_vehiclecontrol/config")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE DIRECTORY FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/src/ackermann_to_vehiclecontrol/launch")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ackermann_to_vehiclecontrol")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ackermann_to_vehiclecontrol")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol/environment" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol/environment" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_index/share/ament_index/resource_index/packages/ackermann_to_vehiclecontrol")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol/cmake" TYPE FILE FILES
    "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_core/ackermann_to_vehiclecontrolConfig.cmake"
    "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/ament_cmake_core/ackermann_to_vehiclecontrolConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ackermann_to_vehiclecontrol" TYPE FILE FILES "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/src/ackermann_to_vehiclecontrol/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ebrahim/formula-carmaker-fs_2025/FCM_Projects/FS_autonomous/ros/ros2_ws/build/ackermann_to_vehiclecontrol/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
