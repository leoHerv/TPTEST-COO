cmake_minimum_required(VERSION 3.27)

project(TPTESTSCR)

add_subdirectory(src)
add_subdirectory(test)

target_include_directories(RunTests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)