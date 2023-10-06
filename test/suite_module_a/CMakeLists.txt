add_executable(suite_module_a_app
        test_module_a.c
)

target_link_libraries(suite_module_a_app
    module_a
    Unity
)

add_test(suite_test_module_a_test suite_module_a_app)