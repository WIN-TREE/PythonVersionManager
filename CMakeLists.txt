cmake_minimum_required(VERSION 3.0.0)
project(PythonVersionManager VERSION 0.0.1)

message(NOTICE "PVM Version ${PROJECT_VERSION}\nCMake Version ${CMAKE_VERSION}")
set(EXECUTABLE_OUTPUT_PATH ./install/bin)
set(CMAKE_INSTALL_PREFIX ./install)

# Брвы
add_executable(pvm src/pvm.cpp)