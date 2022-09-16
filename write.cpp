// Created by Chris on 9/2/2022.

#include "write.hpp"

bool Write::write(string filename, vector<string> firstVect, vector<string> secondVect) {
    VignereCypher vignere;
    ofstream DataStream;
    DataStream.open(filename);
    if ( DataStream.is_open() )
    {
        int i = 0;
        while ( i < ( firstVect.size() ) )
        {
                DataStream << firstVect.at(i) << " " << secondVect.at(i) << endl;
                i++;
        }
        return true;
    }
    else
    {
        return false;
    }
}