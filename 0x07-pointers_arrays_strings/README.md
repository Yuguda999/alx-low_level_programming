# Custom String Functions

This repository contains a set of custom string functions implemented in C. These functions provide alternative implementations of some common string manipulation tasks.

## Functions

### `_memset`

Prototype: `char *_memset(char *s, char b, unsigned int n);`

Description: Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.

### `_memcpy`

Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`

Description: Copies `n` bytes from the memory area `src` to the memory area `dest`.

### `_strchr`

Prototype: `char *_strchr(char *s, char c);`

Description: Locates the first occurrence of the character `c` in the string `s`.

### `_strpbrk`

Prototype: `char *_strpbrk(char *s, char *accept);`

Description: Locates the first occurrence in the string `s` of any of the bytes in the string `accept`.

### `_strstr`

Prototype: `char *_strstr(char *haystack, char *needle);`

Description: Finds the first occurrence of the substring `needle` in the string `haystack`.

### `_strspn`

Prototype: `unsigned int _strspn(char *s, char *accept);`

Description: Gets the length of a prefix substring in the string `s` that consists only of bytes from the string `accept`.

### `print_chessboard`

Prototype: `void print_chessboard(char (*a)[8]);`

Description: Prints a chessboard represented by a 2D array.

### `print_diagsums`

Prototype: `void print_diagsums(int *a, int size);`

Description: Prints the sum of the two diagonals of a square matrix of integers.

### `set_string`

Prototype: `void set_string(char **s, char *to);`

Description: Sets the value of a pointer to a char to point to the same memory location as another pointer.

## Usage

1. Clone this repository: `git clone https://github.com/yourusername/custom-string-functions.git`
2. Compile the C files: `gcc -Wall -Wextra -pedantic -Werror *.c -o string_functions`
3. Run the compiled program: `./string_functions`

