project(libtree-unittest VERSION 0.1 LANGUAGES CXX)

set(SOURCES main2.cpp testcast1.cpp
        Factorial_test.cpp
        vector_test.cpp
        6_times_9.cpp
        string_matcher.cpp
        generators.cpp
)

add_executable(tests ${SOURCES})
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(tests PRIVATE library)


