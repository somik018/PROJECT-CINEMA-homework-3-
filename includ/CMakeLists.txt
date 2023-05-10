cmake_minimum_required(VERSION 3.5)
project(config)
set_target_properties(config PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON)
configure_file(version.h.in 
           ${CMAKE_CURRENT_BINARY_DIR}/config.h)
