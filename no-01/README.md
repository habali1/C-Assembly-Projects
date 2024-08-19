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
#What I Learned

During the development of this project, I gained several valuable insights:

1. **Command-Line Argument Handling in C**:
   - I learned how to access and manipulate command-line arguments in a C program using `argc` and `argv[]`.
   - I practiced converting string arguments to integers using the `atoi` function, while understanding the importance of validating inputs.

2. **String Formatting in C**:
   - I practiced using `printf` for formatted output, particularly for creating a clean, readable string that shows the sum of integers passed via command-line arguments.

3. **Makefile Basics**:
   - I learned how to write a simple Makefile to automate the compilation process.
   - I gained experience in defining targets such as `test`, `gdb`, and `clean` to streamline testing, debugging, and cleanup tasks.

4. **Debugging with GDB**:
   - I enhanced my understanding of debugging by using GDB to inspect and troubleshoot my C code.
   - I explored how to pass command-line arguments to a program directly within GDB, making it easier to diagnose issues related to input handling.

5. **Error Handling Considerations**:
   - Although this project focused on basic functionality, I recognized the importance of handling non-integer inputs and the need for more robust input validation in future projects.

This project served as a hands-on introduction to command-line processing, Makefile usage, and debugging in C, laying the groundwork for more complex projects in the future.