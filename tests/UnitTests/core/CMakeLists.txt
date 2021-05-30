cmake_minimum_required(VERSION 3.18)

add_executable(testCore test_core.cpp)

target_link_libraries(testCore gtest_main)
target_link_libraries(testCore RayTracerLib)

add_test(NAME testCore COMMAND testCore)
