#ifndef HUFFMAN_H
#define HUFFMAN_H

#include "node.h"
#include "util.h"

// #include <boost/utility/binary.hpp>
#include <memory>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class Huffman {
    std::vector<Node> data;
    std::unique_ptr<Node> rootHuffmanTree;

public:
    Huffman(const std::string& filePath);
    void readFileFrequency(const std::string& filePath);
    void generateHuffmanTree();
    inline void printData();
    void removeUnusedBytes();

    // friend std::ostream &operator<<(std::ostream& os, const Node& obj) {
        
    //     for(int i = 0; i < data.size(); i++) {
    //         os << i << " (" << data[i].byte << ") " << (char) data[i].byte << ": " << data[i].frequency << "\n";
    //     }
    //     os << "\n";
    //     return os;
    // }
};

#endif