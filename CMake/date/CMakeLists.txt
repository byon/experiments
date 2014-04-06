include_directories(${CMAKE_SOURCE_DIR})
add_definitions(-DDATE_LIBRARY_BUILD)
add_library(date SHARED Date.hpp Date.cpp)
