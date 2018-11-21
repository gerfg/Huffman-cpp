#include "huffman.h"

int main(int argc, char const *argv[])
{
    
    if (argc == 1) {
        std::cout << "Missing Instance!\n./huffman [instance path]\n"; 
    } else {
        Huffman huffman(argv[1]);
    }
    
    return 0;
}