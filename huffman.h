#ifndef HUFFMAN_H
#define HUFFMAN_H

#include "node.h"

// #include <boost/utility/binary.hpp>
#include <memory>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class Huffman {
    std::vector<Node> data;
    Node* rootHuffmanTree;

public:
    Huffman(const std::string& filePath);
    void readFileFrequency(const std::string& filePath);
    void generateHuffmanTree();
    inline void printData();
    void removeUnusedBytes();
};

#endif