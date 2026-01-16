add_executable(main_with_static_lib)

target_sources(main_with_static_lib PRIVATE with_static_main.cpp)

add_library(static_lib STATIC)

target_sources(static_lib 
    PUBLIC FILE_SET HEADERS
    PUBLIC static_lib_source.cpp
)

target_link_libraries(main_with_static_lib PRIVATE static_lib)

install(TARGETS main_with_static_lib)





