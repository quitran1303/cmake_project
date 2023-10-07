cmake_minimum_required(VERSION 3.6..3.27)
project(Main VERSION 1.0)                       #${PROJECT_NAME} = "Main
configure_file(MainConfig.h.in MainConfig.h)    #${PROJECT_NAME}Config.h.in

set(TARGET_GROUP production CACHE STRING "Group to build")

add_subdirectory(modules)

if(TARGET_GROUP STREQUAL production)
    add_subdirectory(main)

elseif(TARGET_GROUP STREQUAL test)
    include(CTest)
    add_subdirectory(external)
    add_subdirectory(test)

else()
    message(FATAL_ERROR "Given TARGET_GROUP unknown")
endif()
