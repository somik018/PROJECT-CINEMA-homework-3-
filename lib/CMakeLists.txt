cmake_minimum_required(VERSION 3.5) #минимальная версия
project(MyLib) #название проекта
add_library(lib STATIC functions.cpp lib.h ) #создание библиотеки
set_target_properties(lib PROPERTIES CXX_STANDARD 14 CXX_STANDARD_REQUIRED ON) #стандарт языка

