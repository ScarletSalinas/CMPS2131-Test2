#include "hashtable.h"
#include <iostream>

using namespace std;

// Constructor: Initializes all table slots to -1 (empty)
HashTable::HashTable() : table(TABLE_SIZE, -1) {}

// Division Method Hashing
int HashTable::hash(int key) {
    return (key % TABLE_SIZE + TABLE_SIZE) % TABLE_SIZE; // Handles negatives
}

// Insert 
void HashTable::insert(int key) {
    // Fast rejection if table is full
    if (size >= TABLE_SIZE) {
        throw runtime_error("Hash table is full!");
    }

    int index = hash(key);      // Calculate initial hash index
    int original = index;       // Store original index for probing
    int i = 0;                  // Probe counter

    // Search for an empty slot
    // Check for duplicate
    
    while (table[index] != -1) {
        // Check for duplicate
        if (table[index] == key) {
            throw runtime_error("Duplicate key " + to_string(key));
        }
        // Linear probing
        i++;
        index = (original + i) % TABLE_SIZE;
        
        // Safety check
        if (index == original) {
            throw runtime_error("Probing wrapped - table may be full");
        }
    }

    table[index] = key;
    size++;
    cout << "Inserted " << key << " at slot " << index << endl;
    if (i > 0) {
        cout << " (probed " << i << " slots)";
    }
    cout << endl;
}

// Displays the current state of the hash table
void HashTable::display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << "Slot " << i << ": ";
        if (table[i] != -1) {
            cout << table[i];   // Display key if slot is occupied
            // Show original hash for collision cases
            if (hash(table[i]) != i) {
                cout << " (originally hashed to " << hash(table[i]) << ")";
            }
        }
        cout << endl;
    }
}