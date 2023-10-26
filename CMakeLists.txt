cmake_minimum_required(VERSION 3.10)
project(StateMachineLib)

set(CMAKE_CXX_STANDARD 17)

add_library(StateMachineLib SHARED src/StateMachine.cpp)
