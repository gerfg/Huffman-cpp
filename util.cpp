#include "util.h"


// void printVector(const std::vector<Node> &vec, const std::string &str){
//     std::cout << str << "\n";
//     for(size_t i=0; i<vec.size(); i++){
//         std::cout << i << " (" << vec[i].byte << ") " << (char) vec[i].byte << ": " << vec[i].frequency << "\n";
//     }
//     std::cout << "\n";
// }

// void showPreOrder(std::unique_ptr<Node> &nd){
//     if (nd == nullptr)
//         return;
    
//     std::cout << "frequency: " << nd->frequency << " byte: " << nd->byte << "\n";
    
//     showPreOrder(nd->left);
//     showPreOrder(nd->right);
// }

bool compareNodePtr(Node* nd1, Node* nd2) {
    if (nd1->frequency == nd2->frequency) {
        return nd1->byte < nd2->byte;
    }else {
        return nd1->frequency < nd2->frequency;
    }
}

bool compareNode(Node nd1, Node nd2) {
    if (nd1.frequency == nd2.frequency) {
        return nd1.byte < nd2.byte;
    }else {
        return nd1.frequency < nd2.frequency;
    }
}