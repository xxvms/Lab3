cmake_minimum_required(VERSION 3.8)
project(Lab3)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Person.cpp Person.h Student.cpp Student.h Teacher.cpp Teacher.h)
add_executable(Lab3 ${SOURCE_FILES})