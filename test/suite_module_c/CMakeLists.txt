add_executable(suite_module_c_app
        test_module_c.c
)

target_link_libraries(suite_module_c_app
        module_c
        Unity
)

add_test(suite_test_module_c_test suite_module_c_app)
