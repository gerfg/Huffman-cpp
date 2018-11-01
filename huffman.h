#ifndef HUFFMAN_H
#define HUFFMAN_H

// #include "node.h"

// #include <boost/utility/binary.hpp>
#include <memory>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class Huffman {
    std::vector<Node> frequency;
    Node* rootHuffmanTree;

public:
    Huffman(const std::string& filePath);
    void readFileFrequency(const std::string& filePath);
    void generateHuffmanTree();
};

class Node {
public:
    Node* left;
    Node* right;
    unsigned int frequency;
    int byte;
    ~Node();
    bool operator<(const Node& other){
        return other.frequency < frequency;
    }
};

#endif