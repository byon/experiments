include_directories(..)
add_definitions(-DDATE_LIBRARY_BUILD)
add_library(date SHARED Date.hpp Date.cpp)
