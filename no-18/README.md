# proj02 - 
# Extended Floating Point in C

This project implements a custom floating-point representation in C, allowing the conversion of double-precision floating-point numbers to a custom format with a specified total number of bits and exponent bits. The project includes functionalities to convert from double to the custom format and to test the conversion using various inputs.

## Files

- `floatx.c`: Implements the function to convert a double to a custom floating-point representation (`floatx`).
- `floatx.h`: Header file for `floatx.c`, defining the `floatx` type and conversion function prototype.
- `testFloatx.c`: A test program that reads double values from input, converts them to the custom `floatx` format, and displays the results.
- `test1.txt`: A sample input file containing double values to be tested.
- `makefile`: Makefile for compiling and running the test program, with options for debugging and cleaning up.

## Usage

To compile and run the test program with the sample inputs, use the following command:

```bash
make test
```
To debug program:
```bash
make gdb
```
To clean up the compiled files:
```bash
make clean
```
## What I Learned

1. **Custom Floating-Point Representation**: 
   - Gained experience in designing a custom floating-point format by specifying the number of total bits and exponent bits, allowing for flexibility in precision and range.

2. **Bitwise Operations**: 
   - Developed skills in bitwise manipulation to extract and assemble the components of the floating-point number, including the sign, exponent, and mantissa.

3. **Handling Special Cases**: 
   - Learned to handle special floating-point values such as zero, infinity, and NaN (Not a Number) within the custom format.

4. **Assertions and Input Validation**: 
   - Used assertions to enforce constraints on input parameters, ensuring that the total bits and exponent bits are within valid ranges.

5. **Modular Code Design**: 
   - Practiced modular programming by separating the core conversion logic (`floatx.c`) from the test harness (`testFloatx.c`), improving code organization and maintainability.

6. **File I/O and Test Automation**: 
   - Automated the testing of floating-point conversions using input files, streamlining the process of verifying the correctness of the custom format implementation.

7. **Makefile Proficiency****: 
   - Enhanced proficiency in using Makefiles to automate compilation, testing, and debugging, ensuring a smooth development workflow.

8. **Understanding IEEE 754**: 
   - Deepened understanding of the IEEE 754 standard for floating-point arithmetic, particularly in how floating-point numbers are represented and manipulated at the bit level.