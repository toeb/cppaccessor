cmake_minimum_required(VERSION 2.8.7)

project(cppaccessor)

file(GLOB_RECURSE files includes/**)
include_directories(includes)
add_executable(cppaccessor ${files} main.cpp)
enable_testing()
add_test(cppaccessor.test COMMAND cppaccessor)



