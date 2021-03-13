cmake_minimum_required(VERSION 3.14)

project(qglwidget.exe VERSION 1.0.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#======================= INCLUSION OF Qt =======================#
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets OpenGL REQUIRED)

#=================== INCLUSION OF Project Files ================#
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${CMAKE_PROJECT_NAME}
  main.cpp
  window.h
  window.cpp
  window.ui
  myglwidget.cpp
  myglwidget.h
)


#===================== LINKING LIBRARIES =======================#
target_link_libraries(${CMAKE_PROJECT_NAME} Qt5::Widgets Qt5::OpenGL)
