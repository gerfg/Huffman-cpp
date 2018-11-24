#ifndef UTIL_H
#define UTIL_H

#include "node.h"

#include <vector>
#include <iostream>
#include <string>

// template<typename T>
// void printVector(const std::vector<T> &vec, const std::string &str){
//     std::cout << str << "\n";
//     for(size_t i=0; i<vec.size(); i++){
//         std::cout << vec[i] << "\n";
//     }
//     std::cout << "\n";
// }

// template<typename T>
// void showPreOrder(T &nd){
//     if (nd == nullptr)
//         return;
    
//     std::cout << "frequency: " << nd->frequency << " byte: " << nd->byte << "\n";
    
//     showPreOrder(nd->left);
//     showPreOrder(nd->right);
// }

bool compareNodePtr(Node* nd1, Node* nd2);
bool compareNode(Node nd1, Node nd2);

#endif