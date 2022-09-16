cmake_minimum_required(VERSION 3.23)
project(DSAProject1)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSAProject1 main.cpp read.cpp read.hpp password.cpp password.hpp vignerecypher.cpp vignerecypher.hpp write.cpp write.hpp hashtable.hpp passserver.hpp passserver.cpp catch.cpp catch.hpp AllTests.cpp)