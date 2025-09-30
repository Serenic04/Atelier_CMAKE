add_subdirectory(lib)

add_executable(calculator main.c)
target_link_libraries(calculator PRIVATE lib)
target_include_directories(calculator PRIVATE ../include)
