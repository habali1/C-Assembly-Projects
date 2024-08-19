# Bit Fields and Floating Point Representation

This project consists of a C program that utilizes bit manipulation to extract and manipulate the sign, exponent, and fraction components of a double-precision floating-point number. The program includes a utility for bit field manipulation and a Makefile for compiling and running the program.

## Files

- **bitFields.c**: Contains utility functions for getting and setting bits and bit fields within a 64-bit integer.
- **bitFields.h**: The header file declaring the utility functions for bit manipulation.
- **showFloat.c**: A program that takes one or more floating-point numbers as input and displays their sign, biased and unbiased exponents, and fractional part.
- **makefile**: A Makefile to compile the program, run tests, and clean up generated files.

## Usage

### Compiling the Program

To compile the program, simply run:

```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **Bit Manipulation in C**:
   - I learned how to use bitwise operators to manipulate individual bits and bit fields within a 64-bit integer.

2. **Floating-Point Representation**:
   - I gained a deeper understanding of how floating-point numbers are represented in memory, including the sign bit, exponent, and fraction (mantissa).

3. **Bit Fields and Their Use Cases**:
   - I learned how to extract and manipulate specific bit fields from a number, which is crucial for understanding and modifying the components of floating-point numbers.

4. **Using Unions for Type Punning**:
   - I practiced using unions to interpret the same memory location as different data types, which is useful for directly accessing the bit pattern of a floating-point number.

5. **Writing and Using Makefiles**:
   - I improved my ability to write and use Makefiles for compiling, testing, and debugging C programs.
