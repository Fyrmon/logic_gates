find_package(GTest REQUIRED)
enable_testing()

add_executable(lg_tests lg_tests.cpp)

target_link_libraries(lg_tests PRIVATE
    lg_lib
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(lg_tests)
