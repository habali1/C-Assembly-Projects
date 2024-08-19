# Integer Math in Assembly

This project consists of an assembly implementation of basic arithmetic functions (addition, subtraction, multiplication, and division) using x86-64 assembly. The program computes a simple polynomial expression and demonstrates the use of assembly instructions to perform arithmetic operations. The project also includes a Makefile for compiling the assembly code and debugging it with GDB.

## Files

- **intMath.s**: The main assembly file containing the implementation of the arithmetic functions and the `main` function that performs a polynomial calculation.
- **makefile**: A Makefile to compile the assembly code, generate a disassembly output, and debug the program with GDB.

## Usage

### Compiling the Program

To compile the program, simply run:

```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **Assembly Language Programming**:
   - I learned how to write and understand x86-64 assembly code, including how to perform basic arithmetic operations directly in assembly.

2. **Function Implementation in Assembly**:
   - I gained experience in implementing functions such as addition, subtraction, multiplication, and division using assembly language, understanding the low-level operations involved.

3. **Debugging Assembly Code with GDB**:
   - I practiced using GDB to debug assembly code, including setting breakpoints, stepping through code, and examining registers and memory to understand the program's behavior.

4. **Disassembly and Analysis**:
   - I learned how to generate and analyze the disassembly of compiled code, which helped in understanding how high-level C code translates to assembly instructions.

5. **Makefile for Assembly Projects**:
   - I improved my skills in writing Makefiles specifically for assembly projects, automating the build process, disassembly generation, and debugging setup.
