#include "huffman.h"

Huffman::Huffman(const std::string& filePath){

    readFileFrequency(filePath);

    for(size_t i=0; i<255; i++){
        if (frequency[i].frequency > 0)
            std::cout << "(" << i << ") " << (char) i << ": " << frequency[i].frequency << "\n";
    }
    
}

void Huffman::readFileFrequency(const std::string& filePath){
    frequency.reserve(255);
    frequency.resize(255);

    std::fstream file(filePath);

    unsigned char byte;

    while(true){
        file >> byte;
        if( file.eof() ) break;
        std::cout << byte;
        frequency[byte].frequency++;
        frequency[byte].byte = byte;
    }
    std::cout << "\n";

    file.close();
}

void Huffman::generateHuffmanTree(){

}