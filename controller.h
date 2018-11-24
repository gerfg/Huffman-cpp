#ifndef CONTROLLER_h
#define CONTROLLER_h

#include "huffman.h"
#include "data.h"

#include <string>


class Controller{
public:
    Data *data;
    Huffman *huffman;

    Controller(const std::string &filePath);
};

#endif