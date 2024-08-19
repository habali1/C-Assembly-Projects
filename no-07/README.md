# Text Encoding and Decoding

This project consists of a set of C programs designed to encode and decode text using a simple cipher. It also includes a utility to verify that the encoded text remains within the ASCII printable range. The project includes a Makefile for compiling, testing, and cleaning up generated files.

## Files

- **checkASCII.c**: A program that checks if all characters in the input are ASCII printable characters.
- **encode.c**: A program that encodes input text using a provided key, modifying the least significant bits of each character.
- **decode.c**: A program that decodes text encoded by the `encode` program, using the same key.
- **makefile**: A Makefile to compile the programs, run tests, and clean up generated files.
- **test1.txt**, **test2.txt**, **test3.txt**: Sample text files used for testing the encoding and decoding processes.

## Usage

### Compiling the Programs

To compile all the programs, simply run:

```bash
make
```
## What I Learned

Working on this project taught me several key things:

1. **Text Encoding and Decoding**:
   - I learned how to implement simple text encoding and decoding algorithms in C, using a key to transform characters and reverse the transformation.

2. **Handling ASCII and Non-Printable Characters**:
   - I gained experience in checking and ensuring that encoded text remains within the printable ASCII range, which is crucial for maintaining the integrity of encoded messages.

3. **Makefile Automation**:
   - I improved my understanding of Makefiles, especially in automating the compilation, testing, and cleanup processes across multiple tests and text files.

4. **Test-Driven Development**:
   - I practiced writing and running tests to verify the correctness of encoding and decoding processes, and used tools like `diff` to compare outputs against expected results.

5. **Modular Programming**:
   - I deepened my skills in modular programming by dividing the project into multiple source files, each handling specific tasks such as encoding, decoding, and ASCII checking.
