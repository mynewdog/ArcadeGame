cmake_minimum_required(VERSION 3.13)
project(ArcadeGame)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

add_executable(ArcadeGame main.cpp Timer.cpp Timer.h Game.cpp Game.h TextureManager.cpp TextureManager.h GameObject.cpp GameObject.h)

target_link_libraries(ArcadeGame ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})