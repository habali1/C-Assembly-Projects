# Buffer Overflow Testing and Debugging

This project involves testing and debugging buffer overflow vulnerabilities using GDB, ASLR, and custom input files. The project includes setting up a test environment to exploit buffer overflows and analyzing the results.

## Files

- **gdb_cmds.txt**: Commands for GDB to set up debugging, disable ASLR, and run the target program with specific inputs.
- **makefile**: A Makefile to compile the necessary programs, generate disassembly, and prepare test inputs.
- **mix_in.txt**: Example input file used by the `mix` program for generating test input.
- **mix.c**: Source code for the `mix` program, which generates input files for testing.
- **target.c**: Source code for the `target` program, which is tested for buffer overflow vulnerabilities.
- **solution.txt**: Generated input file used to test the `target` program.

## Usage

### Compiling and Testing

To compile the programs and prepare test files, run:

```bash
make
```
## What I Learned

1. **Buffer Overflow Vulnerabilities**:
   - Understanding how buffer overflow vulnerabilities occur and how to exploit them to alter program behavior.

2. **Address Space Layout Randomization (ASLR)**:
   - Learning how ASLR can prevent buffer overflow attacks and how to disable it in GDB for testing purposes.

3. **Debugging with GDB**:
   - Using GDB to set breakpoints, run programs, and inspect memory and registers to analyze buffer overflow issues.

4. **Disassembly of Code**:
   - Generating and analyzing the disassembly of compiled code to understand how high-level code translates into assembly instructions.

5. **Input File Creation for Testing**:
   - Creating input files with specific data to test and exploit buffer overflow vulnerabilities in a controlled environment.

6. **Makefile Management**:
   - Writing and using Makefiles to automate the build process, run tests, and manage dependencies for debugging and vulnerability testing projects.