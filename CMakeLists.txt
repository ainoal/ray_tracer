cmake_minimum_required(VERSION 3.10)

project(raytracer)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
    src/main.cpp
    lib/glfw/deps/glad.c)

add_executable(raytracer ${SOURCE_FILES})
