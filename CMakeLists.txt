# Tejas Acharya
# @achte_te
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)
project(input_params)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
add_subdirectory(src)

install(TARGETS task_2 DESTINATION bin)