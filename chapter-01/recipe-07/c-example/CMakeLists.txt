# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-07 LANGUAGES C)

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message("C compiler flags, debug mode: ${CMAKE_C_FLAGS_DEBUG}")
message("C compiler flags, release mode: ${CMAKE_C_FLAGS_RELEASE}")
message("C compiler flags, release with debug info mode: ${CMAKE_C_FLAGS_RELWITHDEBINFO}")
message("C compiler flags, minimal release mode: ${CMAKE_C_FLAGS_MINSIZEREL}")

add_executable(hello-world hello-world.c)
