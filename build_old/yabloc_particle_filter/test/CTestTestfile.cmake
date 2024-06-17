# CMake generated Testfile for 
# Source directory: /home/mtl12345/autoware/src/universe/autoware.universe/localization/yabloc/yabloc_particle_filter/test
# Build directory: /home/mtl12345/autoware/build/yabloc_particle_filter/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_resampler "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/mtl12345/autoware/build/yabloc_particle_filter/test_results/yabloc_particle_filter/test_resampler.gtest.xml" "--package-name" "yabloc_particle_filter" "--output-file" "/home/mtl12345/autoware/build/yabloc_particle_filter/ament_cmake_gtest/test_resampler.txt" "--command" "/home/mtl12345/autoware/build/yabloc_particle_filter/test/test_resampler" "--gtest_output=xml:/home/mtl12345/autoware/build/yabloc_particle_filter/test_results/yabloc_particle_filter/test_resampler.gtest.xml")
set_tests_properties(test_resampler PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/mtl12345/autoware/build/yabloc_particle_filter/test/test_resampler" TIMEOUT "60" WORKING_DIRECTORY "/home/mtl12345/autoware/build/yabloc_particle_filter/test" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/mtl12345/autoware/src/universe/autoware.universe/localization/yabloc/yabloc_particle_filter/test/CMakeLists.txt;1;ament_add_gtest;/home/mtl12345/autoware/src/universe/autoware.universe/localization/yabloc/yabloc_particle_filter/test/CMakeLists.txt;0;")
subdirs("../gtest")
