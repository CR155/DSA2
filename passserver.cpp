// Created by Chris on 9/14/2022.

#include "passserver.hpp"

std::string PassServer::Hash(const std::string &password) {
    SHA1 hashFunc;
    hashFunc.update(password);
    return hashFunc.final();
}

bool PassServer::AddUser(const std::string &username, const std::string &password) {
    if ( !table.HasKey(username) && table.GetSize() < table.GetCapacity() ) {
        table.Insert(username, Hash(password));
        return true;
    }
    return false;
}

bool PassServer::RemoveUser(const std::string &username) {
    if (table.HasKey(username)) {
        table.Remove(username);
        return true;
    }
    return false;
}

bool PassServer::Validate(const std::string &username, const std::string &password) {
    if (table.Exist(username, Hash(password))) {
        return true;
    }
    return false;
}

bool PassServer::UpdatePassword(const std::string &username, const std::string &password, const std::string &newPass) {
    if (table.Exist(username, Hash(password))) {
        table.Remove(username);
        table.Insert(username, Hash(newPass));
        return true;
    }
    return false;
}

bool PassServer::HasUser(const std::string &username) {
    if (table.HasKey(username)) {
        return true;
    }
    return false;
}

int PassServer::GetSize() {
    return table.GetSize();
}
