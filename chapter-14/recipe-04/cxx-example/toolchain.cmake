# the name of the target operating system
set(CMAKE_SYSTEM_NAME Windows)

# which compilers to use
set(CMAKE_C_COMPILER gcc-mingw-w64-i686)
set(CMAKE_CXX_COMPILER g++-mingw-w64-i686)
set(CMAKE_Fortran_COMPILER gfortran-mingw-w64-i686)

# here is the target environment located
#set(CMAKE_FIND_ROOT_PATH /path/to/target/environment)

# adjust the default behaviour of the find commands:
# search headers and libraries in the target environment
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
# search programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
