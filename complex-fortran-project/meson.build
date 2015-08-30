project('complex-fortran-project', 'fortran')

ask_name = static_library('ask_name', 'ask_name.f95')
static_hello = static_library('static_hello', 'static_hello.f95',
                              link_with : ask_name)
dynamic_hello = shared_library('dynamic_hello', 'dynamic_hello.f95',
                                link_with : ask_name)
executable('test_exe', 'main.f95', 'hello.f95',
           link_with : [static_hello, dynamic_hello])
