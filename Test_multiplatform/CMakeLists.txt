cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

project(iftests)


if(CMAKE_SYSTEM_NAME MATCHES "Windows")

add_executable(iftests 
                    ./sources_windows/main.cpp
                    ./sources_windows/printtest.cpp)
target_include_directories(iftests PRIVATE ./headers_windows/)

elseif(CMAKE_SYSTEM_NAME MATCHES "Linux")

add_executable(iftests 
                    ./sources_linux/main.cpp
                    ./sources_linux/printtest.cpp)

target_include_directories(iftests PRIVATE ./headers_linux/)


endif()
