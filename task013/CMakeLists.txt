cmake_minimum_required(VERSION 3.0.0)
project(task13 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(task13 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
