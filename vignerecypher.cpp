// Created by Chris on 9/2/2022.

#include "vignerecypher.hpp"

string VignereCypher::encrypt(string originalPassword) {
    string encryptedPassword;

    for (int i = 0; i < originalPassword.size(); i++)
    {
        char nextLetter = (originalPassword[i] + KEY[i]) % alphabetLength;
        nextLetter += 'a';
        encryptedPassword.push_back(nextLetter);
    }
    return encryptedPassword;
}

string VignereCypher::decrypt(string password) {
    int i = 0;
    int j = 0;
    string decryptKey = "";
    while (i < alphabetLength)
    {
        int nextNumber = password[j] - KEY[j];
        if ( j > KEY.length() )
        {
            j = 0;
        }
        decryptKey[j] = (nextNumber);
        i++;
    }
    return decryptKey;
}