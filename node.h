#ifndef NODE_H
#define NODE_H

#include <string>

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
};

#endif