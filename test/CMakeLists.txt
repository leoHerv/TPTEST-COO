cmake_minimum_required(VERSION 3.3)

include(CTest)
enable_testing()

#set(gtest_disable_pthreads on) #needed in MinGW
include(../dlGoogleTest/DownloadProject.cmake)
download_project(
        PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             main
        UPDATE_DISCONNECTED 1
)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL)

add_executable(runUnitTests
        gtest.cpp
)

target_link_libraries(runUnitTests gtest ${CMAKE_SOURCE_DIR}/lib/libmylib.a)