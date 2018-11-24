#ifndef HUFFMAN_H
#define HUFFMAN_H

#include "node.h"
#include "util.h"

// #include <boost/utility/binary.hpp>
#include <memory>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

class Huffman {
    Node *rootHuffmanTree;

public:
    Huffman();
    void generateHuffmanTree(std::vector<Node> &fileBytes);
    void generateBitsCodes();
    inline void printData();
    void showPreOrder();
};

#endif