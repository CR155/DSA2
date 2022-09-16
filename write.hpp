// Created by Chris on 9/2/2022.

#ifndef WRITE_HPP
#define WRITE_HPP

#include "password.hpp"
#include <algorithm>
#include <iterator>

class Write {
public:
    vector<pair<string, string>> encryptedData;
    bool write(string, vector<string>, vector<string>);
};
#endif