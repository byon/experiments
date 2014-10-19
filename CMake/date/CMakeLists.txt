include_directories(${CMAKE_SOURCE_DIR})
add_definitions(-DDATE_LIBRARY_BUILD)
add_library(date SHARED Date.hpp Date.cpp)
add_precompiled_header(date ../Precompiled.hpp FORCEINCLUDE ../Precompiled.cpp)