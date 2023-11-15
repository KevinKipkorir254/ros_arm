cmake_minimum_required(VERSION 3.8)
project(ros_arm_kdl)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(kdl_parser REQUIRED)
find_package(urdf REQUIRED)
find_package(urdfdom REQUIRED)
find_package(orocos_kdl_vendor REQUIRED)
find_package(ros_arm_description)

add_executable(ros_arm_kdl src/ros_arm_kdl.cpp)
ament_target_dependencies(ros_arm_kdl rclcpp std_msgs ament_index_cpp kdl_parser urdf urdfdom orocos_kdl_vendor)

install(TARGETS
  ros_arm_kdl
  DESTINATION lib/${PROJECT_NAME})



ament_package()
