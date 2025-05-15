# CMPS 2131 Test 2

## A customizable hash table implementation featuring:
✔ Division method hashing  
✔ Linear probing collision resolution  
✔ Negative key support  
✔ Duplicate key detection  
✔ Full table protection  

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/hash-table.git
   cd hash-table
   ```

2. Compile and run the project:
   ```bash
   g++ -std=c++11 HashTable.cpp main.cpp -o hash
   ./hash
   ```

## Usage Examples With Test Cases
```cpp
// Test Case 1: Normal operations
int keys1[] = {25, -37, 14, -8, 16, 1234, -35, 35};

// Test Case 2: Aggressive collisions
int keys2[] = {11, -11, 0, 22, -22, 33, -33, 44};

// Test Case 3: Full table detection
int keys3[] = {0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121};
```

## Output Example
```
Inserted 25 at slot 3
Inserted -37 at slot 7
Inserted 14 at slot 4 (probed 1 slots)
Error: Hash table is full! (rejected 121)

Final Hash Table (10/11 slots used):
Slot 0: [empty]
Slot 1: 11 (originally hashed to 0)
...
Slot 10: 110
```

# Link to video and slides
[Watch demo here](https://www.youtube.com/watch?v=65qX9cLW3wM) 
View Slides here: [Division Method](https://www.canva.com/design/DAGndlHLJu0/z_qXnHIk7f-ak8mg6fv2SA/edit) & [Linear Probing](https://www.canva.com/design/DAGneOYe-rw/XrIh3YSjZVqFaWE0ydpLBg/edit ) 

## References
  - LLM: DeepSeek, for tutoring, learning necessary concepts, and for guidance when needed.
