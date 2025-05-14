#include "hashtable.h"
#include <iostream>

using namespace std;

int main() {
    HashTable ht; // Create a hash table object

    // Choose one test case:
    int keys[] = {25, -37, 14, -8, 16, 1234, -35, 35}; // Test Case 1
    // OR
    // Aggressive collsions
    //int keys[] = {11, -11, 0, 22, -22, 33, -33, 44}; // Test Case 2
    // OR
    // Full table detection
    //int keys[] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121}; // Test case 3

    int num_keys = sizeof(keys) / sizeof(keys[0]);

    // Insert all keys
    for (int i = 0; i < num_keys; i++) {
        try {
            ht.insert(keys[i]);
        } 
        catch (const exception& e) {
            cout << "Failed to insert key at position " << i << ": " << e.what() << endl;
            // If you want to show the actual key value that failed:
            cout << "Key value that failed: " << keys[i] << endl;
        }
    }
    
    // Display final hash table state
    cout << "\nFinal Hash Table:\n";
    ht.display();

    return 0;
}