# COMP = g++
# FLAGS = -std=c++11 -O3

# huffman: huffman.o main.o
# 	$(COMP) huffman.o main.o -o huffman

# huffman.o: huffman.cpp huffman.h node.h
# 	$(COMP) $(FLAGS) huffman.cpp huffman.h node.h

# main.o: main.cpp
# 	$(COMP) $(FLAGS) main.cpp

all:
	g++ -std=c++11 -O3 *.cpp *.h -o huffman

clean:
	rm *.h.gch *.o huffman