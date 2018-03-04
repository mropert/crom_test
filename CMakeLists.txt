cmake_minimum_required(VERSION 3.2)
project(crom_test)

add_library(crom_test src/crom_test.cpp include/crom_test/crom_test.hpp)
target_include_directories(crom_test PUBLIC include)
target_include_directories(crom_test PRIVATE src)

enable_testing()
add_executable(crom_test_test test/crom_test_test.cpp)
target_link_libraries(crom_test_test PRIVATE crom_test)
add_test(NAME crom_test_test COMMAND crom_test_test)
