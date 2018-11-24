#ifndef DATA_H
#define DATA_H

#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

#include "node.h"
#include "util.h"

class Data{
public:
    std::string FilePath;
    std::vector<Node> fileBytes;

    void readFileFrequency(const std::string& filePath);
    void removeUnusedBytes();

    Data(const std::string &FilePath);
};

#endif