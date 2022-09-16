// Created by Chris on 9/2/2022.

#include "read.hpp"

void Read::fileReader(string fileName) {
    ifstream file(fileName);
    string line;

    if ( file.is_open() )
    {
        int i = 0;
        while ( getline(file, line) )
        {
            string delimiter = " ";
            string name = line.substr(0,line.find_first_of(delimiter, 0) );
            Storage.push_back(name);
            i++;
        }
    }
}