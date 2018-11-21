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
        return other.frequency < frequency;
    }

    bool operator==(const Node &rhs) {
        return rhs.frequency == frequency;
    }
};

#endif