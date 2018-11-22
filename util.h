#ifndef UTIL_H
#define UTIL_H

#include "node.h"

#include <vector>
#include <iostream>
#include <string>

template<typename T>
void printVector(const std::vector<T> &vec, const std::string &str){
    std::cout << str << "\n";
    for(size_t i=0; i<vec.size(); i++){
        std::cout << vec[i] << "\n";
    }
    std::cout << "\n";
}

#endif