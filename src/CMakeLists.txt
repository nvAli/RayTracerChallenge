cmake_minimum_required(VERSION 3.18)

add_library(RayTracerLib "")

include_directories( ${CMAKE_SOURCE_DIR} )

add_subdirectory(base)
add_subdirectory(core)
add_subdirectory(math)
