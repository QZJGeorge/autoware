### Unit tests
#
#   Only configured when BUILD_TESTING is true.

find_package(ament_cmake_gtest REQUIRED)

ament_add_gtest(test_signal test_signal.cpp)
target_link_libraries(test_signal ${PROJECT_NAME})

ament_add_gtest(test_message test_message.cpp)
target_link_libraries(test_message ${PROJECT_NAME})

ament_add_gtest(test_iterator test_iterator.cpp)
target_link_libraries(test_iterator ${PROJECT_NAME})
