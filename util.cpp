#include "util.h"


void printVector(const std::vector<Node> &vec, const std::string &str){
    std::cout << str << "\n";
    for(size_t i=0; i<vec.size(); i++){
        std::cout << i << " (" << vec[i].byte << ") " << (char) vec[i].byte << ": " << vec[i].frequency << "\n";
    }
    std::cout << "\n";
}