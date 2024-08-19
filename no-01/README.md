# Simple Command-Line Argument Adder

This project consists of two C programs, `addArgs.c` and `proj01.c`, which demonstrate a simple command-line argument addition. The programs take integer arguments from the command line, sum them, and display the result in a formatted output.

## Files

- **addArgs.c**: A C program that sums up integer command-line arguments and prints the sum along with the individual terms in a formatted string.
- **proj01.c**: Identical to `addArgs.c`, included for possible further development or testing.
- **makefile**: A simple Makefile to compile the `addArgs` program and test it.

## Usage

### Compiling the Program

To compile the `addArgs` program, simply run:
```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **Command-Line Arguments in C**:
   - I learned how to use `argc` and `argv[]` to handle command-line arguments.
   - I practiced converting strings to integers with `atoi` and realized the importance of checking inputs.

2. **Formatting Output in C**:
   - I got better at using `printf` to format and display results clearly.

3. **Writing Makefiles**:
   - I learned to create a simple Makefile to compile and test my code easily.

4. **Using GDB for Debugging**:
   - I improved my debugging skills with GDB, especially in handling command-line arguments during testing.

5. **Handling Errors**:
   - I understood why it’s important to handle non-integer inputs and how I can make my programs more reliable in the future.