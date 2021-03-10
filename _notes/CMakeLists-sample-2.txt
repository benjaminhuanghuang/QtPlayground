cmake_minimum_required(VERSION 3.14)

project(qml-demo.exe LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Core Quick REQUIRED)

add_executable(${CMAKE_PROJECT_NAME}
  main.cpp
  qml.qrc
  icon.qrc
)

target_link_libraries(${CMAKE_PROJECT_NAME}
  PRIVATE Qt5::Core Qt5::Quick)
