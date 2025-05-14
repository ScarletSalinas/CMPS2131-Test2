#include "hashtable.h"
#include <iostream>

using namespace std;

int main() {
    HashTable ht; // Create a hash table object

    // Choose one test case:
    int keys[] = {25, -37, 14, -8, 16, 1234, -35, 35}; // Test Case 1
    // OR
    //int keys[] = {11, -11, 0, 22, -22, 33, -33, 44}; // Test Case 2
    int num_keys = sizeof(keys) / sizeof(keys[0]);

    // Insert all keys
    try {
        for (int key : keys) {
            ht.insert(key);
        }
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    // Display final hash table state
    cout << "\nFinal Hash Table:\n";
    ht.display();

    return 0;
}