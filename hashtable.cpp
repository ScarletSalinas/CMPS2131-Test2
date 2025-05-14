#include "hashtable.h"

// Constructor
HashTable::HashTable() : table(TABLE_SIZE, -1) {}

// Division Method Hashing
int HashTable::hash(int key) {
    return key % TABLE_SIZE;
}

// Insert 
void HashTable::insert(int key) {
    int index = hash(key);

    if (table[index] == -1) {
        table[index] = key;
        std::cout << "Inserted " << key << " at slot " << index << std::endl;
    } else {
        std::cout << "Collision at slot " << index << " for key " << key << " (Not resolved!)" << std::endl;
    }
}

// Displays the current state of the hash table
void HashTable::display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        std::cout << "Slot " << i << ": ";
        if (table[i] != -1) std::cout << table[i];
        std::cout << std::endl;
    }
}