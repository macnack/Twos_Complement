project(two_complement)
find_package(Catch2 3 REQUIRED)

add_executable(two_complement main.cpp)
target_link_libraries(two_complement PRIVATE Catch2::Catch2WithMain)