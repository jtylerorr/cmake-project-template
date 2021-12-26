
add_library(template_lib
    lib/version.c
)

target_include_directories(template_lib
    PUBLIC inc/
)

add_executable(template
    src/main.c
)

target_link_libraries(template
    template_lib
)

if(BUILD_TESTS)
    add_executable(template_test
        tests/version_test.cpp
    )

    target_link_libraries(template_test
        template_lib
        Catch2::Catch2WithMain
    )

    add_test(NAME template_test
            COMMAND template_test
    )
endif()
