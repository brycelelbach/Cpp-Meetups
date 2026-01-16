add_library(shared_lib SHARED)

target_sources(shared_lib 
    # make current source directory as an include directory 
    # this is a modern replacement for target_include_directories
    PUBLIC FILE_SET HEADERS

    # source files
    PUBLIC 
        shared_library_source.cpp 
        another_shared_library_source.cpp
    )

add_executable(main_with_shared_lib)

target_sources(main_with_shared_lib PRIVATE main_with_shared_lib.cpp)

target_link_libraries(main_with_shared_lib PRIVATE shared_lib)

install(TARGETS main_with_shared_lib shared_lib)
