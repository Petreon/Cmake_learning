cmake_minimum_required(VERSION 3.20)

project(rooster)

add_library(libmath STATIC sources/math/supermath.cpp)
target_include_directories(libmath PUBLIC sources/math/headers)

add_library(libstats STATIC sources/stats/stats.cpp)
target_include_directories(libstats PUBLIC sources/stats/headers)
target_link_libraries(libstats PUBLIC libmath)

add_executable(rooster sources/main.cpp)
target_link_libraries(rooster PUBLIC libstats)