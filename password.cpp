// Created by Chris on 9/2/2022.

#include "password.hpp"

void Password::createRandomPasswords() {
    VignereCypher vignereObj;
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    while ( (i < USER_COUNT) )
    {
        string encryptedPassword;
        string password;
        while ( password.length() < 9 )
        {
            char nextLetter = letters[ rand() % 26 ];
            password.push_back(nextLetter);
        }
        encryptedPassword = vignereObj.encrypt(password);
        passwordStorage.push_back(password);
        encryptedPasswordStorage.push_back(encryptedPassword);
        i++;
    }
}