cmake_minimum_required(VERSION 3.14)

project(qtServer.exe VERSION 1.0.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#======================= INCLUSION OF Qt =======================#
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
# 设置自动生成ui.h文件, AUTOUIC打开可以省去QT5_WRAP_UI命令
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets Network REQUIRED)

#=================== INCLUSION OF Project Files ================#
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

file(GLOB_RECURSE SOURCES
    "${SOURCE_DIR}/*.ui"
    "${SOURCE_DIR}/*.qrc"
    "${SOURCE_DIR}/*.h"
    "${SOURCE_DIR}/*.cpp"
)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

#===================== LINKING LIBRARIES =======================#
target_link_libraries(${CMAKE_PROJECT_NAME} Qt5::Widgets Qt5::Network)