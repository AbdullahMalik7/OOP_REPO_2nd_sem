cmake_minimum_required(VERSION 4.1)
project(OOP_REPO_2nd_sem)
set(CMAKE_CXX_STANDARD 14)

add_library(my_math src/my_math.cpp)
target_include_directories(my_math PUBLIC ${PROJECT_SOURCE_DIR}/include/my_math)
add_executable(OOP_REPO_2nd_sem app/main.cpp)

target_link_libraries(OOP_REPO_2nd_sem PRIVATE my_math)