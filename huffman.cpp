#include "huffman.h"

Huffman::Huffman(const std::string& filePath){

    readFileFrequency(filePath);
    removeUnusedBytes();
    printData();

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

    
void Huffman::printData(){
    for(size_t i=0; i<data.size(); i++){
        std::cout << i << " (" << data[i].byte << ") " << (char) data[i].byte << ": " << data[i].frequency << "\n";
    }
}

void Huffman::removeUnusedBytes() {
    std::sort(data.begin(), data.end());
    data.erase( std::remove(data.begin(), data.end(), 0), data.end() );
}