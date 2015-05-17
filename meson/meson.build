project('tutorial', 'c', 'cpp', 'fortran')
executable('demo', 'main.c')
executable('demo-cpp', 'main.cpp')
fortran_standard_library = find_library('gfortran.dll', dirs : '/usr/lib/gcc/x86_64-w64-mingw32/4.9.2/')
executable('demo-fortran', 'main.f95',
           dependencies : fortran_standard_library)
