#include "hashtable.h"

using namespace std;

// Constructor: Initializes all table slots to -1 (empty)
HashTable::HashTable() : table(TABLE_SIZE, -1) {}

// Division Method Hashing
int HashTable::hash(int key) {
    return key % TABLE_SIZE;
}

// Insert 
void HashTable::insert(int key) {
    int index = hash(key);      // Calculate initial hash index
    int original = index;       // Store original index for probing
    int i = 0;                  // Probe counter

    // Search for an empty slot
    while (table[index] != -1) {
        cout << "Collision at slot " << index << " for key " << key << endl;
        i++;
        index = (original + i) % TABLE_SIZE; // Linear probing: move to next slot

        // If we've checked all slots and table is full
        if (index == original) {
            cout << "Table is full! Cannot insert " << key << endl;
            return;
        }
    }

    // Insert the key in the found empty slot
    table[index] = key;
    cout << "Inserted " << key << " at slot " << index << endl;
}

// Displays the current state of the hash table
void HashTable::display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << "Slot " << i << ": ";
        if (table[i] != -1) {
            cout << table[i];   // Display key if slot is occupied
        }
        cout << endl;
    }
}