cmake_minimum_required(VERSION 3.5)
project(module_c C CXX)
set(SOURCE_FILES
        module_c.h
        module_c.c
)

add_library(module_c SHARED STATIC ${SOURCE_FILES})

target_include_directories(module_c PUBLIC
        .
)

install(TARGETS module_c DESTINATION ${PROJECT_INSTALL_LIB_DIR})
install(FILES module_c.h DESTINATION ${PROJECT_INSTALL_INCLUDE_DIR})