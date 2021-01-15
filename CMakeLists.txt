cmake_minimum_required(VERSION 2.8.3)
project(001HelloWorld)

include(tm4c123g.cmake)

add_executable(${CMAKE_PROJECT_NAME}.axf tm4c123gh6pm_startup_ccs_gcc.c main.c)
target_link_libraries(${CMAKE_PROJECT_NAME}.axf 
)