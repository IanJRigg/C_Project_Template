cmake_minimum_required(VERSION 3.12)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

# Application Build Configuration
###############################################################################
set(PROJECT_NAME application)
project(${PROJECT_NAME} VERSION 1.0 LANGUAGES C)

set(SOURCE_FILES
    main.c
)

set(HEADER_FILES

)

add_executable(
    ${PROJECT_NAME}
    ${SOURCE_FILES}
    ${HEADER_FILES}
)

set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES
        # C version information
        C_STANDARD 11

        # Public Header file location
        PUBLIC_HEADER "${HEADER_FILES}"
)

target_compile_options(
    ${PROJECT_NAME}
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
)

target_link_libraries(
    ${PROJECT_NAME}
    PUBLIC
)