project('tutorial', 'c', 'cpp', 'fortran')
executable('demo', 'main.c')
executable('demo-cpp', 'main.cpp')
fortran_root = get_option('fortran_root')
fortran_standard_library = find_library('libgfortran-3', dirs: fortran_root)
executable('demo-fortran', 'main.f95',
           dependencies : fortran_standard_library)
