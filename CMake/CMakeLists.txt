cmake_minimum_required (VERSION 2.8)
project (Tutorial)

include(PrecompiledHeaderFiles.cmake)

set_source_files_properties(tags PROPERTIES GENERATED true)
add_custom_target(tags
  COMMAND gtags
  WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.55 COMPONENTS date_time REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_subdirectory(cpp)
