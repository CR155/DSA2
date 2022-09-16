// Created by Chris on 9/14/2022.

#include "hashtable.hpp"

class PassServer {
private:
    HashTable<std::string, std::string> table;
    std::string Hash(const std::string &password);

public:
    explicit PassServer(int capacity = 88799) { table.Resize(capacity); }
    bool AddUser(const std::string &username, const std::string &password);
    bool RemoveUser(const std::string &username);
    bool Validate(const std::string &username, const std::string &password);
    bool UpdatePassword(const std::string &username, const std::string &password,
                        const std::string &newPass);
    bool HasUser(const std::string &username);
    int GetSize();
};