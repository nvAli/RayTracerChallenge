cmake_minimum_required(VERSION 3.18)

#include_directories( ${CMAKE_SOURCE_DIR} )

target_sources(RayTracerLib
    PRIVATE
        bar.cpp
    PUBLIC
        bar.h
)
