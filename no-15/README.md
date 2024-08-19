# C to x86 Assembly Translation

This project demonstrates the translation of C code to x86 assembly. The focus is on understanding how high-level C constructs are translated into low-level assembly instructions, with a specific example of a simple pattern printing program.

## Files

- `pattern.c`: A C program that prints a pattern of letters from 'A' to a user-specified character.
- `pattern.s`: The assembly translation of `pattern.c`, generated using the GCC compiler with debugging information.
- `interesting.txt`: A discussion of interesting lines from the assembly code, explaining their significance and how they relate to the original C code.
- `makefile`: Makefile for generating the assembly code from the C file and disassembling the object file for further analysis.

## Usage

To generate the assembly code and disassemble the object file, use the following commands:

```bash
make pattern.s
make pattern.obj.txt
```

To clean up the generated files:

```bash
make clean
```
## What I Learned

1. **Assembly Language Basics**: 
   - Gained an understanding of how C code is translated into x86 assembly language, including the structure and syntax of assembly instructions.

2. **Function Calls and Stack Management**: 
   - Learned how function calls (`printf`, `scanf`) are handled in assembly, including the use of registers and the stack to pass arguments and manage return values.

3. **Memory Addressing and Data Movement**: 
   - Explored how memory addressing works in assembly, with instructions like `leaq` and `movq` used to load addresses and move data between registers and memory.

4. **Control Flow in Assembly**: 
   - Observed how control flow constructs in C (such as loops and conditionals) are implemented in assembly using jumps (`jmp`, `jle`) and comparison instructions (`cmpl`).

5. **Understanding Compiler Optimizations**: 
   - Noted the absence of certain optimizations due to the `-O0` flag, which keeps the assembly code close to the original C logic, making it easier to understand.

6. **Low-Level Debugging**: 
   - Improved skills in low-level debugging by analyzing disassembled code and understanding the correlation between C source lines and assembly instructions.

7. **Makefile Automation**: 
   - Learned to use Makefiles to automate the process of compiling C code, generating assembly code, and disassembling object files, streamlining the workflow.

8. **Analyzing Compiler Output**: 
   - Gained experience in analyzing and interpreting the output of a compiler, including the use of flags to generate verbose assembly output with debugging information.