cmake_minimum_required(VERSION 3.5) #����������� ������ 
project(config VERSION 2.3.5)#�������� � ������ ������� ��� ��������� ����� 
#������������
configure_file(version.h.in 
          ${CMAKE_CURRENT_BINARY_DIR}/version.h)
