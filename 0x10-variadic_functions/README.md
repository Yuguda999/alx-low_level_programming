# Variadic Functions

This repository contains C functions for printing and summing various types of values, developed as part of a conversation with the ChatGPT language model.

## Functions

### `int sum_them_all(const unsigned int n, ...)`

This function calculates the sum of all its parameters. It takes the number of parameters `n` and a variable number of integers as arguments. If `n` is 0, it returns 0.

Example usage:
```c
int result = sum_them_all(3, 1, 2, 3); // Returns 6
```

### `void print_numbers(const char *separator, const unsigned int n, ...)`

This function prints numbers with a specified separator and adds a newline at the end. It takes a separator string, the number of integers `n`, and a variable number of integers as arguments. If separator is NULL, it won't be printed.

Example usage:
```c
print_numbers(", ", 4, 1, 2, 3, 4); // Prints "1, 2, 3, 4\n"
```

### `void print_strings(const char *separator, const unsigned int n, ...)`

This function prints strings with a specified separator and handles NULL strings by printing "(nil)" instead. It adds a newline at the end. It takes a separator string, the number of strings `n`, and a variable number of strings as arguments. If separator is NULL, it won't be printed.

Example usage:
```c
print_strings(", ", 3, "Hello", "World", NULL); // Prints "Hello, World, (nil)\n"
```

### `void print_all(const char * const format, ...)`

This function prints values of different types based on the provided format string. It supports printing characters, integers, floats, and strings. If a string is NULL, it prints "(nil)" instead. It adds a newline at the end. The format string specifies the types and order of the arguments.

Example usage:
```c
print_all("cifs", 'H', 42, 3.14, "ChatGPT"); // Prints "H, 42, 3.140000, ChatGPT\n"
```
