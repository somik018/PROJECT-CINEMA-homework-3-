cmake_minimum_required(VERSION 3.5) #����������� ������
project(main VERSION 0.0.8) #�������� ������� � ������
add_executable(cinema main.cpp) #��������� ����������� ����
#������������� �������� �����
set_target_properties(
	cinema PROPERTIES 
	CXX_STANDARD 14 
	CXX_STANDARD_REQUIRED ON
)
target_link_libraries(cinema lib) #���������� ����������
#��������� ������� ���������
include_directories(
	../build/includ
)
include_directories(
	../lib
)