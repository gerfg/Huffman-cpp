#include "huffman.h"

Huffman::Huffman(const std::string& filePath){

    readFileFrequency(filePath);
    
    print(true);

    removeUnusedBytes();

    print(true);
}

void Huffman::readFileFrequency(const std::string& filePath){
    data.reserve(255);
    data.resize(255);

    std::fstream file(filePath);

    unsigned char byte;

    while(true){
        file >> byte;
        if( file.eof() ) break;
        data[byte].frequency++;
        data[byte].byte = byte;
    }

    file.close();
}

void Huffman::generateHuffmanTree(){
    std::unique_ptr< std::vector<Node> > freq;
    *freq = this->data;
}

    
void Huffman::print(bool all){
    if (all) {
        for(size_t i=0; i<255; i++)
            std::cout << "(" << i << ") " << (char) i << ": " << data[i].frequency << "\n";
    } else {
        for(size_t i=0; i<255; i++){
            if (data[i].frequency != 0)
                std::cout << "(" << i << ") " << (char) i << ": " << data[i].frequency << "\n";
        }
    }
}

void Huffman::removeUnusedBytes() {
    int startPositionToErase;
    std::sort(data.begin(), data.end());
    
    for(size_t i = 0; i < 255; i++) {
        if (data[i].frequency == 0){
            startPositionToErase = i;
            break;
        }
    }

    data.erase(data.begin()+startPositionToErase);
}