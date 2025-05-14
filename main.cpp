#include "hashtable.h"
#include <iostream>

using namespace std;

int main() {
    HashTable ht; // Create a hash table object

    // Keys to be inserted (35 and 45 will cause collisions)
    int keys[] = {25, 37, 14, 8, 16, 23, 35, 45};
    int num_keys = sizeof(keys) / sizeof(keys[0]);

    // Insert all keys
    for (int i = 0; i < num_keys; i++) {
        ht.insert(keys[i]);
    }

    // Display final hash table state
    cout << "\nFinal Hash Table:";
    ht.display();

    return 0;
}