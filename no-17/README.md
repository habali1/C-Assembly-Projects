# Warehouse Order Processing System

This project implements a simplified warehouse order processing system in C. The system simulates the retrieval and packing of parts from bins on a workbench, following a specific order provided in text files. The project includes functionalities for managing parts, bins, and processing orders efficiently.

## Files

- `warehouse.c`: Implements the main logic for processing warehouse orders, managing the workbench, and handling part and bin interactions.
- `packer.c`: Contains helper functions for managing the workbench and tracking parts in the order history.
- `packer.h`: Header file for `packer.c`, defining the functions used in managing the workbench.
- `warehouse.h`: Header file for `warehouse.c`, defining constants and function prototypes related to warehouse operations.
- `order1.txt`, `order2.txt`, `order3.txt`: Sample order files containing lists of part numbers to be processed.
- `makefile`: Makefile for compiling and running the warehouse system, including options for debugging and cleaning up.

## Usage

To compile and run the program with the sample orders, use the following command:

```bash
make test
```
To compile the program with additional debugging output:

```bash
make warehouse_debug
```
To clean up the compiled files:
```bash
make clean
```
## What I Learned

1. **Order Processing in C**: 
   - Gained experience in simulating a warehouse order processing system, managing multiple components like parts, bins, and a workbench.

2. **Dynamic Memory Management**: 
   - Developed skills in handling dynamic memory allocation, ensuring efficient use of memory while managing parts and bins.

3. **File I/O Operations**: 
   - Improved understanding of file I/O operations in C, reading and processing orders from text files.

4. **Modular Code Design**: 
   - Practiced writing modular code by separating core functionalities into distinct source and header files (`warehouse.c`, `packer.c`, `warehouse.h`, `packer.h`).

5. **Makefile Automation**: 
   - Reinforced the use of Makefiles to automate compilation, testing, and debugging processes, streamlining project management.

6. **Debugging Techniques**: 
   - Utilized debugging techniques such as conditional compilation (`SHOWBENCH`) to monitor the state of the workbench and identify issues during development.

7. **Order Processing Logic**: 
   - Implemented logic to handle various warehouse tasks, including finding the least recently used bin, updating part history, and swapping bins on the workbench.

8. **Simulation of Real-World Systems**: 
   - Simulated a real-world warehouse system, providing insight into how such systems might be implemented in practice, with a focus on efficiency and accuracy.