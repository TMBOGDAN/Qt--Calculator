cmake_minimum_required(VERSION 3.16)
project(Calculator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
    MANUAL_FINALIZATION
       main.cpp
       mainwindow.cpp
       mainwindow.h
       mainwindow.ui
       ExpressionEvaluator.cpp
       ExpressionEvaluator.h
       resource.qrc
)

# Creează targetul o singură dată, pentru Qt5 sau Qt6
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Calculator
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ignore.gitignore



    )
    target_link_libraries(Calculator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
    qt_finalize_executable(Calculator)
else()
    add_executable(Calculator
        ${PROJECT_SOURCES}
    )
    target_link_libraries(Calculator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
endif()

# Proprietăți Windows / macOS
set_target_properties(Calculator PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Instalare
include(GNUInstallDirs)
install(TARGETS Calculator
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
