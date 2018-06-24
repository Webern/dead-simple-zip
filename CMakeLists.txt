cmake_minimum_required(VERSION 2.8)
project(dszip)

option(DSZIP_BUILD_TESTS "builds the testing executable" ON)
set (CMAKE_CXX_STANDARD 11)

add_subdirectory(./code/dependencies/minizip)
include_directories(./code/dependencies/minizip)

add_library(${PROJECT_NAME} STATIC Archive.h Factory.h code/Factory.cpp code/ArchiveImpl.cpp code/ArchiveImpl.h)
target_link_libraries(${PROJECT_NAME} minizip)
include_directories(.)

if(DSZIP_BUILD_TESTS)
    add_executable(${PROJECT_NAME}Test test/main.cpp test/TestArchiveImpl.cpp)
    target_link_libraries(${PROJECT_NAME}Test dszip)
    target_link_libraries(${PROJECT_NAME}Test minizip)
    include_directories(./test)
    include_directories(.)
    include_directories(./code/dependencies/minizip)
endif()
