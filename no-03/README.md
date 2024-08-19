# String Manipulation Library

This project consists of a string manipulation library implemented in C, which provides basic string operations like calculating string length, copying strings, and concatenating strings. The library is implemented in two different ways: one using array notation and the other using pointer notation.

## Files

- **stringLib.h**: Header file that defines the string type and declares the functions for string manipulation. It supports both array notation and pointer notation based on a preprocessor directive.
- **stringLibA.c**: Implementation of the string manipulation functions using array notation.
- **stringLibP.c**: Implementation of the string manipulation functions using pointer notation.
- **stringTest.c**: A test program that uses the string manipulation functions to demonstrate their functionality.
- **makefile**: A Makefile to compile and test the programs.

## Usage

### Compiling the Programs

To compile the programs, simply run:

```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **String Manipulation in C**:
   - I learned how to implement basic string operations like length calculation, copying, and concatenation in C.
   - I gained experience in using both array notation and pointer notation for string handling.

2. **Preprocessor Directives**:
   - I understood how to use preprocessor directives (`#ifdef`, `#else`, `#endif`) to conditionally compile code for different implementations (array vs. pointer notation).

3. **Writing Makefiles**:
   - I improved my skills in writing Makefiles, especially for compiling different versions of a program based on various implementations.

4. **Memory Handling in C**:
   - I practiced handling strings as both arrays and pointers, deepening my understanding of how memory and pointers work in C.

5. **Testing and Debugging**:
   - I learned how to write and run tests for different implementations, and how to debug issues using `printf` statements and a structured approach.
