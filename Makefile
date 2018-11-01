COMP = g++
FLAGS = -std=c++11 -O3

huffman: huffman.o main.o
	$(COMP) huffman.o main.o -o huffman

huffman.o: huffman.cpp huffman.h
	$(COMP) $(FLAGS) huffman.cpp huffman.h

main.o: main.cpp
	$(COMP) $(FLAGS) main.cpp

clean:
	rm *.h.gch *.o huffman