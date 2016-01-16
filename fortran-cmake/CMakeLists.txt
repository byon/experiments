cmake_minimum_required (VERSION 2.8)
project (fortran-cmake)
enable_language(Fortran)

# make sure that the default is a RELEASE
if (NOT CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE RELEASE CACHE STRING
      "Choose the type of build, options are: None Debug Release."
      FORCE)
endif (NOT CMAKE_BUILD_TYPE)

set (CMAKE_Fortran_FLAGS "-std=f2008 -fno-f2c")
set (CMAKE_Fortran_FLAGS_RELEASE "-funroll-all-loops -O3")
set (CMAKE_Fortran_FLAGS_DEBUG "-O0 -g")

add_library(hello STATIC
  intermediate1.f90
  intermediate2.f90
  intermediate3.f90
  say_hello.f90)
add_library(hello-dynamic SHARED
  say_dynamic_hello.f90)
add_executable (hello-world
  hello.f90)
target_link_libraries(hello-world hello hello-dynamic)
