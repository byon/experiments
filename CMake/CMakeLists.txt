cmake_minimum_required (VERSION 2.8)
project (Tutorial)

set(BOOST_ROOT C:/Utilities/boost/boost_1_55_0)
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.55 COMPONENTS date_time REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_executable(Tutorial Greeting.cpp Greeting.hpp Tutorial.cpp)
