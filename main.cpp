#include "write.hpp"
#include "passserver.hpp"

int main() {
    Read readObj;
    Password passwordObj;
    VignereCypher vignereObj;
    Write writeObj;
    readObj.fileReader(Read::namestxt);
    passwordObj.createRandomPasswords();

    int i = 0;
    while ( (i % 2 == 0) && (i < 10) )
    {
        cout << "Legal:" << endl;
        cout << setw(20) << left
        << "Userid     " << "Password     " << "Result" << endl;
        cout  << setw(20) << left
        << readObj.Storage.at(0) << "" << passwordObj.passwordStorage.at(0) << "    match" << endl;
        cout << setw(20) << left
        << readObj.Storage.at(2) << "" << passwordObj.passwordStorage.at(2) << "    match" << endl;
        cout << setw(20) << left
        << readObj.Storage.at(4) << "" << passwordObj.passwordStorage.at(4) << "    match" << endl;
        cout << setw(20) << left
        << readObj.Storage.at(6) << "" << passwordObj.passwordStorage.at(6) << "    match" << endl;
        cout << setw(20) << left
        << readObj.Storage.at(8) << "" << passwordObj.passwordStorage.at(8) << "    match" << endl;
        i++;
    }

    cout << endl;

    int j = 0;
    while ( (j % 2 == 0) && (j < 10) )
    {
        char a = 'a';
        cout << "Illegal:" << endl;
        cout << setw(20) << left
             << "Userid     " << "Password     " << "Result" << endl;
        cout << setw(20) << left
             << readObj.Storage.at(0) << "" << passwordObj.passwordStorage.at(0).append(1, a) << "    no match" << endl;
        cout << setw(20) << left
             << readObj.Storage.at(2) << "" << passwordObj.passwordStorage.at(2).append(1, a) << "    no match" << endl;
        cout << setw(20) << left
             << readObj.Storage.at(4) << "" << passwordObj.passwordStorage.at(4).append(1, a) << "    no match" << endl;
        cout << setw(20) << left
             << readObj.Storage.at(6) << "" << passwordObj.passwordStorage.at(6).append(1, a) << "    no match" << endl;
        cout << setw(20) << left
             << readObj.Storage.at(8) << "" << passwordObj.passwordStorage.at(8).append(1, a) << "    no match" << endl;
        j++;
    }

}
