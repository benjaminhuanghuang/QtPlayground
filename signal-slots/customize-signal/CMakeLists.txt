cmake_minimum_required(VERSION 3.14)

project(TeacherStudent.exe VERSION 1.0.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#======================= INCLUSION OF Qt =======================#
find_package(Qt5 COMPONENTS Widgets Core REQUIRED)

#=================== INCLUSION OF Project Files ================#
add_executable(${CMAKE_PROJECT_NAME} 
    student.cpp
    teacher.cpp
    widget.cpp
    main.cpp
)

#===================== LINKING LIBRARIES =======================#
target_link_libraries(${CMAKE_PROJECT_NAME} Qt5::Widgets Qt5::Core)