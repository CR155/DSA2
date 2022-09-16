// Created by Chris on 9/2/2022.

#ifndef PASSWORD_HPP
#define PASSWORD_HPP

#include "read.hpp"
#include "vignerecypher.hpp"
#include <ctime>
#include <cstdlib>

using namespace std;

class Password {
public:
    void createRandomPasswords();
    vector<string> passwordStorage;
    vector<string> encryptedPasswordStorage;
    int USER_COUNT = 88799;
};
#endif