# Bit Manipulation in C

This project provides utility functions for manipulating individual bits and bit fields within 64-bit integers. The functions include setting and getting specific bits and fields, both signed and unsigned, and are useful for low-level data manipulation tasks.

## Files

- `bitFields.c`: Implements functions for manipulating individual bits and bit fields.
- `bitFields.h`: Header file for `bitFields.c`, defining the bit manipulation functions.
- `testBitFields.c`: A test program that demonstrates and verifies the functionality of the bit manipulation functions.
- `makefile`: Makefile for compiling and testing the program.

## Usage

To compile and run the program, use the following commands:

```bash
make test
make gdb
make checkMem
```
## What I Learned

1. **Bitwise Operations**: 
   - Gained a strong understanding of bitwise operations, including setting, clearing, and retrieving specific bits within an integer.
   - Learned how to use bitwise shifts and masks to manipulate individual bits and groups of bits.

2. **Bit Fields Handling**: 
   - Developed skills in extracting and setting bit fields of varying lengths within a 64-bit integer.
   - Implemented both signed and unsigned bit field operations, ensuring correct behavior across different use cases.

3. **Assertions for Input Validation**: 
   - Utilized `assert` statements to enforce preconditions on bit manipulation functions, ensuring inputs are within valid ranges and preventing undefined behavior.

4. **Efficient Low-Level Programming**: 
   - Improved proficiency in low-level programming by manipulating data at the bit level, which is crucial for performance-critical applications.

5. **Modular Code Structure**: 
   - Structured code into reusable functions and separated implementation into source and header files, enhancing modularity and readability.

6. **Debugging and Testing**: 
   - Wrote comprehensive test cases to verify the correctness of bit manipulation functions.
   - Used debugging techniques to ensure that the implementation behaves as expected under various scenarios.

7. **Makefile Usage**: 
   - Reinforced the use of Makefiles to automate the compilation and testing process, making it easier to build and maintain the project.

8. **Binary Representation of Data**: 
   - Explored the representation of data in binary format, converting between hexadecimal and binary to verify the correctness of bitwise operations.