project('tutorial', 'c', 'cpp', 'fortran')
executable('demo', 'main.c')
executable('demo-cpp', 'main.cpp')

fortran_root = get_option('fortran_root')
fortran_link_args_template = '-lgfortran'
fortran_link_args = fortran_link_args_template.format(fortran_root)

executable('demo-fortran', 'main.f95', link_args : fortran_link_args)
