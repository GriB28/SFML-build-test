cmake_minimum_required(VERSION 3.28)
project(SFML_build_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/.build")

find_package(
        SFML 3.0
        REQUIRED
        COMPONENTS audio graphics window network system
)

add_executable(
        ${PROJECT_NAME}
        main.cpp
)
