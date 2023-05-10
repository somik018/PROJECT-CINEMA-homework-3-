cmake_minimum_required(VERSION 3.5) #минимальная версия
project(main VERSION 0.0.8) #название проекта и версия
add_executable(cinema main.cpp) #добавляем исполняемый файл
#устанавливаем стандарт языка
set_target_properties(
	cinema PROPERTIES 
	CXX_STANDARD 14 
	CXX_STANDARD_REQUIRED ON
)
target_link_libraries(cinema lib) #подключаем библиотеку
#расширяем область видимости
include_directories(
	../build/includ
)
include_directories(
	../lib
)