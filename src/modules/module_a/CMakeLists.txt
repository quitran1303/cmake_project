cmake_minimum_required(VERSION 3.5)
project(module_a C CXX)
set(SOURCE_FILES
        module_a.h
        module_a.c
)

add_library(module_a SHARED STATIC ${SOURCE_FILES})

target_include_directories(module_a PUBLIC
        .
)

install(TARGETS module_a DESTINATION ${PROJECT_INSTALL_LIB_DIR})
install(FILES module_a.h DESTINATION ${PROJECT_INSTALL_INCLUDE_DIR})