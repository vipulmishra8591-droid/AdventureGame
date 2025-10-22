cmake_minimum_required(VERSION 3.10)
project(AdventureGame)
set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS graphics window system network audio REQUIRED)

file(GLOB SRC_FILES
    src/*.cpp
)

add_executable(AdventureGame ${SRC_FILES})
target_link_libraries(AdventureGame sfml-graphics sfml-window sfml-system sfml-network sfml-audio)
