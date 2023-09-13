# FUNCTION POINTERS BASICS


## Program: Calculator (calc.c)

The `calc.c` program is a basic calculator that takes two numbers and an operator as input and performs the specified arithmetic operation. It supports error handling and follows the specified coding style.

### Usage:

```
./calc num1 operator num2
```

- `num1` and `num2` are integers.
- Supported operators: `+`, `-`, `*`, `/`, `%`

### Features:

- Handles error cases:
  - Incorrect number of arguments (exit status 98)
  - Invalid operator (exit status 99)
  - Division by zero (exit status 100)
- Encloses return values in parentheses for clarity.
- Follows the specified coding style with tabs for indentation.

## Program: Opcode Printer (opcode.c)

The `opcode.c` program prints the opcodes of its own main function. It supports error handling, uses tabs for indentation, and adheres to the specified coding style.

### Usage:

```
./opcode number_of_bytes
```

- Outputs opcodes in hexadecimal (lowercase) format.
- Supports error handling:
  - Incorrect number of arguments (exit status 1)
  - Negative number of bytes (exit status 2)

## Code Snippets

### 1. Function to Print Name (print_name.c)

This code defines a function that prints a name. It adheres to the Betty code style.

```c
void print_name(char *name, void (*f)(char *));
```

### 2. Function to Execute on Array Elements (array_iterator.c)

This code defines a function that executes a provided function on each element of an array. It follows the Betty code style and uses tabs for indentation.

```c
void array_iterator(int *array, size_t size, void (*action)(int));
```

### 3. Function Pointer Examples (function_pointers.c)

This code provides examples of using function pointers, including calling functions through pointers and using arrays of function pointers. It adheres to the Betty code style.

### 4. Calculator Functions (3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c)

These code files implement a calculator program with modularized functions for different operations. They follow the Betty code style and use tabs for indentation.

## How to Run the Programs

Compile the C programs using a C compiler (e.g., `gcc`). Here's an example of how to compile and run the calculator program:

```shell
gcc -o calc calc.c
./calc 5 + 3
```

Compile and run the opcode printer program similarly. Ensure you have a C development environment set up.

## Note

- The opcode output may vary depending on the platform and compiler used.
- For opcode translation to assembly instructions, tools like `udcli` can be useful.

