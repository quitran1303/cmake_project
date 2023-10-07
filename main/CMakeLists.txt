add_executable(main
        main.c
)

target_link_libraries(main
    module_a
    module_b
    module_c
)
