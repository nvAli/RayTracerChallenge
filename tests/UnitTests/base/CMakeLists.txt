cmake_minimum_required(VERSION 3.18)

add_executable(testBase test_base.cpp)

target_link_libraries(testBase gtest_main)
target_link_libraries(testBase RayTracerLib)

add_test(NAME testBase COMMAND testBase)
