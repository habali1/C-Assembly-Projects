# Geometric Coordinate and Line Manipulations

This project provides a simple implementation of geometric coordinate and line manipulations in C. It allows the creation and manipulation of 2D coordinates and lines, including finding the distance between points, determining line equations, and finding intersections of lines.

## Files

- `coord.c`: Implements functions for creating and manipulating 2D coordinates.
- `coord.h`: Header file for `coord.c`, defining the `coord` structure and related functions.
- `line.c`: Implements functions for creating and manipulating lines, as well as calculating line intersections.
- `line.h`: Header file for `line.c`, defining the `line` structure and related functions.
- `tryGeom.c`: A test program demonstrating the usage of the coordinate and line functions.
- `makefile`: Makefile for compiling the project and running tests.

## Usage

### Compilation

To compile the project, simply run:

```bash
make
```
## What I Learned

1. **Dynamic Memory Management**: 
   - Gained experience with using `malloc` and `free` for dynamic memory allocation in C. 
   - Understood the importance of checking for `NULL` to prevent memory allocation failures.

2. **Structs and Pointers**: 
   - Learned to define and manipulate custom data types using `struct`.
   - Used pointers to manage and pass complex data structures efficiently.

3. **Mathematical Operations**: 
   - Applied mathematical functions such as `sqrt` and basic arithmetic to calculate distances and line equations.

4. **Coordinate and Line Geometry**: 
   - Developed a basic understanding of geometric concepts like coordinates, slopes, and line intersections.
   - Implemented functions to compute distances between points and determine the equation of a line from two points.

5. **Static Buffers**: 
   - Learned to use static buffers for returning formatted strings, understanding their limitations and proper usage scenarios.

6. **Error Handling**: 
   - Practiced simple error handling techniques, such as returning `NULL` for invalid operations like creating a line from two identical coordinates.

7. **C Programming Best Practices**: 
   - Reinforced the importance of code organization, modularity, and readability in C projects.
   -
