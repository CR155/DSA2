// Created by Chris on 9/2/2022.

#ifndef VIGNERECYPHER_HPP
#define VIGNERECYPHER_HPP

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class VignereCypher {
public:
    string encrypt(string);
    string decrypt(string);
    string KEY = "dsaproject";
    int alphabetLength = 26;
    vector<char> alphabet =  {
                               'a', 'b', 'c',
                               'd', 'e', 'f',
                               'g', 'h', 'i',
                               'j', 'k', 'l',
                               'm', 'n', 'o',
                               'p', 'q', 'r',
                               's', 't', 'u',
                               'v', 'w', 'x',
                               'y' , 'z'
                             };
};
#endif