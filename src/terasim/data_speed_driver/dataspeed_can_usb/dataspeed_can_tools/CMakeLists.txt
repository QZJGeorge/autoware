cmake_minimum_required(VERSION 3.5)
project(dataspeed_can_tools)

find_package(ament_cmake REQUIRED)
find_package(rosbag2_cpp REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(can_msgs REQUIRED)
find_package(dataspeed_can_msgs REQUIRED)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  message(STATUS "Enabling coverage testing")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()

if (NOT "${CMAKE_CXX_STANDARD_COMPUTED_DEFAULT}")
  message(STATUS "Changing CXX_STANDARD from C++98 to C++11")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif ("${CMAKE_CXX_STANDARD_COMPUTED_DEFAULT}" STREQUAL "98")
  message(STATUS "Changing CXX_STANDARD from C++98 to C++11")
  set(CMAKE_CXX_STANDARD 11)
endif()

add_compile_options(${TARGET_NAME} -Wall -Wextra -Werror) #-pedantic fails in rosconsole https://github.com/ros/rosconsole/issues/9

add_library(${PROJECT_NAME}
  src/DbcIterator.cpp src/DbcMessage.cpp src/DbcSignal.cpp
  src/CanExtractor.cpp
)

ament_target_dependencies(${PROJECT_NAME}
  rosbag2_cpp
  rclcpp
  std_msgs
  can_msgs
  dataspeed_can_msgs
)

add_executable(dbc_node src/dbc_node.cpp)
target_link_libraries(dbc_node
  ${PROJECT_NAME}
)

add_executable(dbc_bag src/dbc_bag.cpp)
target_link_libraries(dbc_bag
  ${PROJECT_NAME}
)

# Install targets
install(TARGETS ${PROJECT_NAME} dbc_node dbc_bag
        ARCHIVE DESTINATION lib/${PROJECT_NAME}
        LIBRARY DESTINATION lib/${PROJECT_NAME}
        RUNTIME DESTINATION lib/${PROJECT_NAME}
)
# Install test files
install(
    DIRECTORY tests/
    DESTINATION share/${PROJECT_NAME}/tests
    FILES_MATCHING
    PATTERN "*.dbc"
)

if (BUILD_TESTING)
    add_subdirectory(tests)
endif()

ament_export_libraries(${PROJECT_NAME})

ament_package()