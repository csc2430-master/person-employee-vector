cmake_minimum_required(VERSION 3.30)
project(person_employee_vector)

set(CMAKE_CXX_STANDARD 20)

add_executable(person_employee_vector main.cpp
        person.cpp
        person.h
        employee.cpp
        employee.h)
