// Created by Chris on 9/2/2022.
/*
#include "catch.hpp"
#include "write.hpp"
#include "read.hpp"
#include "passserver.hpp"

#include <cctype>

TEST_CASE("read names.txt")
{
    Read readObj;
    Password passwordObj;
    VignereCypher vignereObj;
    Write writeObj;
    readObj.fileReader(Read::namestxt);
    passwordObj.createRandomPasswords();

    using Catch::Matchers::Equals;

    string SMITH = "SMITH";
    string WILLIAMS = "WILLIAMS";
    string BROWN = "BROWN";
    string MILLER = "MILLER";
    string MOORE = "MOORE";
    int i = 0;
    while ( (i % 2 == 0) && (i < 10) )
    {
    REQUIRE_THAT(SMITH, Equals(readObj.Storage.at(0)));
    REQUIRE_THAT(WILLIAMS, Equals(readObj.Storage.at(2)));
    REQUIRE_THAT(BROWN, Equals(readObj.Storage.at(4)));
    REQUIRE_THAT(MILLER, Equals(readObj.Storage.at(6)));
    REQUIRE_THAT(MOORE, Equals(readObj.Storage.at(8)));
    i++;
}
}

TEST_CASE("create passwords")
{
    Read readObj;
    Password passwordObj;
    VignereCypher vignereObj;
    Write writeObj;
    readObj.fileReader(Read::namestxt);
    passwordObj.createRandomPasswords();

    bool isPasswordValid = true;
    for (int i = 0; i < 5; i++)
    {
        string currentPassword = passwordObj.passwordStorage.at(i);
        char currentLetter = currentPassword[i];

        if ( islower(currentLetter) && currentPassword.length() > 8 )
        {
            isPasswordValid = true;
        }
        else
        {
            isPasswordValid = false;
        }
    }
    REQUIRE(isPasswordValid == true);
}

TEST_CASE("vignere cypher")
{
    Read readObj;
    Password passwordObj;
    VignereCypher vignereObj;
    Write writeObj;
    readObj.fileReader(Read::namestxt);
    passwordObj.createRandomPasswords();

    int i = 0;
    while ( i < passwordObj.passwordStorage.size() )
    {
        string message = passwordObj.passwordStorage.at(i);
        string encryptedMessage = vignereObj.encrypt(message);
        REQUIRE(encryptedMessage != message);
        i++;
    }
}

TEST_CASE("read encrypteddata.txt")
{
    Read readObj;
    Password passwordObj;
    VignereCypher vignereObj;
    Write writeObj;
    readObj.fileReader(Read::namestxt);
    passwordObj.createRandomPasswords();

    REQUIRE( writeObj.write("rawdata.txt", readObj.Storage, passwordObj.passwordStorage) == true );
    REQUIRE( writeObj.write("encrypteddata.txt", readObj.Storage, passwordObj.encryptedPasswordStorage) == true);
}

TEST_CASE("Hash tabled add/remove")
{
    PassServer Server;

    REQUIRE(Server.AddUser("bjohn", "123"));
    // duplicate add should fail
    REQUIRE(!Server.AddUser("bjohn", "111"));
    REQUIRE(Server.AddUser("clynn", "123"));
    PassServer Server1(2);
    REQUIRE(Server1.AddUser("bjohn", "123"));
    REQUIRE(Server1.AddUser("clynn", "123"));
    // fail because beyond capacity
    REQUIRE(!Server1.AddUser("jsmith", "123"));
}
TEST_CASE("Hash table add/remove non-existant")
{
    PassServer Server;
    REQUIRE(Server.AddUser("bjohn", "123"));
    REQUIRE(Server.RemoveUser("bjohn"));
    REQUIRE(!Server.RemoveUser("notexist"));
}

TEST_CASE("Hash table add/validate")
{
    PassServer Server;
    REQUIRE(Server.AddUser("bjohn", "123"));
    REQUIRE(Server.Validate("bjohn", "123"));
    // wrong password
    REQUIRE(!Server.Validate("bjohn", "111"));
    // user not exist
    REQUIRE(!Server.Validate("ajohn", "111"));
}
TEST_CASE("Hash table has/add/remove")
{
    PassServer Server;
    REQUIRE(!Server.HasUser("bjohn"));
    REQUIRE(Server.AddUser("bjohn", "123"));
    REQUIRE(Server.HasUser("bjohn"));
    REQUIRE(Server.RemoveUser("bjohn"));
    REQUIRE(!Server.HasUser("bjohn"));
    // other non-exist user
    REQUIRE(!Server.HasUser("ajohn"));
}

TEST_CASE("Hash table add/validate/update/validate")
{
    PassServer Server;
    REQUIRE(Server.AddUser("bjohn", "123"));
    REQUIRE(Server.Validate("bjohn", "123"));
    // fail with wrong password
    REQUIRE(!Server.UpdatePassword("bjohn", "111", "123"));
    // fail with wrong username
    REQUIRE(!Server.UpdatePassword("ajohn", "123", "111"));
    REQUIRE(Server.UpdatePassword("bjohn", "123", "111"));
    // password changed
    REQUIRE(Server.Validate("bjohn", "111"));
}
*/