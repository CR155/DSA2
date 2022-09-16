 CXX = g++
 CXXFLAGS = -g -std=c++17 -Wall -Werror=return-type -Werror=uninitialized
 OBJECTS = write.o vignerecypher.o read.o password.o passserver.o catch.o
 
 clean:
  rm -f *.o
