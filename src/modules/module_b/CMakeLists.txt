cmake_minimum_required(VERSION 3.5)
project(module_b C CXX)
set(SOURCE_FILES
        module_b.h
        module_b.c
)

add_library(module_b SHARED STATIC ${SOURCE_FILES})

target_include_directories(module_b PUBLIC
        .
)

install(TARGETS module_b DESTINATION ${PROJECT_INSTALL_LIB_DIR})
install(FILES module_b.h DESTINATION ${PROJECT_INSTALL_INCLUDE_DIR})