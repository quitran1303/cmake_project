add_executable(${PROJECT_NAME}
        main.c
)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")

target_link_libraries(${PROJECT_NAME}
    module_a
    module_b
    module_c
)
