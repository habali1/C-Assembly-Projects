# Buffer Overflow Attack Simulation in C

This project demonstrates the exploitation of buffer overflow vulnerabilities in a controlled environment. The project includes a simulation of a grading system that is vulnerable to buffer overflow attacks, allowing for practical exploration of this common security issue.

## Files

- `grades.c`: The main C program simulating a grading system, which is vulnerable to buffer overflow attacks.
- `hack.s`: Assembly code that can be assembled into a binary (`hack.o`) and used to exploit the buffer overflow vulnerability.
- `mix.c`: A utility program to create a binary payload for the buffer overflow attack by mixing strings, hexadecimal values, addresses, and file contents.
- `mix_in.txt`: Input file for `mix.c`, specifying the structure and content of the payload.
- `gdb_cmds.txt`: GDB commands used to set up the debugging environment for analyzing the buffer overflow attack.
- `makefile`: Makefile for compiling and running the project, including options for testing, debugging, and cleaning up.

## Usage

To compile and test the program, use the following commands:

```bash
make test
```
To run the program with Address Space Layout Randomization (ASLR) enabled:
```bash
make testASLR
```
To debug the program using GDB:
```bash
make gdb
```
To view the hexadecimal content of the generated payload:
```bash
make showhex
```
To clean up:
```bash
make clean
```
## What I Learned

1. **Buffer Overflow Vulnerabilities**: 
   - Gained a deeper understanding of buffer overflow vulnerabilities and how they can be exploited to execute arbitrary code or manipulate program behavior.

2. **Security in C Programming**: 
   - Learned the importance of secure coding practices in C, such as bounds checking and avoiding unsafe functions like `gets`, to prevent buffer overflow attacks.

3. **Assembly Language for Exploitation**: 
   - Developed skills in writing and understanding assembly code used for exploitation, particularly in crafting payloads to exploit buffer overflow vulnerabilities.

4. **Using GDB for Exploit Development**: 
   - Enhanced proficiency in using GDB to debug and analyze programs, setting breakpoints, and examining memory to understand how an exploit affects the program’s execution.

5. **Payload Construction**: 
   - Learned how to construct binary payloads using various data types (strings, hex values, addresses) to craft a successful buffer overflow attack.

6. **File Manipulation and Scripting**: 
   - Improved skills in scripting and automating tasks related to exploit development, such as creating payloads and managing files.

7. **Understanding System Security**: 
   - Gained insight into system-level security mechanisms like Address Space Layout Randomization (ASLR) and how they can be circumvented or mitigated in exploit scenarios.

8. **Ethical Hacking Practices**: 
   - Reinforced the importance of ethical hacking and responsible disclosure when working with security vulnerabilities, understanding the balance between research and responsible use of security knowledge.