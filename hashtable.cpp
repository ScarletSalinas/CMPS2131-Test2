#include "hashtable.h"

using namespace std;

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
        cout << "Inserted " << key << " at slot " << index << endl;
    } else {
        cout << "Collision at slot " << index << " for key " << key << " (Not resolved!)\n";
    }
}

// Displays the current state of the hash table
void HashTable::display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << "Slot " << i << ": ";
        if (table[i] != -1) cout << table[i];
        cout << endl;
    }
}