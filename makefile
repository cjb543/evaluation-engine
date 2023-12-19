#	C++ Evaluation Engine in Bitboard Style
#	Made by Christopher Benson

#Compiler Variables
CXX = g++
CXXFLAGS = -Wall -Werror -ansi -pedantic -std=c++14

#Rule to link object code files to create executable files
engine: engine.o evaluation.o bitboard.o
	$(CXX) $(CXXFLAGS) -o engine $^

#Rule to compile source code file to object code
engine.o: engine.cpp
bitboard.o: bitboard.cpp bitboard.h 
evaluation.o: evaluation.cpp

#Pseudotarget to remove object code and executable files
clean:
	rm -f *.o
