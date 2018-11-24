#include "controller.h"

Controller::Controller(const std::string &filePath){
    data = new Data(filePath);
    huffman = new Huffman();
    huffman->generateHuffmanTree(data->fileBytes);
}