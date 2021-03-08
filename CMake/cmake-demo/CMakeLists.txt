cmake_minimum_required(VERSION 3.14)

project(Qt_Cmake_Demo VERSION 1.0.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


#======================= INCLUSION OF Qt =======================#
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

#=================== INCLUSION OF Project Files ================#
add_executable(Qt_Cmake_Demo
    mainwindow.ui
    mainwindow.cpp
    main.cpp
    resources.qrc
)

#===================== LINKING LIBRARIES =======================#
target_link_libraries(MY_PROJECT Qt5::Widgets)