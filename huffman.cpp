#include "huffman.h"

Huffman::Huffman(const std::string& filePath){

    readFileFrequency(filePath);

    for(size_t i=0; i<255; i++){
        if (data[i].frequency != 0)
            std::cout << "(" << i << ") " << (char) i << ": " << data[i].frequency << "\n";
    }

    data.erase( std::remove(data.begin(), data.end(), 0), data.end() );
    
    // std::cout << "equal?? " << (data[11] == data[10]) << "\n";
    
    // for(auto it = data.begin(); it != data.end(); it++) {
        // std::cout << "base: " << it.base() << " frequency: " << it->frequency << "\n";
    //     if (it->frequency == 0) {
    //         data.erase(it);
    //     }
        
    // }
    
    
    for(size_t i=0; i<255; i++){
        // if (data[i].frequency != 0)
            std::cout << "(" << i << ") " << (char) i << ": " << data[i].frequency << "\n";
    }
}

void Huffman::readFileFrequency(const std::string& filePath){
    data.reserve(255);
    data.resize(255);

    std::fstream file(filePath);

    unsigned char byte;

    while(true){
        file >> byte;
        if( file.eof() ) break;
        std::cout << byte;
        data[byte].frequency++;
        data[byte].byte = byte;
    }
    std::cout << "\n";

    file.close();
}

void Huffman::generateHuffmanTree(){
    std::unique_ptr< std::vector<Node> > freq;
    *freq = this->data;
}

    
void Huffman::print(){
}