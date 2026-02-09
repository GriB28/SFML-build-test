cmake_minimum_required(VERSION 3.28)
project(SFML_build_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/.build")

find_package(
        SFML 3 REQUIRED
        COMPONENTS System Window Graphics Audio Network
        PATHS "${CMAKE_SOURCE_DIR}/SFML-3.0.2/lib/cmake/SFML"
)

add_executable(
        ${PROJECT_NAME}
        main.cpp
)

target_link_libraries(
        ${PROJECT_NAME} PRIVATE
        SFML::System
        SFML::Window
        SFML::Graphics
        SFML::Audio
        SFML::Network
)
