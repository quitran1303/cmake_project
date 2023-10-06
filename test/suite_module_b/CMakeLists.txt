add_executable(suite_module_b_app
        test_module_b.c
)

target_link_libraries(suite_module_b_app
        module_b
        Unity
)

add_test(suite_test_module_b_test suite_module_b_app)
