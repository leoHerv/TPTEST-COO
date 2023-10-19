# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-src"
  "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-build"
  "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-download/googletest-download-prefix"
  "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-download/googletest-download-prefix/tmp"
  "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp"
  "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-download/googletest-download-prefix/src"
  "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/mnt/c/Users/leooh/Documents/Ecole/Université/M1/COO/CLION/TPTEST/cmake-build-debug/googletest-download/googletest-download-prefix/src/googletest-download-stamp${cfgdir}") # cfgdir has leading slash
endif()
