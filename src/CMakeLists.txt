cmake_minimum_required(VERSION 3.5)
project(Main VERSION 1.0)
configure_file(MainConfig.h.in MainConfig.h)    #${PROJECT_NAME}Config.h.in

add_subdirectory(modules)
add_executable(${PROJECT_NAME}
        main.c
)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")

target_link_libraries(${PROJECT_NAME}
    module_a
    module_b
    module_c
)

install(TARGETS ${PROJECT_NAME} DESTINATION ${PROJECT_INSTALL_BIN_DIR})
#install(TARGETS ${PROJECT_NAME} DESTINATION "/Users/quitran/Learning/CProgramming/cmake_project/bin/")
