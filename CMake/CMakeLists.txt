cmake_minimum_required (VERSION 2.8)
project (Tutorial)

set(BOOST_ROOT C:/Utilities/boost/boost_1_55_0)
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.55 COMPONENTS test_exec_monitor REQUIRED)

add_executable(Tutorial Greeting.cpp Greeting.hpp Tutorial.cpp)
