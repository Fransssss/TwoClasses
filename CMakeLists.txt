cmake_minimum_required(VERSION 3.21)
project(TwoClasses)

set(CMAKE_CXX_STANDARD 14)

add_executable(TwoClasses main.cpp Person.cpp Person.h Gender.cpp Gender.h)
