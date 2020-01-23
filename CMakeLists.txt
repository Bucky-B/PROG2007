cmake_minimum_required(VERSION 3.14)
project(Programs C)

set(CMAKE_C_STANDARD 11)

add_executable(Programs main.c)
add_executable(polynomial polynomial/main.c)
add_executable(Programs TESTING/main.c)
add_executable(Programs TESTINGAREA/main.c)
add_executable(Programs TESTINGAREA/main.c)
add_executable(Programs AssignmentOne/assignmentone.c)