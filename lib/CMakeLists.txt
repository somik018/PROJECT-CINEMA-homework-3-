cmake_minimum_required(VERSION 3.5)
project(MyLib)
add_library(lib STATIC functions.cpp lib.h)
set_target_properties(lib PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)

