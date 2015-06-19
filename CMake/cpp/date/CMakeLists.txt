add_definitions(-DDATE_LIBRARY_BUILD)
add_library(date SHARED Date.hpp Date.cpp)
target_link_libraries(date ${Boost_LIBRARIES})
add_precompiled_header(date ../Precompiled.hpp FORCEINCLUDE ../Precompiled.cpp)