CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

# Name of the executable
TARGET = factorial

# Source and object files
SRC = factorial.c
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Target to compile and run the program
test: $(TARGET)
	./$(TARGET)

# Target to clean up generated files
clean:
	-rm -f $(OBJ) $(TARGET)

.PHONY: all test clean