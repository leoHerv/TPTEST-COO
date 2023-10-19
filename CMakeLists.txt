cmake_minimum_required(VERSION 3.27)

project(TPTEST)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(src2)

target_include_directories(runUnitTests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(mylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)