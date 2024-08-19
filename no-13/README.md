# Linked List Manipulation in C

This project provides an implementation of singly linked lists in C. It includes functionalities to create and manipulate linked lists, such as inserting nodes at the start, end, or in order, printing the list, and validating the list structure.

## Files

- `list.c`: Implements functions for creating and manipulating linked lists.
- `list.h`: Header file for `list.c`, defining the `list` structure and related functions.
- `node.c`: Implements functions for creating and manipulating nodes in a linked list.
- `node.h`: Header file for `node.c`, defining the `node` structure and related functions.
- `tryList.c`: A test program demonstrating the usage of the linked list functions.
- `makefile`: Makefile for compiling and testing the program.

## Usage

To compile and run the program, use the following commands:

```bash
make tryList
./tryList 12 45 10 21 32 12 61
```
## What I Learned

1. **Linked List Fundamentals**: 
   - Gained a deeper understanding of how singly linked lists work, including the concepts of head nodes, tail nodes, and node traversal.

2. **Dynamic Memory Management**: 
   - Enhanced skills in using `malloc` and `free` for dynamic memory allocation, particularly in the context of linked lists.
   - Learned the importance of freeing memory properly to avoid memory leaks.

3. **Pointer Manipulation**: 
   - Practiced manipulating pointers to manage linked list nodes effectively, ensuring correct insertion at the start, end, and in sorted order.

4. **Modular Code Structure**: 
   - Improved the ability to structure code modularly by separating node and list functionalities into distinct source and header files.

5. **Assertions for Debugging**: 
   - Utilized `assert` statements to enforce program invariants and catch errors during development, particularly in pointer operations.

6. **List Validation**: 
   - Implemented a validation function to detect cycles or corruptions in the linked list, ensuring data integrity.

7. **Handling Edge Cases**: 
   - Developed strategies for handling edge cases, such as inserting into an empty list or ensuring correct behavior when the list contains only one node.

8. **Makefile Usage**: 
   - Learned to create and use a Makefile for compiling and testing the program, streamlining the build process.

9. **Printing Linked Lists**: 
   - Gained experience in writing functions to traverse and print linked lists, ensuring a clear and accurate representation of the list’s contents.