# C Programming Practice

This repository contains a collection of C programs and functions created for various programming tasks and exercises. Each program or function addresses a specific problem or task.

## List of Programs and Functions

1. **Malloc Checked**: A function `malloc_checked` that allocates memory using `malloc` and terminates the process with a status of 98 if `malloc` fails. [Code](0-malloc_checked.c)

2. **String Concatenation**: A function `string_nconcat` that concatenates two strings, allowing a specified number of characters from the second string. [Code](1-string_nconcat.c)

3. **calloc Function**: A function `_calloc` that allocates memory for an array using `malloc` and initializes it to zero. [Code](2-calloc.c)

4. **Array Range**: A function `array_range` that creates an array of integers containing values from `min` to `max`, inclusive. [Code](3-array_range.c)

5. **Memory Reallocation**: A function `_realloc` that reallocates a memory block using `malloc` and `free`. [Code](100-realloc.c)

6. **Multiplying Positive Numbers**: A program that multiplies two positive numbers provided as command-line arguments. It uses `_putchar` for character output. [Code](mul.c)

## Usage

Each program or function includes a brief description of its purpose and usage in its respective code file. You can compile and run these programs using a C compiler (e.g., `gcc`) and follow the provided instructions.

For example, to compile and run the "Multiplying Positive Numbers" program:

```shell
gcc -o multiply multiply.c
./multiply num1 num2
