cmake_minimum_required(VERSION 3.6..3.27)
project(Cmake_Project VERSION 1.3)

set(TARGET_GROUP production CACHE STRING "Group to build")
set(PROJECT_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(PROJECT_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

if(TARGET_GROUP STREQUAL production)
    add_subdirectory(src)

elseif(TARGET_GROUP STREQUAL test)
    include(CTest)
    add_subdirectory(src/modules)
    add_subdirectory(external)
    add_subdirectory(test)

else()
    message(FATAL_ERROR "Given TARGET_GROUP unknown")
endif()
