// #include "huffman.h"
#include "controller.h"

int main(int argc, char const *argv[])
{
    
    if (argc == 1) {
        std::cout << "Missing Instance!\n./huffman [instance path]\n"; 
    } else {
        Controller control(argv[1]);
    }
    
    return 0;
}