// Created by Chris on 9/2/2022.

#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP
#include "sha1.hpp"
#include <functional>
#include <string>
#include <vector>
#include <utility>
#include <iostream>

template <typename K, typename V>
class HashTable
{
private:
    int capacity = 88000;
    int size = 0;
    std::vector<std::pair<K, V>> hashedPair;
    std::vector<std::vector<std::pair<K, V>>> buckets;
public:
    std::pair<K, V> keyValuePair;
    std::vector<K> previousKeys;

explicit HashTable(int capacity = 88000) { this->capacity = capacity; }

int GetSize() {
    return this->size;
}

int GetCapacity() {
    return this->capacity;
}

void Clear() {
    buckets.clear();
    hashedPair.clear();
    this->size = 0;
}

void Resize(int capacity) {
    this->capacity = capacity;
    Clear();
}

bool Insert(K key, V value) {
    if (this->size >= this->capacity) {
        return false;
    }
    keyValuePair = make_pair(key, value);
    for (auto i : hashedPair) {
        if (i.first == keyValuePair.first) {
            return true;
        }
    }
    buckets.clear();
    hashedPair.push_back(keyValuePair);
    buckets.push_back(hashedPair);
    this->size++;
    return false;
}

bool HasUser(K key, V value) {
    return true;
}

int Hash(K key) {
    int returnKey = std::hash<K>{}(key) % capacity;
    return returnKey;
}

bool HasKey(K key) {
    int i = 0;
    while ( unsigned(i) < hashedPair.size() ) {
        if (hashedPair[i].first == key) {
            return true;
        } else {
            i++;
        }
    }
    return false;
}

bool Exist(K key, V value) {
    int i = 0;
    while ( unsigned(i) < hashedPair.size() ) {
        if (hashedPair[i].first == key && hashedPair[i].second == value) {
            return true;
        } else {
            i++;
        }
    }
    return false;
}

bool Remove(K key)
{
    int i = 0;
    while ( unsigned(i) < hashedPair.size() )
    {
        if (hashedPair[i].first == key)
        {
            hashedPair.erase(hashedPair.begin() + i);
            buckets.clear();
            buckets.push_back(hashedPair);
            this->size -= 1;
            return true;
        }
        else
        {
            i++;
        }
    }
    return false;
}
};
#endif