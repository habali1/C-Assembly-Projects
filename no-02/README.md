# Text Manipulation Utilities

This project consists of several C programs designed to manipulate text by collapsing spaces, counting whitespace characters, and expanding tabs into spaces. These programs can be used together to format text files according to specified rules.

## Files

- **collapse\_spaces.c**: A C program that collapses consecutive spaces into tabs, based on the number provided as a command-line argument.
- **countspace.c**: A C program that counts and displays the number of whitespace characters in a given input.
- **expand\_tabs.c**: A C program that expands tabs into spaces, with the number of spaces specified as a command-line argument.
- **makefile**: A Makefile to compile the programs and run tests on them.
- **example.txt**: A sample text file used to demonstrate how the programs work. It contains text that uses spaces and tabs in different ways to outline various topics.

## Usage

### Compiling the Programs

To compile the programs, simply run:

```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **Command-Line Arguments in C**:
   - I learned how to use `argc` and `argv[]` to handle command-line arguments.
   - I practiced converting strings to integers with `atoi` and realized the importance of checking inputs.

2. **Text Manipulation**:
   - I learned how to manipulate text by collapsing spaces into tabs, expanding tabs into spaces, and counting whitespace characters.

3. **Writing Makefiles**:
   - I gained experience in writing Makefiles to automate the compilation and testing processes.

4. **Using GDB for Debugging**:
   - I improved my debugging skills by using GDB to troubleshoot my C code, especially when handling file input and command-line arguments.

5. **Error Handling**:
   - I understood the importance of validating input and handling edge cases, such as dealing with unexpected file formats or incorrect command-line arguments.
