cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD_REQUIRED ON) ## make c++20 a hard requirement
set(CMAKE_CXX_STANDARD 20) ## default C++ standard for targets

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading Hello world App"
        LANGUAGES CXX)

add_library(operations STATIC sources/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)
#target_compile_features(operations PUBLIC cxx_std_20) these dont need if you set cmake_cxx_standard

add_library(logger STATIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/sources/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/headers)
#target_compile_features(logger PUBLIC cxx_std_20) 



add_executable(HelloAppBinary 
        main.cpp
        sources/dog.cpp)

#target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ./headers)
target_link_libraries(HelloAppBinary PUBLIC operations logger) ## linking the libraries that you have crated, but i think that you need to do this fo external libraries too.

