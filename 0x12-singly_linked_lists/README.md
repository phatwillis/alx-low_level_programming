# Linked Lists vs Arrays

## When and Why

- **Linked Lists:**
  - Dynamic size.
  - Efficient insertions and deletions.

- **Arrays:**
  - Static size.
  - Efficient random access.

## How to Use Linked Lists

### Building

1. **Define Node Structure:**
   ```c
   typedef struct Node {
       int data;
       struct Node* next;
   } Node;

