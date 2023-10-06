add_library(module_b STATIC
        module_b.c
)

target_include_directories(module_b PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

