cmake_minimum_required(VERSION 3.14)
project(Programs C)

set(CMAKE_C_STANDARD 11)

add_executable(hello hello/Hello.c)
add_executable(celsius celsius/main.c)
