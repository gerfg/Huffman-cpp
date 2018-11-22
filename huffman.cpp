#include "huffman.h"

Huffman::Huffman(const std::string& filePath){
    readFileFrequency(filePath);
    removeUnusedBytes();
    rootHuffmanTree = nullptr;
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

void Huffman::removeUnusedBytes() {
    std::sort(data.begin(), data.end());
    data.erase( std::remove(data.begin(), data.end(), 0), data.end() );
}

void Huffman::generateHuffmanTree(){
    std::vector< std::unique_ptr< Node > > dataBackup;

    for(size_t i = 0; i < data.size(); i++) {
        dataBackup.emplace_back( std::move(new Node(data[i])) );
    }
    

    dataBackup.emplace_back( std::move(new Node(*dataBackup[0], *dataBackup[1])) );
    dataBackup.erase( dataBackup.begin(), dataBackup.begin()+2 );
    std::sort(dataBackup.begin(), dataBackup.end());
    for(size_t i = 0; i < dataBackup.size(); i++) {
        std::cout << (char) dataBackup[i]->byte << " frequency: " << dataBackup[i]->frequency << "\n";
    }
}
    
void Huffman::printData(){
    std::cout << "Data: \n";
    for(size_t i=0; i<data.size(); i++){
        std::cout << i << " (" << data[i].byte << ") " << (char) data[i].byte << ": " << data[i].frequency << "\n";
    }
    std::cout << "\n";
}

