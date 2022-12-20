#ifndef HAS_TABLE_H
#define HAS_TABLE_H
#include <vector>
#include <list>
#include <cstddef>
#include <algorithm>
#include <iostream>
#include "hash.h"

template <typename HashObject>
class HashTable {
public:
    explicit HashTable(int size = 101);
public:
    void makeEmpty();
    bool contains(const HashObject& ) ;
    bool insert(const HashObject&);
    bool insert(HashObject&&);
    bool remove(const HashObject&);
    void print() {
        for (int i = 0; i < theList.size(); ++i) {
            for (auto it = theList[i].begin(); it != theList[i].end(); ++it) {
                std::cout << *it << " ";
            } 
        }
    }
private:
    size_t myHash(const HashObject&);
    void reHash();
private:
    std::vector<std::list<HashObject>> theList;
    int currentSize;
};


#endif // HAS_TABLE_H