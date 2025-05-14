#ifndef HASHTABLE_H 
#define HASHTABLE_H

#include <vector>
#include <iostream>

using namespace std;

#define TABLE_SIZE 11 // Size of the hash table

class HashTable {
private:
    vector<int> table; // Vector to store keys
    int size = 0; // Track number of elements 

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