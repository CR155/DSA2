// Created by Chris on 9/2/2022.

#ifndef READ_HPP
#define READ_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Read {
public:
    void fileReader(string);
    inline static const string namestxt = "C:/Users/Chris/Downloads/names.txt";
    vector<string> Storage;
};
#endif