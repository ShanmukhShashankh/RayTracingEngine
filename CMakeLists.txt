set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 
cmake_minimum_required(VERSION 3.10)
project(RayTracinginOneWeekend)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(include)
add_executable(RayTracinginOneWeekend main.cc)