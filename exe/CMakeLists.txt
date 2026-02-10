cmake_minimum_required( VERSION 3.27)
project(
    PW_7
    VERSION 0.0.1
    DESCRIPTION "Practical Work 7"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

set(MATH_USE_DOUBLE_PRECISION "Use double precision" ON)


set(sources
    main.cpp
)

add_executable(pw_7 ${sources})




add_library(matrixlib SHARED IMPORTED)

set_target_properties(matrixlib PROPERTIES
    IMPORTED_LOCATION
        ${CMAKE_SOURCE_DIR}/libs/matrixlib/shared-matrixlib.so
)

target_link_libraries(pw_7 PRIVATE matrixlib)