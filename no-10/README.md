# Linked List Implementation

This project consists of implementing a singly linked list in C. The implementation includes functions for creating and manipulating the list, such as inserting nodes at different positions, checking for list validity, printing the list, and freeing allocated memory. The project also demonstrates how to use GDB for debugging the linked list operations.

## Files

- **list.c**: Contains the implementation of linked list functions, including creation, insertion (start, end, and ordered), getting the tail, checking validity, printing the list, and freeing the list.
- **list.h**: Header file defining the linked list interface, including function prototypes and the `list` type.
- **node.c**: Contains the implementation of node operations, including creation, getting and setting the next node, getting the payload, printing the node, and freeing the node.
- **node.h**: Header file defining the node interface, including function prototypes and the `node` type.
- **tryList.c**: Contains test code for demonstrating and verifying the linked list operations.
- **makefile**: A Makefile for compiling the project, generating the executable `tryList`, and setting up GDB for debugging.
- **gdb_cmds.txt**: A file with GDB commands for debugging the program.

## Usage

### Compiling the Program

To compile the program, simply run:

```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **Linked List Implementation**:
   - I learned how to implement and manage a singly linked list in C, including functions for insertion, deletion, and traversal.

2. **Dynamic Memory Management**:
   - I gained experience in handling dynamic memory allocation and deallocation, ensuring proper memory management to prevent leaks and dangling pointers.

3. **List Validity and Debugging**:
   - I developed skills in validating the integrity of a linked list to avoid endless loops and other issues. I also practiced debugging techniques using GDB to identify and resolve problems in the code.

4. **GDB Usage**:
   - I learned how to use GDB for debugging C programs, including setting breakpoints, running commands, and inspecting variables.

5. **Testing and Verifying Code**:
   - I practiced writing test cases to verify the correctness of linked list operations and ensure that the implementation behaves as expected under various scenarios.