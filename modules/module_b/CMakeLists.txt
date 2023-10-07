add_library(module_b STATIC
        module_b.c
)

target_include_directories(module_b PUBLIC
        .
)

