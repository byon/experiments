cmake_minimum_required (VERSION 2.8)
project (Tutorial)

include(PrecompiledHeaderFiles.cmake)

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.55 COMPONENTS date_time REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_subdirectory(greeting)
add_subdirectory(date)
add_executable(Tutorial Tutorial.cpp Precompiled.cpp Precompiled.hpp)
add_precompiled_header(Tutorial Precompiled.hpp FORCEINCLUDE)
target_link_libraries(Tutorial greeting date ${Boost_LIBRARIES})
