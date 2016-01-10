cmake_minimum_required (VERSION 2.8)
project (fortran-cmake)
enable_language(Fortran)

# make sure that the default is a RELEASE
if (NOT CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE RELEASE CACHE STRING
      "Choose the type of build, options are: None Debug Release."
      FORCE)
endif (NOT CMAKE_BUILD_TYPE)

set (CMAKE_Fortran_FLAGS_RELEASE "-funroll-all-loops -fno-f2c -O3")
set (CMAKE_Fortran_FLAGS_DEBUG   "-fno-f2c -O0 -g")

add_executable (hello-world
  hello.f90
  say_hello.f90)
