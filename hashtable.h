#ifndef HASHTABLE_H 
#define HASHTABLE_H

#include <vector>
#include <iostream>

#define TABLE_SIZE 10 // Size of the hash table

class HashTable {
private:
    std::vector<int> table; // Vector to store keys (-1 = empty slot)

public:
    // Constructor
    HashTable();

    // Hash function (Division Method)
    int hash(int key);

    // Insert key with collision resolution
    void insert(int key);

    // Display the hash table contents
    void display();
};

#endif // HASHTABLE_H