cmake_minimum_required(VERSION 3.17)
project(sfml_stuff)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES src/main.cpp src/handle_key_events.cpp include/handle_key_events.h src/utils.cpp include/utils.h)
add_executable(sfml_stuff ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(sfml_stuff sfml-system sfml-window sfml-graphics sfml-audio sfml-network)