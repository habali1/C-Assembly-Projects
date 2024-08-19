# x86 Assembly Math Operations

This project consists of a C program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. The program also includes a Makefile for compiling the code and a `gdb_cmds.txt` file for debugging with GDB.

## Files

- **x86Math.c**: The main C file containing functions for basic arithmetic operations. The operations are implemented in two ways: a simple method and a more detailed method using intermediate variables.
- **gdb_cmds.txt**: A GDB command script that sets up breakpoints and other settings to help with debugging the `myAdd` function.
- **makefile**: A Makefile to compile the program and set up the environment for debugging.

## Usage

### Compiling the Program

To compile the program, simply run:

```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **C Arithmetic Operations**:
   - I learned how to implement basic arithmetic operations in C, both in a straightforward manner and with more detailed steps that mimic assembly language instructions.

2. **Using GDB for Debugging**:
   - I gained experience in setting up and using GDB to debug C programs, including setting breakpoints and examining the state of the program during execution.

3. **Makefile Usage**:
   - I practiced writing a Makefile to automate the compilation of the program and prepare it for debugging with GDB.

4. **Understanding x86 Assembly Concepts**:
   - By implementing arithmetic functions in a more detailed manner, I gained a better understanding of how arithmetic operations are handled at the assembly level.
