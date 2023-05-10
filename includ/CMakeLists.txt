cmake_minimum_required(VERSION 3.5) #минимальная версия 
project(config VERSION 2.3.5)#названия и версия проекта для получения патча 
#конфигурация
configure_file(version.h.in 
          ${CMAKE_CURRENT_BINARY_DIR}/version.h)
