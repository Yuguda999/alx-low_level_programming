# Bit Manipulation

This repository contains C programming tasks and functions that cover various topics, including bit manipulation, endianness, and binary representation. Each task is explained below along with the corresponding C functions.

## Task 1: Binary to Unsigned Int Conversion

### Function: `unsigned int binary_to_uint(const char *b);`

This function converts a binary number represented as a string of 0 and 1 characters to an unsigned integer. If the input string contains any characters other than 0 or 1 or is NULL, it returns 0.

## Task 2: Printing Binary Representation

### Function: `void print_binary(unsigned long int n);`

This function prints the binary representation of an unsigned long integer. It does not use arrays, malloc, or the % or / operators.

## Task 3: Getting the Value of a Bit at an Index

### Function: `int get_bit(unsigned long int n, unsigned int index);`

This function returns the value of a bit at a given index (starting from 0) in an unsigned long integer. It returns -1 if an error occurs.

## Task 4: Setting the Value of a Bit to 1 at an Index

### Function: `int set_bit(unsigned long int *n, unsigned int index);`

This function sets the value of a bit to 1 at a given index (starting from 0) in an unsigned long integer. It returns 1 if it worked and -1 if an error occurred.

## Task 5: Clearing the Value of a Bit to 0 at an Index

### Function: `int clear_bit(unsigned long int *n, unsigned int index);`

This function sets the value of a bit to 0 at a given index (starting from 0) in an unsigned long integer. It returns 1 if it worked and -1 if an error occurred.

## Task 6: Flipping Bits to Convert between Numbers

### Function: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

This function calculates the number of bits needed to flip to convert from one unsigned long integer (`n`) to another (`m`) without using the % or / operators.

## Task 7: Checking Endianness

### Function: `int get_endianness(void);`

This function checks the endianness of the system and returns 0 if it's big endian or 1 if it's little endian.
