#ifndef NODE_H
#define NODE_H

#include <string>
#include <memory>
#include <iostream>

class Node {
public:
    Node* left;
    Node* right;
    int frequency;
    int byte;
    std::string code;

    bool operator<(const Node& other) {
        if (other.frequency != frequency){
            return other.frequency < frequency;
        } else {
            return byte < other.byte;
        }
    }

    bool operator==(const int &rhs) {
        return rhs == frequency;
    }

    void operator= (const Node &other) {
        left = other.left;
        right = other.right;
        frequency = other.frequency;
        byte = other.byte;
        code = other.code;
    }

    Node () {
        left = nullptr;
        right = nullptr;
        frequency = 0;
        byte = -1;
        code = "";
    }

    Node(Node &nd1, Node &nd2){
        left = &nd1;
        right = &nd2;
        frequency = nd1.frequency + nd2.frequency;
        byte = -1;
    }
    
};

#endif