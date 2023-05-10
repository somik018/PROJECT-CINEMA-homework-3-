cmake_minimum_required(VERSION 3.5) #минимальна€ верси€(при версии ниже выдает фатальную ошибку)
project(ROOT) #название проекта
#расшир€ю область видимости CMake, добавл€€ подкаталоги
 add_subdirectory(includ) 
 add_subdirectory(lib) 
 add_subdirectory(src) 