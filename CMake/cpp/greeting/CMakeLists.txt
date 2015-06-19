add_library(greeting Greeting.hpp Greeting.cpp)
add_precompiled_header(greeting ../Precompiled.hpp FORCEINCLUDE
                       ../Precompiled.cpp)
