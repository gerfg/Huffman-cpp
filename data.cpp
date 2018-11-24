#include "data.h"

void Data::readFileFrequency(const std::string& filePath){
    fileBytes.reserve(255);
    fileBytes.resize(255);
    std::fstream file(filePath);

    unsigned char byte;

    while(true){
        file >> byte;
        if( file.eof() ) break;
        fileBytes[byte].frequency++;
        fileBytes[byte].byte = byte;
        fileBytes[byte].left = nullptr;
        fileBytes[byte].right = nullptr;
    }

    file.close();
}

void Data::removeUnusedBytes(){
    std::sort(fileBytes.begin(), fileBytes.end(), compareNode);
    for(auto iter = fileBytes.begin(); iter != fileBytes.end(); iter++) {
        if( (*iter).frequency == 0 ) {
            fileBytes.erase(iter);
            iter--;
        }
    }
    std::cout << "size: " << fileBytes.size() << "\n";
}

Data::Data(const std::string &FilePath){
    readFileFrequency(FilePath);
    removeUnusedBytes();
}