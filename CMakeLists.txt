cmake_minimum_required(VERSION 3.16)

project(Plugin_Task1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Plugin_Task1 main.cpp
    Student.h Student.cpp
    StudentManager.h StudentManager.cpp
    File_operations.h File_operations.cpp
    CSV.h CSV.cpp
    XML.h XML.cpp
    JSON.h JSON.cpp
    UI.h UI.cpp)

include(GNUInstallDirs)
install(TARGETS Plugin_Task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
