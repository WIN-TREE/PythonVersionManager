cmake_minimum_required(VERSION 3.0.0)
project(PythonVersionManager VERSION 0.0.1)

message(NOTICE "PVM Version ${PROJECT_VERSION}\nCMake Version ${CMAKE_VERSION}")
set(EXECUTABLE_OUTPUT_PATH ./install/bin)
set(CMAKE_INSTALL_PREFIX ./install)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQIURED 20)
include_directories(includes/)
link_libraries(libs/)

# ±‡“Î & ¡¥Ω”ø‚
add_executable(pvm src/pvm.cpp)
set(LIB_FTXUI "ftxui-component.lib" "ftxui-dom.lib" "ftxui-screen.lib")
target_link_libraries(pvm ${LIB_FTXUI})