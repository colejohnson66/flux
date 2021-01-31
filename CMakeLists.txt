cmake_minimum_required(VERSION 3.14)

project(flux LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/InitGitSubmodules.cmake)

find_package(QT NAMES Qt6 COMPONENTS Widgets REQUIRED)
find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_subdirectory(
    3rd-party/yaml-cpp
)

qt_add_executable(flux
    src/MainWindow.cpp include/MainWindow.h
    src/PoolEditor.cpp include/PoolEditor.h src/PoolEditor.ui
    src/main.cpp
    include/flux.h
)

target_include_directories(flux
    PRIVATE include
)

target_link_libraries(flux PUBLIC
    Qt6::Widgets)
