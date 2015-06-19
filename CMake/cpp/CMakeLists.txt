include_directories(${CMAKE_SOURCE_DIR}/cpp)

add_subdirectory(date)
add_subdirectory(greeting)
add_executable(Tutorial Tutorial.cpp)
add_precompiled_header(Tutorial Precompiled.hpp FORCEINCLUDE Precompiled.cpp)
target_link_libraries(Tutorial greeting date)
add_dependencies(Tutorial tags)
