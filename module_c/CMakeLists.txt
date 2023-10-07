add_library(module_c STATIC
        module_c.c
)

target_include_directories(module_c PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

