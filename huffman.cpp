#include "huffman.h"

Huffman::Huffman(){
    rootHuffmanTree = nullptr;
}

void Huffman::generateHuffmanTree(std::vector<Node> &fileBytes){
    std::vector<Node*> data;
    data.reserve(fileBytes.size());
    data.resize(fileBytes.size());
    
    for(size_t i = 0; i < fileBytes.size(); i++) {
        data[i] = new Node(fileBytes[i]);
    }

    // std::cout << "Antes:\n";
    // for(size_t i=0; i<data.size(); i++){
    //     std::cout << i << " (" << data[i]->byte << ") " << (char) data[i]->byte << ": " << data[i]->frequency << "\n";
    // }
    // std::cout << "\n";

    while(data.size() > 1){
        data[1] = new Node(data[0], data[1]);
        data.erase(data.begin(), data.begin()+1);
        std::sort(data.begin(), data.end(), compareNodePtr);

        // for(size_t i=0; i<data.size(); i++){
        //     std::cout << i << " (" << data[i]->byte << ") " << (char) data[i]->byte << ": " << data[i]->frequency << "\n";
        // }
        // std::cout << "\n";
    }
    rootHuffmanTree = data[0];
    showPreOrder();
}

void Huffman::showPreOrder(){
    if(rootHuffmanTree == nullptr)
        return;
    
    std::cout << "Root -> frequency: " << rootHuffmanTree->frequency << " byte: " << rootHuffmanTree->byte << "\n";
    rootHuffmanTree->showPreOrder(rootHuffmanTree->left);
    rootHuffmanTree->showPreOrder(rootHuffmanTree->right);
}
